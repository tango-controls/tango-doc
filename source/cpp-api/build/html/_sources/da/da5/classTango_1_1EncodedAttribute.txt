+----------+---------------------------------------+
| |Logo|   | Tango Core Classes Reference  9.2.5   |
+----------+---------------------------------------+

-  `Main Page <../../index.html>`__
-  `Related Pages <../../pages.html>`__
-  `Modules <../../modules.html>`__
-  `Namespaces <../../namespaces.html>`__
-  `Classes <../../annotated.html>`__
-  `Files <../../files.html>`__

-  `Class List <../../annotated.html>`__
-  `Class Hierarchy <../../inherits.html>`__
-  `Class Members <../../functions.html>`__

`Classes <#nested-classes>`__ \| `List of all
members <../../d4/d4d/classTango_1_1EncodedAttribute-members.html>`__

Tango::EncodedAttribute Class Reference

`Server classes <../../da/d64/group__Server.html>`__

This class provides method to deal with Tango::DevEncoded attribute
format.
`More... <../../da/da5/classTango_1_1EncodedAttribute.html#details>`__

Public Member Functions
-----------------------

Constructors

Miscellaneous constructors

 

`EncodedAttribute <../../da/da5/classTango_1_1EncodedAttribute.html#a2d44e9152c929390d51fd631f5e31d37>`__
()

 

| Create a new
`EncodedAttribute <../../da/da5/classTango_1_1EncodedAttribute.html>`__
object. `More... <#a2d44e9152c929390d51fd631f5e31d37>`__

 

 

`EncodedAttribute <../../da/da5/classTango_1_1EncodedAttribute.html#a63df51e7343e74e6f10253f6fd69a8ea>`__
(int buf\_pool\_size, bool serialization=false)

 

| Create a new
`EncodedAttribute <../../da/da5/classTango_1_1EncodedAttribute.html>`__
object with a user defined buffer pool.
`More... <#a63df51e7343e74e6f10253f6fd69a8ea>`__

 

Destructor

Only one desctructor is defined for this class

 

`~EncodedAttribute <../../da/da5/classTango_1_1EncodedAttribute.html#a6e013aa1fbfaa40971b3db1a32c17970>`__
()

 

| The attribute desctructor.
`More... <#a6e013aa1fbfaa40971b3db1a32c17970>`__

 

Image Encoding Methods

void 

`encode\_jpeg\_gray8 <../../da/da5/classTango_1_1EncodedAttribute.html#a7a98013fc1577c67127c0cca9b192b88>`__
(unsigned char \*gray8, int width, int height, double quality)

 

| Encode a 8 bit grayscale image as JPEG format.
`More... <#a7a98013fc1577c67127c0cca9b192b88>`__

 

void 

`encode\_jpeg\_rgb32 <../../da/da5/classTango_1_1EncodedAttribute.html#afd6be02fbf49d3f7823679d190eea0a1>`__
(unsigned char \*rgb32, int width, int height, double quality)

 

| Encode a 32 bit rgb color image as JPEG format.
`More... <#afd6be02fbf49d3f7823679d190eea0a1>`__

 

void 

`encode\_jpeg\_rgb24 <../../da/da5/classTango_1_1EncodedAttribute.html#a2bf74ff1635f2d3120dd0cdbef5e0c00>`__
(unsigned char \*rgb24, int width, int height, double quality)

 

| Encode a 24 bit rgb color image as JPEG format.
`More... <#a2bf74ff1635f2d3120dd0cdbef5e0c00>`__

 

void 

`encode\_gray8 <../../da/da5/classTango_1_1EncodedAttribute.html#a0aeecda296c64b53ab43317e94e6ac35>`__
(unsigned char \*gray8, int width, int height)

 

| Encode a 8 bit grayscale image (no compression)
`More... <#a0aeecda296c64b53ab43317e94e6ac35>`__

 

void 

`encode\_gray16 <../../da/da5/classTango_1_1EncodedAttribute.html#aa67d49c4b99bd6e91e80138acca7a1a4>`__
(unsigned short \*gray16, int width, int height)

 

| Encode a 16 bit grayscale image (no compression)
`More... <#aa67d49c4b99bd6e91e80138acca7a1a4>`__

 

void 

`encode\_rgb24 <../../da/da5/classTango_1_1EncodedAttribute.html#a8c0850a138718cf1a1513c20c1e58844>`__
(unsigned char \*rgb24, int width, int height)

 

| Encode a 24 bit color image (no compression)
`More... <#a8c0850a138718cf1a1513c20c1e58844>`__

 

Image Decoding Methods

void 

