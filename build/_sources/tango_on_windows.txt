.. Guide on how-to isntall Tango Controls on Windows

Tango on Windows
================

This guide provides step by step guide on installation and usage of Tango Controls under Windows operating system

What is Tango Controls
----------------------

Tango Controls is object oriented

Tango binary package installation
---------------------------------

The simplest way to have Tango Controls running is to install it from a binary package. Binary package is available for
download at http://www.tango-controls.org/downloads/binary/

The procedure is as follow:

- download the binary package with you favorite browser
- run the downloaded executable file (double-click on it)
- follow the instruction provided by installation wizard
- configure TANGO_HOST environment variable
.. note::
    Each Tango Controls system/deployment has to have at least one running DataBaseds :term:`device server`. The machine
    on which :term:`device server` is running has a role of so called :term:`Tango Host`. *DataBaseds* is a device server providing
    configuration information to all other components of the system as well as a runtime catalog of the components. It
    allows (among others) client applications to find devices in distributed environment.
.. note::
    The TANGO_HOST environment variable is build as follows: {host_name_or_IP}:{port_on_which_db_server_is_running}

Tango Host role
---------------

Tango Host role is created by running the DataBaseds device server. This device server in his most common applications
requires MySQL database. To make a computer being a Tango Host you need to:

- install MySQL server.
.. note::
    You may use community version available from http://dev.mysql.com/downloads/mysql/ . It is suggested to use MySQL
    Installer with tools included.
- configure MySQL server
- setup environment variables
    -
- populate database with initial Tango configuration
- start a DataBaseds
- make it run as service
    - on Windows 7
    - on Windows 8 and above

Running device servers
----------------------

After

PyTango and Taurus installation
-------------------------------



