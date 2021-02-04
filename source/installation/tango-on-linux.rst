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

   $> sudo yum install -y mariadb mariadb-server
      sudo yum install -y libtango9 tango-db tango-test


The above packages install the Tango core C++ libraries, database and TangoTest server.

Installation
~~~~~~~~~~~~

If you want to install TANGO on CentOS, here are the steps you should follow:

-  add the EPEL repository:

.. code-block:: console

    $> sudo yum install -y epel-release

-  add the MAX-IV's public repository by creating the following file:

.. code-block:: console

    $> sudo nano /etc/yum.repos.d/maxiv.repo
    [maxiv-public]
    name=MAX IV public RPM Packages - $basearch
    baseurl=http://pubrepo.maxiv.lu.se/rpm/el$releasever/$basearch
    gpgcheck=0
    enabled=1

    $> sudo yum makecache

-  install and start MariaDB:

.. code-block:: console

    $> sudo yum install -y mariadb-server mariadb
       sudo systemctl start mariadb
       sudo systemctl enable mariadb

-  run  mysql_secure_installation script:

.. code-block:: console

    $> sudo mysql_secure_installation

-  install  TANGO library:

.. code-block:: console

    $> sudo yum install -y libtango9 libtango9-devel

-  install  tango-db and tango-common packages:

.. code-block:: console

    $> sudo yum install -y tango-db tango-common

-  create TANGO database:

.. code-block:: console

    $> cd /usr/share/tango-db/
       sudo ./create_db.sh

-  set up TANGO environment:

   .. note::

      You should not use `localhost` as your TANGO_HOST.
      You can set the machine hostname using :command:`sudo hostnamectl set-hostname tangobox`

.. code-block:: console

    $> sudo nano /etc/tangorc

For example:

.. code-block:: console

    TANGO_HOST=tangobox:10000

-  set up environment variables:

.. code-block:: console

    $> sudo nano /etc/profile.d/tango.sh

For example:

.. code-block:: console

    . /etc/tangorc
    export TANGO_HOST

-  start and enable TANGO database:

.. code-block:: console

    $> sudo systemctl start tango-db
       sudo systemctl enable tango-db

-  install  Starter and TangoTest:

.. code-block:: console

    $> sudo yum install -y tango-starter tango-test

-  start and enable Starter:

.. code-block:: console

    $> sudo systemctl start tango-starter
       sudo systemctl enable tango-starter

-  install Java based tools:

.. code-block:: console

    $> sudo yum install -y tango-java

-  install PyTango:

.. code-block:: console

    $> sudo yum install -y python-pytango

Arch
----
An AUR package exists `here <https://aur.archlinux.org/packages/tango/>`_

Download and install it from there, or use your favourite AUR helper application to do the work for you.

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

