
.. How-To try
 

Raspberry Pi
==============

:audience:`developers`

.. figure:: tango-on-raspberry-pi/raspberry_pi_200x200.jpg
    :width: 200px
    :align: center
    :height: 200px
    :alt: alternate text
    :figclass: align-center

Installing Tango on a Raspberry is very simple -  just one line command.


Installation with database
--------------------------

If you need the local database, process this installation **before** other installation

.. code-block:: console
   :linenos:

   $ sudo apt install mysql-server mysql-client
   $ sudo apt install tango-db tango-common

More details on readthedocs_

.. warning::
    The ERAS project ReadTheDocs entry does not exist. Please refer to the PDF on the other side of the provided link.


Installation without database
-----------------------------

On Raspberry 2 and 3, it is better to wait for the network on booting.

(Raspberry PI Preference menu, wait on boot, check "wait for network")

**TANGO installation (one line command) :**

.. code-block:: console
   :linenos:

   $> sudo apt install tango-starter tango-test liblog4j1.2-java

**Graphic tools (Jive, Astor,...) installation :**

download the latest version of libtango-java librairies on picca_


and installing

.. code-block:: console

   $> sudo apt install --assume-yes wget\
      wget -c https://people.debian.org/~picca/libtango-java_XX_version.deb\
      sudo dpkg -i ./libtango-java_XX_version.deb




.. definitions
  ------------
.. _readthedocs: https://media.readthedocs.org/pdf/eras/latest/eras.pdf
.. _picca: https://people.debian.org/~picca
