
.. How-To try

How To Install TANGO On Raspberry PI In One Line Command
========================================================

.. figure:: how-to-install-tango-on-raspberry-pi/raspberry_pi_200x200.jpg
    :width: 200px
    :align: center
    :height: 200px
    :alt: alternate text
    :figclass: align-center

    By Olivier Taché

Installing Tango on Raspberry is very simple with a just one line
command

This is a summary of all the already published tips on forum or
mailinglist.

Installation without database
-----------------------------

On raspberry 2 and 3, it is better to wait for the network on booting.

(Raspberry PI Preference menu, wait on boot, check "wait for network")

**TANGO installation (one line command) :**

.. code-block:: console
   :linenos:

   $ sudo apt-get install tango-starter tango-test python-sardana liblog4j1.2-java

**Graphic tools (Jive, Astor,...) installation :**

download the latest version of libtango-java librairies on picca_


and installing

.. code-block:: console
   :linenos:

   $ sudo dpkg -i ./whereyoudownload/libtango-java.XX.version.deb

Installation with database
--------------------------

If you need the local database, process this installation **before **

.. code-block:: console
   :linenos:

   $ sudo apt-get install mysql-server mysql-client
   $ sudo apt-get install tango-db tango-common

More details on readthedocs_

.. definitions
  ------------
.. _readthedocs: http://eras.readthedocs.io/en/latest/doc/setup.html
.. _picca: https://people.debian.org/~picca