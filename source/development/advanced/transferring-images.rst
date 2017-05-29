.. _transfering_images:

Transferring images
===================

Some optimized methods have been written to optimize image transfer
between client and server using the attribute DevEncoded data type. All
these methods have been merged in a class called EncodedAttribute.
Within this class, you will find methods to:

-  Encode an image in a compressed way (JPEG) for images coded on 8
   (gray scale), 24 or 32 bits

-  Encode a grey scale image coded on 8 or 16 bits

-  Encode a color image coded on 24 bits

-  Decode images coded on 8 or 16 bits (gray scale) and returned a 8 or
   bits grey scale image

-  Decode color images transmitted using a compressed format (JPEG) and
   returns a 32 bits RGB image

The following code snippets are examples of how these methods have to be
used in a server and in a client. On the server side, creates an
instance of the EncodedAttribute class within your object

.. code:: cpp
  :number-lines:

   class MyDevice::Tango::Device_4Impl
    {
        ...
        Tango::EncodedAttribute jpeg;
        ...
    }

In the code of your device, use an encoding method of the
EncodedAttribute class

.. code:: cpp
  :number-lines:

   void MyDevice::read_Encoded_attr_image(Tango::Attribute &att)
   {
        ....
        jpeg.encode_jpeg_gray8(imageData,256,256,50.0);
        att.set_value(&jpeg);
   }

Line 4: Image encoding. The size of the image is 256 by 256. Each pixel
is coded using 8 bits. The encoding quality is defined to 50 in a scale
of 0 - 100. imageData is the pointer to the image data (pointer to
unsigned char)

Line 5: Set the value of the attribute using a *Attribute::set\_value()*
method.

On the client side, the code is the following (without exception
management)

.. code:: cpp
  :number-lines:

      ....
      DeviceAttribute da;
      EncodedAttribute att;
      int width,height;
      unsigned char *gray8;

      da = device.read_attribute("Encoded_attr_image");
      att.decode_gray8(&da,&width,&height,&gray8);
      ....
     delete [] gray8;
     ...

The attribute named Encoded\_attr\_image is read at line7. The image is
decoded at line 8 in a 8 bits gray scale format. The image data are
stored in the buffer pointed to by gray8. The memory allocated by the
image decoding at line 8 is returned to the system at line 10.