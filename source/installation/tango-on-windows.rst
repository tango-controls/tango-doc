.. Guide on how-to install Tango Controls on Windows

Windows
=========

This guide provides step by step guide on installation of Tango Controls under Windows operating systems.

What is Tango Controls
----------------------

Tango Controls is an object oriented, distributed control system. It is a framework for building custom SCADA systems.
It defines communication protocol and API. It provides libraries, set of GUI tools and drivers (so called
:term:`Device Servers`) for variety of standard and specific control equipment. For more information see:
http://www.tango-controls.org/what-is-tango-controls/

.. image:: /img/logo_tangocontrols.png
    :align: center

Your computer may have different (one or more) roles in the Tango CS system. The roles are:

- Client computer, where you run GUI applications like :program:`Synoptic`,
- Tango Host, where configuration of all other components is stored,
- Device Servers running.

Your Windows computer may perform all above roles simultaneously.

Tango  package installation
---------------------------

The following video (by Mohamed Cherif Areour, in French with English sub-titles) will help you to install TANGO on Windows.

..  raw:: html

    <iframe width="560" height="315" src="https://www.youtube.com/embed/ofRfrfIepQM?rel=0" frameborder="0" allowfullscreen></iframe>

|
|

.. topic:: Prerequisite

    Some :program:`Tango Controls` tools require :program:`Java Runtime Environment (JRE) >=1.7`. Please install it first.
    You may find JRE on http://java.com .


The simplest way to have Tango Controls running is to install it from :ref:`binary_package`.

- Download the binary package with your favorite browser.

.. sidebar:: Tango Host, DataBaseds

    Each Tango Controls system/deployment has to have at least one running DataBaseds :term:`Device Server`. The machine
    on which the :term:`Device Server` is running has a role of so called :term:`Tango Host`. DataBaseds is a device server providing
    configuration information to all other components of the system as well as a runtime catalog of the components/devices. It
    allows (among others) client applications to find devices in distributed environment.

    The :envvar:`TANGO_HOST` variable is providing information about the address or IP number and the port on which the DataBaseds is
    listening for connections. The :envvar:`TANGO_HOST` environment variable is built as follows:

    *host_name_or_IP:port*, example: ``localhost:10000``

- Run the downloaded executable file (double-click on it when downloaded).
- Follow instructions provided by the installation wizard.
- Configure :envvar:`TANGO_HOST` environment variable:
    - On Windows 8 and 10:
        - From the Desktop, right-click the very bottom left corner of the screen to get
          the :guilabel:`Power User Task Menu`.
        - From the :guilabel:`Power User Task Menu`, click :guilabel:`System`.
    - On Windows XP and 7
        - From the Desktop, right-click the :guilabel:`Computer` icon and select :menuselection:`Properties`. If you
          don't have a :guilabel:`Computer` icon on your desktop, click :guilabel:`Start` button, right-click the
          :guilabel:`Computer` option in the :guilabel:`Start` menu, and select :menuselection:`Properties`.
    - Click the :guilabel:`Advanced System Settings` link in the left column.
    - In the System Properties window, click on the :guilabel:`Advanced` tab,
      then click the :guilabel:`Environment Variables` button near the bottom of that tab.
    - In the :guilabel:`Environment Variables` window click the :guilabel:`New` button.
    - In the field :guilabel:`Name` write ``TANGO_HOST``.
    - In the field :guilabel:`Value` write proper value. If it is the only computer in the Tango System provide ``localhost:10000``.

If there is a :term:`Tango Host` already running on some other computer in your deployment and you have provided proper
address and port in the :envvar:`TANGO_HOST` you may start using client and management applications like
:program:`Jive`, :program:`Jdraw`/:program:`Synoptic`. In other case you have to configure the system to perform a role of
:term:`Tango Host`.

Tango Host role
---------------

Tango Host role is created by running the :program:`DataBaseds` device server. This device server requires MySQL
database in its most common application. To make a computer become a Tango Host you need to:

- Install MySQL server.
    You may use community version available from http://dev.mysql.com/downloads/mysql/ . It is suggested to use
    :program:`MySQL Installer` with all tools included. You may read more on MySQL installation topic here:
    http://dev.mysql.com/doc/refman/5.7/en/windows-installation.html

    It is suggested to create dedicated ``tango`` user with *DB Admin* priviledges during installation.
    In the installation wizard on a tab :guilabel:`Accounts and Roles` select button :guilabel:`Add User`
    and create a dedicated user. See

        .. image:: tango-on-windows/mysql-user-02.png

- Setup environment variables providing credentials to access MySQL:
    - Open :guilabel:`Command Line`.
    - Invoke command: :command:`%TANGO_ROOT%\bin\dbconfig.exe`.

        .. note::
            This lets you setup two environment variables
            :envvar:`MYSQL_USER` and :envvar:`MYSQL_PASSWORD` used to access the MySQL server. You may use ``root`` credentials
            provided upon MySQL installation if it is your development workstation. For production environment it is
            suggested to create an additional user with ``DB Admin`` privileges. On Windows you may use :program:`MySQL Installer`
            from :guilabel:`Start` menu and select the option :guilabel:`Reconfigure` for MySQL Server.
            Please refer to: http://dev.mysql.com/doc/refman/5.7/en/adding-users.html

