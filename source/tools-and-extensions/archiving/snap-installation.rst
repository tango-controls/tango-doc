.. _snap_installation:

SNAPshot (Archiving) installation and configuration
===================================================

:audience:`administrators, users, developers`


Overview
~~~~~~~~

The :ref:`SNAPshot <SNAP>` system is distributed as a part of the
:ref:`Archiving <archiving_overview>` solution.

The server side consists of a database (either MySQL or Oracle) and a set of
device servers.
On the client side, the application :ref:`Bensikin <bensikin_manual>` is used.

To use SNAPshot system, at lease one device must be created for each class:

* *SnapManager*, responsible for creating snapshot contexts and applying
  snapshots to the devices,
* *SnapArchiver*, responsible for creating snapshots and storing them
  in the database,
* *SnapExtractor*, responsible for extracting snapshots from the database.

If more that one device of a particular class is defined, Archiving API will
randomly assign a device for each request.


Prerequisites
~~~~~~~~~~~~~

Following components are required to set-up and use Archiving:

* Tango Controls,
* SQL database (this guide assumes MariaDB 10),
* Java Runtime Environment (this guide assumes OpenJDK 8).

.. note::

    This guide assumes that the installation is performed on the Ubuntu system
    but it should be applicable also to the other GNU/Linux-based systems.

    To install SNAPshot on Windows, minor changes need to be applied, e.g.
    the applications from the *win32* directory should be used instead of
    the applications from the *linux* directory.


Installation
~~~~~~~~~~~~

Installation steps:

#. download and extract
   `the *ArchivingRoot* package <https://sourceforge.net/projects/tango-cs/files/tools/ArchivingRoot-16.2.4.zip/download>`_,
#. add the executable flag to the scripts located in ``bin/linux``,
#. add the executable flat to the scripts located in ``device/linux``,
#. replace the ``sh`` interpreter with ``bash`` in shebang in scripts located
   in ``bin/linux`` and in ``device/linux``. The scripts are not POSIX
   compliant,
#. run SQL script ``db/create-SNAPDB-InnoDB.sql`` to create the database
   and users,
#. set ``ARCHIVING_ROOT`` environment variable to point to the directory
   with the contents of the *ArchivingRoot* package.


Configuration
~~~~~~~~~~~~~

Configuration steps:

#. define following devices:
    =============== ============= ==========================
    Server/instance Class         Device
    =============== ============= ==========================
    SnapManager/1   SnapManager   archiving/snap/manager.1
    SnapExtractor/1 SnapExtractor archiving/snap/extractor.1
    SnapArchiver/1  SnapArchiver  archiving/snap/archiver.1
    =============== ============= ==========================
#. configure SnapManager class properties:
    * *DbUser*: snapmanager,
    * *DbPassword*: snapmanager,
#. configure SnapExtractor device properties:
    * *DbUser*: snapbrowser,
    * *DbPassword*: snapbrowser,
#. configure SnapArchiver device properties:
    * *DbUser*: snaparchiver,
    * *DbPassword*: snaparchiver,
    * *BeansFileName*: beansBeamline.xml.

.. note::

    If *BeansFileName* is configured as a device property but the server is
    still looking for the default *beans.xml* during startup,
    the *init* command must be executed as a workaround.

    ::

        ----- Hibernate Resources -----
        configure hibernate resource: beans.xml
        Exception in thread "main" org.springframework.beans.factory.BeanDefinitionStoreException: IOException parsing XML document from class path resource [beans.xml]; nested exception is java.io.FileNotFoundException: class path resource [beans.xml] cannot be opened because it does not exist
        ...
    
    Alternatively, *BeansFileName* can be configured as a class property.


Usage
~~~~~

To use SNAPshot system, all device servers must be started.

The application  ``bin/linux/bensikin-rw`` can be used to configure and
trigger snapshots. See :ref:`Bensikin manual <bensikin_manual>` for more
details.

.. note::

    The machine where *Bensikin* is running must have access to the snapshot
    database. *Bensikin* will use credentials specified in *SnapManager* class
    configuration.


Properties reference
~~~~~~~~~~~~~~~~~~~~

Following tables summarize configuration properties. The *Class* column
indicates that this is the class property. Otherwise it is a device property.

.. note::

    The database connection properties are defined in device classes:
    
    * *SnapManager* for Snap

    Every device and application that has to connect to a database will read
    the properties of these classes. However, every device can have
    its database connection properties redefined in the device properties.

.. |tbl_prop_desc| replace::     Device description
.. |tbl_prop_title| replace::    Project description
.. |tbl_prop_dbuser| replace::   User name used to connect to the database
.. |tbl_prop_dbpass| replace::   Password used to connect ot the database
.. |tbl_prop_dbhost| replace::   Database Host name
.. |tbl_prop_dbname| replace::   Database name
.. |tbl_prop_dbschema| replace:: Schema name
.. |tbl_prop_israc| replace::    Oracle database is in Rac Mode
.. |tbl_prop_beans| replace::    Name of the beans file (on CLASSPATH)


SnapManager properties
^^^^^^^^^^^^^^^^^^^^^^

============ =================== ========= ===== =====
Name         Description         Default   Mand. Class
============ =================== ========= ===== =====
Description  |tbl_prop_desc|                     ✓
ProjectTitle |tbl_prop_title|                    ✓
DbUser       |tbl_prop_dbuser|   archiver  ✓
DbPassword   |tbl_prop_dbpass|   archiver  ✓
DbHost       |tbl_prop_dbhost|   localhost ✓     ✓
DbName       |tbl_prop_dbname|             ✓     ✓
DbSchema     |tbl_prop_dbschema|           ✓     ✓
isRac        |tbl_prop_israc|    false     ✓     ✓
============ =================== ========= ===== =====


SnapArchiver properties
^^^^^^^^^^^^^^^^^^^^^^^

============= =================== ========= ===== =====
Name          Description         Default   Mand. Class
============= =================== ========= ===== =====
Description   |tbl_prop_desc|                     ✓
ProjectTitle  |tbl_prop_title|                    ✓
DbUser        |tbl_prop_dbuser|   archiver
DbPassword    |tbl_prop_dbpass|   archiver
DbHost        |tbl_prop_dbhost|   localhost
DbName        |tbl_prop_dbname|
DbSchema      |tbl_prop_dbschema|
beansFileName |tbl_prop_beans|    beans.xml
============= =================== ========= ===== =====

.. note::

    This device will check *SnapManager* class properties to discover
    how to connect to the database.


SnapExtractor properties
^^^^^^^^^^^^^^^^^^^^^^^^

============ ================= ======= ===== =====
Name         Description       Default Mand. Class
============ ================= ======= ===== =====
Description  |tbl_prop_desc|                 ✓
ProjectTitle |tbl_prop_title|                ✓
DbUser       |tbl_prop_dbuser| snap    ✓
DbPassword   |tbl_prop_dbpass| snap    ✓
============ ================= ======= ===== =====

.. note::

    This device will check *SnapManager* class properties to discover
    how to connect to the database.
