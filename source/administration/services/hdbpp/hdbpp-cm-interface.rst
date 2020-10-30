.. _hdbpp_cm-interface:

:audience:`administrators, developers`, :lang:`C++`


Configuration Manager interface
-------------------------------

.. contents::
   :depth: 2

.. Configuration Manager interface

In order to address large archiving systems the need to distribute the
workload over a large number of event subscriber shows up.
The configuration manager device server will assist in
the operations of adding, editing, moving, deleting an attribute the
archiving system. All the configuration parameters, such as polling
period, variation thresholds etc., are kept in the database as
properties of the archived attribute. In order to be managed by the
device server each instance has to added to the pool using the
ArchiverAdd command.

The configuration manager shall be able to perform the following operations on
the managed pool:

#. manage the request of archiving a new attribute

    -  setup the attribute’s archive event configuration

    -  assign the new attribute to one of the device servers

        -  following some rules of load balancing

        -  to the specified device server

#. move an attribute from an device server to another one

#. keep trace of which attribute is assigned to which

#. start/stop the archiving of an attribute at runtime

#. remove an attribute from archiving

The configuration shall be possible via the device server API as well as
via a dedicated GUI interface; the GUI just use the provided API.

The may also expose a certain number of attributes to give the status of
what is going on:

-  total number of

-  total number of working attributes

-  total number of faulty attributes

-  total number of calls per second

These attributes could be themselves archived to enable a follow up
versus time.

More in detail the device server exposes the following interface.

Commands
~~~~~~~~

The available commands are summarized in commands-table.

+------------------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| ArchiverAdd            | add a new archiver instance to the archivers list; the instance must have been already created and configured via jive/astor and the device shall be running                   |
+------------------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| ArchiverRemove         | remove an archiver from the list; neither the device instance nor the attributes configured are removed from the database                                                      |
+------------------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| AttributeAdd           | add an attribute to archiving                                                                                                                                                  |
+------------------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| AttributeAssign        | assign attribute to an archiver                                                                                                                                                |
+------------------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| AttributeGetArchiver   | return the archiver in charge of attribute                                                                                                                                     |
+------------------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| AttributePause         | pause archiving specified attribute                                                                                                                                            |
+------------------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| AttributeRemove        | remove an attribute from archiving; the archived data and the attribute archive event configuration are left untouched                                                         |
+------------------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| AttributeSearch        | return list of attributes containing input pattern                                                                                                                             |
+------------------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| AttributeStart         | start archiving an attribute                                                                                                                                                   |
+------------------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| AttributeStatus        | read attribute archiving status                                                                                                                                                |
+------------------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| AttributeStop          | stop archiving an attribute                                                                                                                                                    |
+------------------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| AttributeUpdate        | update context of an already archived attribute                                                                                                                                |
+------------------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Context                | set context to all managed archivers                                                                                                                                           |
+------------------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| ResetStatistics        | reset statistics the configuration manager of and all archivers                                                                                                                |
+------------------------+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

Table 1: Configuration Manager Commands.

Note that the list of managed archivers is stored into the ArchiverList device
property that is maintained via the ArchiverAdd,
ArchiverRemove and AttributeSetArchiver commands. Therefore in the
archiving system the device server instances can also be configured by
hand, if required, an run independently.

Attributes
~~~~~~~~~~

The attributes of the configuration manager are summarized in attributes-table.

