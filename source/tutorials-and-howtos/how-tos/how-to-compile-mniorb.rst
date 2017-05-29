
.. How-To try

How to cross compile omniORB
============================


This HowTo gives details on how you can cross compile omniORB.

When used with C++ or Python, Tango requires the omniORB_
librairies. Depending on the hardware on which you want to run Tango
device server or client, it is sometimes needed to cross-compile Tango
and therefore to cross compile omniORB. omniORB is distributed as a set
of CORBA idl and cpp files. When you build omniORB, the idl files are
compiled by a CORBA IDL to C++ compiler before they are sent to a
classical C++ compiler with the set of cpp files in order to build the
libraries. This is represented in the following figure


From this figure it is easay to understand that the first thing which is
done when you build omniORB is to build the IDL to C++ compler which
will be used in the following build steps. When you cross-compile
omniORB, you provide to the configure command line the path to the C++
and C compilers for the target hardware
(CXX=path\_to\_target\_cpp\_compiler and
CC=path\_to\_target\_C\_compiler). If you don't take special care,
omniORB build system will create the IDL to C++ compiler using these
tools and it will generate an executable for your target host which will
obviously not run on your compilation host. If for instance, you cross
compile omniORB on a x64 host for a ARM CPU, the IDL to C++ compiler
will be created for the ARM architecture and will certainly not run on
your x64 host.

Here are what you have to type to correctly cross-compile omniORB:

.. code-block:: console
   :linenos:

   $ TOP=/path_to_where_omniORB_has_been_downloaded
   $ tar xjf $(TOP)/omniORB-4.1.7.tar.bz2
   $ cd omniORB-4.1.7
   $ mkdir build
   $ cd build
   $ ../configure --prefix=/opt/tango/orb/omniORB-4.1.7/arm 
                 CC=/opt/Xilinx/SDK/2013.2/gnu/arm/lin/bin/arm-xilinx-linux-gnueabi-gcc 
                 CXX=/opt/Xilinx/SDK/2013.2/gnu/arm/lin/bin/arm-xilinx-linux-gnueabi-g++ 
                 --host=arm-xilinx-linux-gnueabi 
                 --build=x86_64-unknown-linux-gnu


When the configure command is run, the **CC** and **CXX** variables
define the target architecture C and Cpp compilers. the configure
**host** option defines the target architecture while the **build**
option defines the architecture on which the cross compilation is done.

We now need to build the IDL to Cpp compiler

with the local compilers

.. code-block:: console
   :linenos:

   $ make CC=gcc-4.7 -C src/tool/omniidl/cxx/cccp
   $ make CXX=g++-4.7 -C src/tool/omniidl/cxx
   $ make CC=gcc-4.7 -C src/tool/omkdepend


There are some small changes required in the omniORB build system: Edit
dir.mk file in following directories:

-   omniORB-4.1.7/src/appl/omniMapper/dir.mk
-   omniORB-4.1.7/src/appl/omniNames/dir.mk
-   omniORB-4.1.7/src/appl/utils/catior/dir.mk
-   omniORB-4.1.7/src/appl/utils/convertior/dir.mk
-   omniORB-4.1.7/src/appl/utils/genior/dir.mk
-   omniORB-4.1.7/src/appl/utils/nameclt/dir.mk

to find the definition **@(libs="\$(CORBA\_LIB\_NODYN)";
\$(CXXExecutable))** and replace it by **@(libs="\$(CORBA\_LIB\_NODYN)
-lstdc++"; \$(CXXExecutable))**

 

Then finally build the omniORB libs

.. code-block:: console
   :linenos:

   $ make
   $ sudo make install

The omniORB Wiki_ and experiments done by ESRF colleagues have been used to write this HowTo.

.. definitions
  ------------
.. _omniORB: http://omniorb.sourceforge.net
.. _Wiki: http://www.omniorb-support.com/omniwiki/CrossCompiling
