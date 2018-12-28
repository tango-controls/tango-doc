.. _howto_start_device_server:

****************************
How to start a device server
****************************

:audience:`all`

.. toctree::
   :maxdepth: 2

   how-to-start-device-server

Starting device servers with Jive
=================================

In Jive select :guilabel:`Tools > Server Wizard` from the menu. In the wizard,
fill the server and the instance name and click :guilabel:`Next`.

.. figure:: how-to-start-device-server/wizard1.png
   :alt: Wizard - step 1

The wizard will now wait until you start the device server. When done click
:guilabel:`Next`.

.. figure:: how-to-start-device-server/wizard2.png
   :alt: Wizard - step 2

In the next steps you will be asked to configure the devices that your device
server instance will host. For this you need to pick a class and name for your
device.

.. figure:: how-to-start-device-server/wizard3.png
   :alt: Wizard - step 3

.. figure:: how-to-start-device-server/wizard4.png
   :alt: Wizard - step 4

Next, you can configure properties for the newly created devices.

.. figure:: how-to-start-device-server/wizard5.png
   :alt: Wizard - step 5

After that you can create another device of the same class by clicking
:guilabel:`New Device` or pick another class by clicking :guilabel:`New Class`.
You can also finish the configuration and exit the wizard with the
:guilabel:`Finish` button.

.. figure:: how-to-start-device-server/wizard6.png
   :alt: Wizard - step 6

After the configuration, the device server must be restarted to load and start
configured devices.

.. figure:: how-to-start-device-server/wizard7.png
   :alt: Wizard - step 7


Starting device servers with Astor
==================================

In Astor go to the host control panel and click :guilabel:`Start New` button in
the top left corner. If you want just to start an existing device server
instance, pick it from the list and click :guilabel:`Start Server`.

.. figure:: how-to-start-device-server/start_server.png
   :alt: Astor server list

If you want to add new server, click :guilabel:`Create New Server`. This will
open the device installation wizard from Jive. Astor will handle starting the
device server for you in step 2 of the wizard. After finishing the wizard, you
will be asked to select the startup level of the new server.

.. figure:: how-to-start-device-server/startup_level.png
   :alt: Startup level configuration


Other options
=============

You can use the ``tango_admin`` utility to register server from scripts or
command line. There are also some device servers (e.g. Sardana) that can
register themselves upon starting.
