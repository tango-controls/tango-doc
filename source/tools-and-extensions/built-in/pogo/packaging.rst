Tango Server Packaging
----------------------

:audience:`developers`, :lang:`c++, java, python`

Since :program:`Pogo-8.3.0` on **Linux**, :program:`Pogo` allows you to create packaging
files to be used with autotools

Set the environment variable :envvar:`PKG_CONFIG_PATH`

-  e.g. for tango.pc file : :command:`export PKG_CONFIG_PATH=$TANGO_LIBS/pkgconfig`

You can find many examples on the web on pkg\_config\_path management.
In :program:`Pogo` or :program:`Multi classes GUI`, use :guilabel:`File` menu and :guilabel:`Export Package`
item.

A panel will be launched to define to configure packaging.

|image0|

After clicking on :guilabel:`OK` button, a new directory :file:`packaging` will be
  created.

You can use :program:`autotools` commands (:command:`autogen`, :command:`configure`, :command:`make`,
:command:`make install`, command:`make distcheck` to build a reliable packaging for your  server.

|image1|

|image2|

.. |image0| image:: img/PogoPackaging.gif

.. |image1| image:: img/configure1.gif

.. |image2| image:: img/configure2.gif