- Populate database with an initial Tango configuration:
    - Open a command line.
    - Add MySQL client to be available in the PATH. For MySQL version 5.7 the command should be:
      :command:`set PATH=%PATH%;"C:\Program Files\MySQL\MySQL Server 5.7\bin"`

      .. note::
         Adjust the path according to your MySQL version and the path where it is installed.

    - Invoke :command:`cd "%TANGO_ROOT%\share\tango\db\"`.
    - Call :program:`create_db.bat`.

- Start a :program:`DataBaseds` :term:`Device Server`:
    - Open a new command line window.
    - In the command line call :command:`"%TANGO_ROOT%\bin\start-db.bat"`.

        .. note::
            To make your Tango installation operational you have to have this :program:`DataBaseds` running permanently.
            You may either add the command above to :guilabel:`Autostart` or run it as a service.

- Make :program:`DataBaseds` run as a service
    .. note::
        The proposed solution uses NSSM tool which works on all versions of Windows but you may find some other tools
        available including native srvany.exe.

    - Download NSSM from http://nssm.cc/.
    - Unpack the file to some convinient location. It is suggested to copy proper (32bit or 64bit) version to the
      Tango bin folder ``%TANGO_ROOT%\bin\``.
    - Open :guilabel:`Command Line` as Administrator.
    - Change current path to where the :program:`nssm` is unpacked or copied, eg. :command:`cd "%TANGO_ROOT%\bin"`.
    - Invoke :command:`nssm.exe install Tango-DataBaseds`. This will open a window where you can define service parameters.
        - In the Application tab provide information as follows (adjust if your installation path is different).
            .. image:: tango-on-windows/databaseds-as-service-01.png
        - In the Environment tab provide variables with credentials used for accessing the MySQL, like:
            .. image:: tango-on-windows/databaseds-as-service-02.png
        - Click :guilabel:`Install Service`.
    - Invoke :command:`nssm.exe start Tango-DataBaseds` to start the service.
    - Test if everything is ok. Use :guilabel:`Start` menu to run Jive or in command line call
      :command:`"%TANGO_ROOT%\bin\start-jive.bat"`.



Running :term:`Device Servers`
------------------------------

The recommended way of running device servers is to use :program:`Starter` service. Then you may use
:program:`NSSM` as for :program:`DataBaseds`.
Assuming you have downloaded it and copied to the Tango bin folder please follow:

- Open Command Line as Administrator (if it is not yet open).
- Prepare folder for :term:`Device Servers` executable:

    .. note::
        To let your device servers start with :program:`Starter` service their executables have to be in a path without
        spaces. This is a limitation of the current :program:`Starter` implementation.

    - Create a directory for :term:`Device Servers`. Let it be :file:`C:\\DeviceServers\\bin`
      with :command:`mkdir c:\DeviceServers\bin`

    - Change to the Tango bin directory with command (:command:`cd "%TANGO_ROOT%\bin"`)
    - Copy :program:`TangoTest` :term:`Device Server` to the newly crated folder:
      :command:`copy TangoTest.exe c:\DeviceServers\bin`

- Add entry about the Starter device server you will start on your computer:
    - Start a tool called :program:`Astor`. You may use either Windows :guilabel:`Start` menu or
      call :command:`tango-astor.bat`
    - In :guilabel:`Astor` window select menu :menuselection:`&Command --> Add a New Host`
    - In the form that appears provide your :guilabel:`Host name` and :guilabel:`Device Servers PATH`.
        .. image:: tango-on-windows/starter-01.png
    - Accept with :guilabel:`Create`
    - Go back to :program:`Command Line`

- Install Starter service:
    - Invoke :command:`nssm.exe install Tango-DataBaseds`.
    - In the Application tab provide information as follows:

        .. image:: tango-on-windows/starter-as-service-01.png

    Adjust if your installation path is different. In :guilabel:`Arguments` exchange ``pg-dell-new`` with the proper name
    of your host.

    - In the Environment tab provide TANGO_HOST variable, like:

        .. image:: tango-on-windows/starter-as-service-02.png
    - Click :guilabel:.
    - Start the service: :command:`nssm.exe start Tango-Starter`.
    - Go back to :program:`Astor`.
    - After a while you will see a green led next to your host name:

        .. image:: tango-on-windows/starter-02.png
- Run :program:`TangoTest` device server:

    You may test the configuration by starting prefigured TangoTest device.

    - Start :program:`Astor` if it is not running.

        .. image:: tango-on-windows/device-server-01.png
    - Double Click on your computer name to open :guilabel:`Control Panel`. It opens a window as below:

        .. image:: tango-on-windows/device-server-02.png
    - Click :guilabel:`Start new`.
    - In the open window select :menuselection:`TangoTest/test`:

        .. image:: tango-on-windows/device-server-03.png
    - Click :guilabel:`Start Server`.
    - In the open window select :guilabel:`Controlled by Astro -> Yes`, and :guilabel:`Startup Level -> Level 1`.

        .. image:: tango-on-windows/device-server-04.png
    - When you click :guilabel:`OK` it should start the server. After a while you should see:

        .. image:: tango-on-windows/device-server-05.png
- Running your :term:`Device Servers`:
    - You need to copy an executable to the folder configured for :program:`Starter`. In our example it is
      :file:`C:\DeviceServers\bin`.
    - Then use :program:`Astor`. After opening :guilabel:`Control panel` for your computer (double clicking on a label)
      and selection :guilabel:`Start New`...
    - Select :guilabel:`Create New Server` and follow a wizard.

What's next
--------------
    You should check PyTango and Taurus library and tools to cope with scripting and GUIs for Tango
    :doc:`pytango-and-taurus-on-windows`.

Typical issues
--------------
    .. todo::
        Implement