+-------------------------------+-------------------------------------------------------------------+
| ArchiverContext               | return archiver context                                           |
+-------------------------------+-------------------------------------------------------------------+
| ArchiverList                  | return list of managed archivers                                  |
+-------------------------------+-------------------------------------------------------------------+
| ArchiverStatisticsResetTime   | seconds elapsed since last statistics reset                       |
+-------------------------------+-------------------------------------------------------------------+
| ArchiverStatus                | return archiver status information                                |
+-------------------------------+-------------------------------------------------------------------+
| AttributeFailureFreq          | total number of failures per time                                 |
+-------------------------------+-------------------------------------------------------------------+
| AttributeMaxPendingNumber     | max number of attributes waiting to be archived (all archivers)   |
+-------------------------------+-------------------------------------------------------------------+
| AttributeMaxProcessingTime    | max processing time (all archivers)                               |
+-------------------------------+-------------------------------------------------------------------+
| AttributeMaxStoreTime         | max storing time (all archivers)                                  |
+-------------------------------+-------------------------------------------------------------------+
| AttributeMinProcessingTime    | min processing time (all archivers)                               |
+-------------------------------+-------------------------------------------------------------------+
| AttributeMinStoreTime         | min storing time (all archivers)                                  |
+-------------------------------+-------------------------------------------------------------------+
| AttributeNokNumber            | total number of archived attribute in error                       |
+-------------------------------+-------------------------------------------------------------------+
| AttributeNumber               | total number of attributes configured for archiving               |
+-------------------------------+-------------------------------------------------------------------+
| AttributeOkNumber             | total number of archived attribute not in error                   |
+-------------------------------+-------------------------------------------------------------------+
| AttributePausedNumber         | total number of paused attributes                                 |
+-------------------------------+-------------------------------------------------------------------+
| AttributePendingNumber        | total number of attributes waiting to be archived                 |
+-------------------------------+-------------------------------------------------------------------+
| AttributeRecordFreq           | total number of records per time                                  |
+-------------------------------+-------------------------------------------------------------------+
| AttributeStartedNumber        | total number of started attributes                                |
+-------------------------------+-------------------------------------------------------------------+
| AttributeStoppedNumber        | total number of stopped attributes                                |
+-------------------------------+-------------------------------------------------------------------+
| SetAbsoluteEvent              | set archive absolute thresholds; for archiving setup              |
+-------------------------------+-------------------------------------------------------------------+
| SetArchiver                   | support attribute for setup                                       |
+-------------------------------+-------------------------------------------------------------------+
| SetAttributeName              | support attribute for setup                                       |
+-------------------------------+-------------------------------------------------------------------+
| SetCodePushedEvent            | specify event pushed in the code                                  |
+-------------------------------+-------------------------------------------------------------------+
| SetContext                    | set archiving context; for archiving setup                        |
+-------------------------------+-------------------------------------------------------------------+
| SetPeriodEvent                | set archive period; for archiving setup                           |
+-------------------------------+-------------------------------------------------------------------+
| SetPollingPeriod              | set polling period; for archiving setup                           |
+-------------------------------+-------------------------------------------------------------------+
| SetRelativeEvent              | set archive relative thresholds; for archiving setup              |
+-------------------------------+-------------------------------------------------------------------+
| SetTTL                        | set time-to-live for temporary storage; for archiving setup       |
+-------------------------------+-------------------------------------------------------------------+

Table 2: Configuration Manager Attributes.

The SetXxxYyy attributes are used for archive event and archiver
instance configuration setup and must be filled before calling the
AttributeAdd command. The AttributeAdd checks the consistency of the
desired event configuration and then adds the new attribute to the
archiver instance specified with SetArchiver. Then the AttributeAdd
command creates the required entries into the historical database.

Class properties
~~~~~~~~~~~~~~~~

+--------------------+--------------------------------------------------------+
| LibConfiguration   | configuration parameters for backend support library   |
+--------------------+--------------------------------------------------------+
| MaxSearchSize      | max size for AttributeSearch result                    |
+--------------------+--------------------------------------------------------+

Table 3: Event Subscriber Class properties.

Device properties
~~~~~~~~~~~~~~~~~

+--------------------+--------------------------------------------------------+
| ArchiverList       | list of existing archivers                             |
+--------------------+--------------------------------------------------------+
| LibConfiguration   | configuration parameters for backend support library   |
+--------------------+--------------------------------------------------------+
| MaxSearchSize      | max size for AttributeSearch result                    |
+--------------------+--------------------------------------------------------+

Table 4: Configuration Manager device properties.