`decode\_rgb32 <../../da/da5/classTango_1_1EncodedAttribute.html#a0a64f653b5fe0049cb04daf0740c4755>`__
(`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
\*attr, int \*width, int \*height, unsigned char \*\*rgb32)

 

| Decode a color image (JPEG\_RGB or RGB24) and returns a 32 bits RGB
image. `More... <#a0a64f653b5fe0049cb04daf0740c4755>`__

 

void 

`decode\_gray8 <../../da/da5/classTango_1_1EncodedAttribute.html#ae12a9771857f2fecbebd3b9381213ab5>`__
(`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
\*attr, int \*width, int \*height, unsigned char \*\*gray8)

 

| Decode a 8 bits grayscale image (JPEG\_GRAY8 or GRAY8) and returns a 8
bits gray scale image. `More... <#ae12a9771857f2fecbebd3b9381213ab5>`__

 

void 

`decode\_gray16 <../../da/da5/classTango_1_1EncodedAttribute.html#a76fef5a1583210da6f06d7e3fe5bf7bb>`__
(`DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__
\*attr, int \*width, int \*height, unsigned short \*\*gray16)

 

| Decode a 16 bits grayscale image (GRAY16) and returns a 16 bits gray
scale image. `More... <#a76fef5a1583210da6f06d7e3fe5bf7bb>`__

 

Detailed Description
--------------------

This class provides method to deal with Tango::DevEncoded attribute
format.

Constructor & Destructor Documentation
--------------------------------------

+---------------------------------------------+-----+----+-----+----+
| Tango::EncodedAttribute::EncodedAttribute   | (   |    | )   |    |
+---------------------------------------------+-----+----+-----+----+

Create a new
`EncodedAttribute <../../da/da5/classTango_1_1EncodedAttribute.html>`__
object.

+---------------------------------------------+-----+---------+--------------------------------+
| Tango::EncodedAttribute::EncodedAttribute   | (   | int     | *buf\_pool\_size*,             |
+---------------------------------------------+-----+---------+--------------------------------+
|                                             |     | bool    | *serialization* = ``false``    |
+---------------------------------------------+-----+---------+--------------------------------+
|                                             | )   |         |                                |
+---------------------------------------------+-----+---------+--------------------------------+

Create a new
`EncodedAttribute <../../da/da5/classTango_1_1EncodedAttribute.html>`__
object with a user defined buffer pool.

This constructor allows the user to define the size of the buffer pool
used to store the encoded images. This buffer pool is managed as a
circular pool. A different buffer is used each time an image is encoded.
The last used buffer is then passed to the attribute with the
attribute::set\_value() method

Parameters
    +-------------------+--------------------------------------------------------------------+
    | buf\_pool\_size   | Buffer pool size                                                   |
    +-------------------+--------------------------------------------------------------------+
    | serialization     | Set to true if the instance manage the data buffer serialization   |
    +-------------------+--------------------------------------------------------------------+

+----------------------------------------------+-----+----+-----+----+
| Tango::EncodedAttribute::~EncodedAttribute   | (   |    | )   |    |
+----------------------------------------------+-----+----+-----+----+

The attribute desctructor.

Member Function Documentation
-----------------------------

+------------------------------------------------+-----+-----------------------------------------------------------------------------+-------------+
| void Tango::EncodedAttribute::decode\_gray16   | (   | `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ \*    | *attr*,     |
+------------------------------------------------+-----+-----------------------------------------------------------------------------+-------------+
|                                                |     | int \*                                                                      | *width*,    |
+------------------------------------------------+-----+-----------------------------------------------------------------------------+-------------+
|                                                |     | int \*                                                                      | *height*,   |
+------------------------------------------------+-----+-----------------------------------------------------------------------------+-------------+
|                                                |     | unsigned short \*\*                                                         | *gray16*    |
+------------------------------------------------+-----+-----------------------------------------------------------------------------+-------------+
|                                                | )   |                                                                             |             |
+------------------------------------------------+-----+-----------------------------------------------------------------------------+-------------+

Decode a 16 bits grayscale image (GRAY16) and returns a 16 bits gray
scale image.

Throws DevFailed in case of failure.

Parameters
    +----------+-------------------------------------------------------------------------------------------------+
    | attr     | `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ that contains the image   |
    +----------+-------------------------------------------------------------------------------------------------+
    | width    | Width of the image                                                                              |
    +----------+-------------------------------------------------------------------------------------------------+
    | height   | Height of the image                                                                             |
    +----------+-------------------------------------------------------------------------------------------------+
    | gray16   | Image (memory allocated by the function)                                                        |
    +----------+-------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+-----------------------------------------------------------------------------+-------------+
| void Tango::EncodedAttribute::decode\_gray8   | (   | `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ \*    | *attr*,     |
+-----------------------------------------------+-----+-----------------------------------------------------------------------------+-------------+
|                                               |     | int \*                                                                      | *width*,    |
+-----------------------------------------------+-----+-----------------------------------------------------------------------------+-------------+
|                                               |     | int \*                                                                      | *height*,   |
+-----------------------------------------------+-----+-----------------------------------------------------------------------------+-------------+
|                                               |     | unsigned char \*\*                                                          | *gray8*     |
+-----------------------------------------------+-----+-----------------------------------------------------------------------------+-------------+
|                                               | )   |                                                                             |             |
+-----------------------------------------------+-----+-----------------------------------------------------------------------------+-------------+

Decode a 8 bits grayscale image (JPEG\_GRAY8 or GRAY8) and returns a 8
bits gray scale image.

Throws DevFailed in case of failure.

Parameters
    +----------+-------------------------------------------------------------------------------------------------+
    | attr     | `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ that contains the image   |
    +----------+-------------------------------------------------------------------------------------------------+
    | width    | Width of the image                                                                              |
    +----------+-------------------------------------------------------------------------------------------------+
    | height   | Height of the image                                                                             |
    +----------+-------------------------------------------------------------------------------------------------+
    | gray8    | Image (memory allocated by the function)                                                        |
    +----------+-------------------------------------------------------------------------------------------------+

+-----------------------------------------------+-----+-----------------------------------------------------------------------------+-------------+
| void Tango::EncodedAttribute::decode\_rgb32   | (   | `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ \*    | *attr*,     |
+-----------------------------------------------+-----+-----------------------------------------------------------------------------+-------------+
|                                               |     | int \*                                                                      | *width*,    |
+-----------------------------------------------+-----+-----------------------------------------------------------------------------+-------------+
|                                               |     | int \*                                                                      | *height*,   |
+-----------------------------------------------+-----+-----------------------------------------------------------------------------+-------------+
|                                               |     | unsigned char \*\*                                                          | *rgb32*     |
+-----------------------------------------------+-----+-----------------------------------------------------------------------------+-------------+
|                                               | )   |                                                                             |             |
+-----------------------------------------------+-----+-----------------------------------------------------------------------------+-------------+

Decode a color image (JPEG\_RGB or RGB24) and returns a 32 bits RGB
image.

Throws DevFailed in case of failure.

Parameters
    +----------+-------------------------------------------------------------------------------------------------+
    | attr     | `DeviceAttribute <../../d7/dca/classTango_1_1DeviceAttribute.html>`__ that contains the image   |
    +----------+-------------------------------------------------------------------------------------------------+
    | width    | Width of the image                                                                              |
    +----------+-------------------------------------------------------------------------------------------------+
    | height   | Height of the image                                                                             |
    +----------+-------------------------------------------------------------------------------------------------+
    | rgb32    | Image (memory allocated by the function)                                                        |
    +----------+-------------------------------------------------------------------------------------------------+

+------------------------------------------------+-----+----------------------+-------------+
| void Tango::EncodedAttribute::encode\_gray16   | (   | unsigned short \*    | *gray16*,   |
+------------------------------------------------+-----+----------------------+-------------+
|                                                |     | int                  | *width*,    |
+------------------------------------------------+-----+----------------------+-------------+
|                                                |     | int                  | *height*    |
+------------------------------------------------+-----+----------------------+-------------+
|                                                | )   |                      |             |
+------------------------------------------------+-----+----------------------+-------------+

Encode a 16 bit grayscale image (no compression)

Parameters
    +----------+------------------------------+
    | gray16   | Array of 16bit gray sample   |
    +----------+------------------------------+
    | width    | The image width              |
    +----------+------------------------------+
    | height   | The image height             |
    +----------+------------------------------+

+-----------------------------------------------+-----+---------------------+-------------+
| void Tango::EncodedAttribute::encode\_gray8   | (   | unsigned char \*    | *gray8*,    |
+-----------------------------------------------+-----+---------------------+-------------+
|                                               |     | int                 | *width*,    |
+-----------------------------------------------+-----+---------------------+-------------+
|                                               |     | int                 | *height*    |
+-----------------------------------------------+-----+---------------------+-------------+
|                                               | )   |                     |             |
+-----------------------------------------------+-----+---------------------+-------------+

Encode a 8 bit grayscale image (no compression)

Parameters
    +----------+-----------------------------+
    | gray8    | Array of 8bit gray sample   |
    +----------+-----------------------------+
    | width    | The image width             |
    +----------+-----------------------------+
    | height   | The image height            |
    +----------+-----------------------------+

+-----------------------------------------------------+-----+---------------------+--------------+
| void Tango::EncodedAttribute::encode\_jpeg\_gray8   | (   | unsigned char \*    | *gray8*,     |
+-----------------------------------------------------+-----+---------------------+--------------+
|                                                     |     | int                 | *width*,     |
+-----------------------------------------------------+-----+---------------------+--------------+
|                                                     |     | int                 | *height*,    |
+-----------------------------------------------------+-----+---------------------+--------------+
|                                                     |     | double              | *quality*    |
+-----------------------------------------------------+-----+---------------------+--------------+
|                                                     | )   |                     |              |
+-----------------------------------------------------+-----+---------------------+--------------+

Encode a 8 bit grayscale image as JPEG format.

Parameters
    +-----------+----------------------------------------------------+
    | gray8     | Array of 8bit gray sample                          |
    +-----------+----------------------------------------------------+
    | width     | The image width                                    |
    +-----------+----------------------------------------------------+
    | height    | The image height                                   |
    +-----------+----------------------------------------------------+
    | quality   | Quality of JPEG (0=poor quality 100=max quality)   |
    +-----------+----------------------------------------------------+

+-----------------------------------------------------+-----+---------------------+--------------+
| void Tango::EncodedAttribute::encode\_jpeg\_rgb24   | (   | unsigned char \*    | *rgb24*,     |
+-----------------------------------------------------+-----+---------------------+--------------+
|                                                     |     | int                 | *width*,     |
+-----------------------------------------------------+-----+---------------------+--------------+
|                                                     |     | int                 | *height*,    |
+-----------------------------------------------------+-----+---------------------+--------------+
|                                                     |     | double              | *quality*    |
+-----------------------------------------------------+-----+---------------------+--------------+
|                                                     | )   |                     |              |
+-----------------------------------------------------+-----+---------------------+--------------+

Encode a 24 bit rgb color image as JPEG format.

Parameters
    +-----------+----------------------------------------------------+
    | rgb24     | Array of 32bit RGB sample (RGBRGB...)              |
    +-----------+----------------------------------------------------+
    | width     | The image width                                    |
    +-----------+----------------------------------------------------+
    | height    | The image height                                   |
    +-----------+----------------------------------------------------+
    | quality   | Quality of JPEG (0=poor quality 100=max quality)   |
    +-----------+----------------------------------------------------+

+-----------------------------------------------------+-----+---------------------+--------------+
| void Tango::EncodedAttribute::encode\_jpeg\_rgb32   | (   | unsigned char \*    | *rgb32*,     |
+-----------------------------------------------------+-----+---------------------+--------------+
|                                                     |     | int                 | *width*,     |
+-----------------------------------------------------+-----+---------------------+--------------+
|                                                     |     | int                 | *height*,    |
+-----------------------------------------------------+-----+---------------------+--------------+
|                                                     |     | double              | *quality*    |
+-----------------------------------------------------+-----+---------------------+--------------+
|                                                     | )   |                     |              |
+-----------------------------------------------------+-----+---------------------+--------------+

Encode a 32 bit rgb color image as JPEG format.

Parameters
    +-----------+----------------------------------------------------+
    | rgb32     | Array of 32bit RGB sample (RGB0RGB0...)            |
    +-----------+----------------------------------------------------+
    | width     | The image width                                    |
    +-----------+----------------------------------------------------+
    | height    | The image height                                   |
    +-----------+----------------------------------------------------+
    | quality   | Quality of JPEG (0=poor quality 100=max quality)   |
    +-----------+----------------------------------------------------+

+-----------------------------------------------+-----+---------------------+-------------+
| void Tango::EncodedAttribute::encode\_rgb24   | (   | unsigned char \*    | *rgb24*,    |
+-----------------------------------------------+-----+---------------------+-------------+
|                                               |     | int                 | *width*,    |
+-----------------------------------------------+-----+---------------------+-------------+
|                                               |     | int                 | *height*    |
+-----------------------------------------------+-----+---------------------+-------------+
|                                               | )   |                     |             |
+-----------------------------------------------+-----+---------------------+-------------+

Encode a 24 bit color image (no compression)

Parameters
    +----------+-----------------------------+
    | rgb24    | Array of 24bit RGB sample   |
    +----------+-----------------------------+
    | width    | The image width             |
    +----------+-----------------------------+
    | height   | The image height            |
    +----------+-----------------------------+

--------------

The documentation for this class was generated from the following file:

-  `encoded\_attribute.h <../../da/dc2/encoded__attribute_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `EncodedAttribute <../../da/da5/classTango_1_1EncodedAttribute.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
