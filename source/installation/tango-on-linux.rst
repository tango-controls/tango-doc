.. _tango_on_linux:

Linux
=======

:audience:`administrators, developers`

Debian + Ubuntu
---------------
Binary packages are available for Debian based systems in the official repositories.
Use apt-get to install them e.g. to install the Tango database and test device server:

.. code-block:: console

   $> sudo apt install mariadb-server\
      sudo apt install tango-db tango-test


The above packages install the Tango core C++ libraries, database and TangoTest server. 

Non-interactive installation
~~~~~~~~~~~~~~~~~~~~~~~~~~~~

If you want to install in non-interactive way, here are the steps you need to follow:

- installation of non-interactive installation tools (with administration rights):

.. code-block:: console

    $> sudo apt install --assume-yes debconf 


- setting root password for MariaDB package installation

.. code-block:: console

    $> echo "mariadb-server mysql-server/root_password password ${DB_ROOT_PASSWORD}" | sudo debconf-set-selections\
       echo "mariadb-server mysql-server/root_password_again password ${DB_ROOT_PASSWORD}" | sudo debconf-set-selections

where :envvar:`${DB_ROOT_PASSWORD}` is your MariaDB database root password you want to set.


- mariadb package installation:

.. code-block:: console

    $> sudo apt install --assume-yes mariadb-client mariadb-server


- answering to the mysql_secure_installation questions:

.. code-block:: console

    $> sudo apt install --assume-yes expect\
       SECURE_MYSQL=$(sudo expect -c "
          set timeout 10
          spawn mysql_secure_installation
          expect \"Enter current password for root (enter for none):\"
          send \"${DB_ROOT_PASSWORD}\r\"
          expect \"Change the root password?\"
          send \"n\r\"
          expect \"Remove anonymous users?\"
          send \"y\r\"
          expect \"Disallow root login remotely?\"
          send \"y\r\"
          expect \"Remove test database and access to it?\"
          send \"y\r\"
          expect \"Reload privilege tables now?\"
          send \"y\r\"
          expect eof
          ")\
      echo "${SECURE_MYSQL}"


- setting parameters for tango-db package installation:

.. code-block:: console

    $> echo "tango-common tango-common/tango-host string ${TANGOSERVER}:${TANGOPORT}" | sudo debconf-set-selections\
       echo 'tango-db tango-db/dbconfig-install boolean true' | sudo debconf-set-selections\
       echo "tango-db tango-db/mysql/admin-pass string ${DB_ROOT_PASSWORD}"  | sudo debconf-set-selections\
       echo "tango-db tango-db/mysql/app-pass password ${DB_TANGO_PASSWORD}" | sudo debconf-set-selections

where :envvar:`${TANGOSERVER}` is the Tango Host name, 
:envvar:`${TANGOPORT}` is the Tango Host port on which will be waited the Tango connections,
:envvar:`${DB_ROOT_PASSWORD}` is your MariaDB database root password you set during 
MariaDB installation 
and :envvar:`${DB_TANGO_PASSWORD}` is your MariaDB tango database you want to set 
and which will be used by Tango tools.

- tango-db package installation:

.. code-block:: console

    $> sudo apt install --assume-yes tango-db


- tango-test package installation 

.. code-block:: console

   $> sudo apt install --assume-yes tango-test



Other packages
~~~~~~~~~~~~~~

You will also need the Java based tools like jive, astor etc.
These are available with the :ref:`source code installation<source_code_install>`. 

Another option is to install the latest binary Java debian package for Tango 9.2.5 
(assuming you have installed Tango 9.2.5) from ``https://people.debian.org/~picca/libtango-java_9.2.5a-1_all.deb``

To install this binary package do the following:

.. code-block:: console

    $> sudo apt install --assume-yes wget\
       wget -c https://people.debian.org/~picca/libtango-java_9.2.5a-1_all.deb\
       sudo dpkg -i ./libtango-java_9.2.5a-1_all.deb

You will then have the Tango Java tools installed in /usr/bin e.g. /usr/bin/jive

You might also want PyTango. Python binaries can be installed from the official repositories, either

.. code-block:: console

       $> apt install python3-pytango

or if you need specifically Python2

.. code-block:: console

       $> apt-get python-pytango


CentOS
------
RPM packages are available for RedHat based systems in `the MAX-IV's repository <http://pubrepo.maxiv.lu.se/rpm/el7/x86_64/>`_.
Use yum to install them e.g. to install the TANGO database and test device server:

.. code-block:: console

   $> sudo yum install mariadb\
      sudo yum install libtango9 tango-db tango-test


The above packages install the Tango core C++ libraries, database and TangoTest server.

Video
-----

The following video (by Mohamed Cherif Areour, in French with English subtitles) shows you how to install Tango on Ubuntu and LinuxMint.

..  raw:: html

       <iframe width="560" height="315" src="https://www.youtube.com/embed/f903EIbiv6w?rel=0" frameborder="0" allowfullscreen></iframe>

|
|

Testing
-------
**How to test that everything was correctly installed**


You have to have *"tango-test"* been installed and check where is it located (you can use *"locate TangoTest"* command) and start it with *"test"* instance.

For example:

.. code-block:: console

       $> /usr/lib/tango/TangoTest test


Console should display "Ready to accept request".

After you may go to :ref:`Jive<jive_manual>` and choose the following window (see the image below):

.. image:: tango-on-linux/jive.png

TangoTest (it is a :term:`server <device server>`)-> test (it is an :term:`instance <device server instance>`) -> TangoTest (it is a :term:`class <device class>`) -> sys/tg-test/1 (it is a :term:`device <device>`)


Right click on the device and choose *"Test device"*.

You should get a new window with *"Attributes"* where you should see the values. That means you have done everything correct.

