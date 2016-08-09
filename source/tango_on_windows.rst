.. Guide on how-to isntall Tango Controls on Windows

Tango on Windows
================

This guide provides step by step guide on installation and usage of Tango Controls under Windows operating system

What is Tango Controls
----------------------

Tango Controls is object oriented, distributed controls system. For more information see:
http://www.tango-controls.org/what-is-tango-controls/

Tango binary package installation
---------------------------------

The simplest way to have Tango Controls running is to install it from a binary package. A binaries are available at
http://www.tango-controls.org/downloads/binary/

- Download the binary package with you favorite browser

.. sidebar:: Tango Host, DataBaseds

    Each Tango Controls system/deployment has to have at least one running DataBaseds :term:`device server`. The machine
    on which :term:`device server` is running has a role of so called :term:`Tango Host`. DataBaseds is a device server providing
    configuration information to all other components of the system as well as a runtime catalog of the components/devices. It
    allows (among others) client applications to find devices in distributed environment.

    The **TANGO_HOST** variable is providing information about the address or IP number and the port on which the DataBaseds is
    listening for connections. The TANGO_HOST environment variable is build as follows:

    *host_name_or_IP:port*

    example: ``localhost:10000``

- Run the downloaded executable file (double-click on it when downloaded)
- Follow instructions provided by the installation wizard
- Configure TANGO_HOST environment variable
    - on Windows 8 and 10:
        - From the Desktop, right-click the very bottom left corner of the screen to get the Power User Task Menu.
        - From the Power User Task Menu, click System
    - On Windows XP and 7
        - From the Desktop, right-click the Computer icon and select Properties. If you don't have a Computer icon on
          your desktop, click the Start button, right-click the Computer option in the Start menu, and select Properties.
    - Click the Advanced System Settings link in the left column.
    - In the System Properties window, click on the Advanced tab, then click the Environment Variables button near
      the bottom of that tab.
    - In the Environment Variables window click the New button.
    - In the filed name write ``TANGO_HOST``
    - In the field Value write proper value. If it is only computer in the Tango System write ``localhost:10000``

Tango Host role
---------------

Tango Host role is created by running the DataBaseds device server. This device server in his most common applications
requires MySQL database. To make a computer being a Tango Host you need to:

- install MySQL server.

    .. note::
        You may use community version available from http://dev.mysql.com/downloads/mysql/ . It is suggested to use MySQL
        Installer with all tools included.

- configure MySQL server
- setup environment variables
    - ``MYSQL_USER`` to have value ``tango``
    - ``MYSQL_PASSWORD`` to have value ``tango``

    .. note::
        You may use other username and password

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



