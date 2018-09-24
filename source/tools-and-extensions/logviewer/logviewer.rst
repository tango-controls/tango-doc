.. _logviewer_manual:

****************
LogViewer Manual
****************

:audience:`developers, users`

.. toctree::
   :maxdepth: 2

   logviewer


Overview
========

LogViewer is an application for displaying logs pushed by the devices to the
Tango logging system. You can fetch logs from different Tango devices and
filter them by several properties to find what you need.

.. figure:: logviewer/logviewer-annotated.png
   :alt: LogViewer main window

   LogViewer 2.0.1 main window

   | 1 - Menu bar
   | 2 - Filter settings
   | 3 - Pause button
   | 4 - Device tree
   | 5 - Logs
   | 6 - History of actions


Adding devices
==============

To add logs from device to the viewer you need to right click on the device in
the device tree and click add. Then you need to set which level logs from that
device should be visible. You can do this with *Set Logging Level* options in
the device context menu.

.. figure:: logviewer/add.png
   :alt: Add logs from device

   Add logs from device

Alternatively, you can add device with log level already set with
*Add/Set Logging Level* context menu option.

.. figure:: logviewer/log-level.png
   :alt: Add and set logging level

   Add and set logging level


Actions menu
============

The actions menu provides access to some useful functions:

.. figure:: logviewer/actions.png
   :alt: Actions menu

   Actions menu

* *Refresh Device Tree* - refresh devices
* *Logging Source List* - list all added devices in the history window
* *Remove All Logging Source* - remove all devices from source list
* *Clear history* - clear history window
