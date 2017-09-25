.. _hdbpp_manual:

HDB++
=====

Target
------

This document is directed to beginner developer.

Primary Presentation
--------------------

|image0|

Figure 1: HDB++ Runtime View (part one)

|image1|

Figure 2: HDB++ Runtime View (part two)

Elements
--------

+--------------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| **Block**                | **Description**                                                                                                                                                                                                                                                                                                                                                                                                                     |
+==========================+=====================================================================================================================================================================================================================================================================================================================================================================================================================================+
| HDB++ Viewer             | Standalone JAVA application designed to monitor signals coming from HDB++. It has been written using Swing and needs a JVM higher than 1.7.0. `*More information* <http://www.esrf.eu/computing/cs/tango/tango_doc/hdb_viewer/index.html>`__.                                                                                                                                                                                       |
+--------------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| HDB++ Configuration      | Standalone JAVA application that allows interaction with the configuration manager in order to add, modify, move or delete an attribute from the archiving system                                                                                                                                                                                                                                                                   |
+--------------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| HDB++ Diagnostic         | Standalone JAVA application that visualizes both the status of all the archiver device servers and the overall archiving system                                                                                                                                                                                                                                                                                                     |
+--------------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Archiving DB             | Specific Database devoted to storing attribute values. It can be either Mysql or Cassandra for the moment.                                                                                                                                                                                                                                                                                                                          |
+--------------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Tango Configuration DB   | Tango database where every property and configuration of the Tango control framework is stored                                                                                                                                                                                                                                                                                                                                      |
+--------------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Archiver                 | The EventSubscriber TANGO device server, or Archiver, is the archiving system engine. On typical usage, it will subscribe to archive events on request by the ConfigurationManager device. The EventSubscriber is designed to start archiving all the already configured Attributes, even if the ConfigurationManager is not running. Moreover, being a TANGO device, the EventSubscriber configuration can be managed with Jive.   |
|                          |                                                                                                                                                                                                                                                                                                                                                                                                                                     |
|                          | The list of Attributes to be gathered by each EventSubscriber is stored in the AttributeList Property of the EventSubscriber device.                                                                                                                                                                                                                                                                                                |
+--------------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Device Server i          | Generic Device server that contains one or more devices that needs to archive one or more attributes                                                                                                                                                                                                                                                                                                                                |
+--------------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Configurator Server      | Device server that assists in adding, modifying, moving, deleting multiple attributes in the archiving system using the Configuration Manager.                                                                                                                                                                                                                                                                                      |
+--------------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Configuration Manager    | Device server that assists in adding, modifying, moving, deleting an Attribute to/from the archiving system                                                                                                                                                                                                                                                                                                                         |
+--------------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

Rationale
---------

The HBD++ archiving system is built on top of the Tango Event model
which provides a specific event for archiving, this is the **archive
event**. The archive events are configured with three attributes
properties:

-  **archive\_abs\_change:** a Property of up to 2 values, positive and
       negative delta, that specifies the absolute change with respect
       to the previous Attribute value, which triggered the event. If
       only one value is specified it is used for both positive and
       negative change. If no thresholds are specified then the relative
       change is used.

-  **archive\_rel\_change**: a Property of up to 2 values, positive and
       negative delta, that specifies the relative change with respect
       to the previous Attribute value, which triggered the event. If
       only one value is specified it is used for both positive and
       negative change. If no thresholds are specified archive events
       are not sent on value change.

-  **archive\_period**: the time between which periodic archive events
       are sent, in milliseconds. If no period is specified no periodic
       archive events are sent.

Usually it is composed of several TANGO device servers (Archiver aka
EventSubscriber), but there must be at least one device server. Each
EventSubscriber device is in charge of archiving a number of attributes
from a number of devices. The number of EventSubscriber TANGO devices to
deploy and the number of TANGO devices/Attributes in charge of each
subscriber is not bounded and depends on the desired performance.

The ConfigurationManager device server manages a pool of
EventSubscribers; the list is stored in the ArchiverList property of
each ConfigurationManager device, and is updated via the ArchiverAdd,
ArchiverRemove and AttributeSetArchiver commands. The list is stored in
the ArchiverList device Property of the ConfigurationManager device
using the FQDN syntax. This tells the ConfigurationManager everything
which is needed to connect to the managed EventSubscribers: protocol,
host, port and device name. Figure 5 shows a screenshot of the
ArchiverList Property of a ConfigurationManager device instance; in this
case all the managed EventSubscriber devices belong to the same TANGO
facility (srv-tango-srf.fcs.elettra.trieste.it:20000).

More information is available in :ref:`hdbpp_service`.

.. |image0| image:: HDB-plus-plus/image2.png
   :width: 6.26772in
   :height: 3.37500in
.. |image1| image:: HDB-plus-plus/image4.png
   :width: 6.26772in
   :height: 3.62500in