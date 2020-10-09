.. _hdbpp_cm-interface:

:audience:`administrators, developers`, :lang:`C++`


Configuration Manager interface
-------------------------------

.. contents::
   :depth: 2

.. Configuration Manager interface

More in detail the device server exposes the following interface.

Commands
~~~~~~~~

The commands availabile in the are summarized in commands-table.

+------------------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| ArchiverAdd            | add a new instance to the archivers list; the instance must have been already created and configured via jive/astor and the device shall be running; as per release adding an device to an existing instance is not supported   |
+------------------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| ArchiverRemove         | remove an from the list; neither the device instance nor the attributes configured are removed from the database                                                                                                                |
+------------------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| AttributeAdd           | add an attribute to archiving                                                                                                                                                                                                   |
+------------------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| AttributeAssign        | assign attribute to                                                                                                                                                                                                             |
+------------------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| AttributeGetArchiver   | return in charge of attribute                                                                                                                                                                                                   |
+------------------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| AttributePause         | pause archiving specified attribute                                                                                                                                                                                             |
+------------------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| AttributeRemove        | remove an attribute from archiving; the archived data and the attribute archive event configuration are left untouched                                                                                                          |
+------------------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| AttributeSearch        | return list of attributes containing input pattern                                                                                                                                                                              |
+------------------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| AttributeStart         | start archiving an attribute                                                                                                                                                                                                    |
+------------------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| AttributeStatus        | read attribute archiving status                                                                                                                                                                                                 |
+------------------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| AttributeStop          | stop archiving an attribute                                                                                                                                                                                                     |
+------------------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| AttributeUpdate        | update context of an already archived attribute                                                                                                                                                                                 |
+------------------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| Context                | set context to all managed archivers                                                                                                                                                                                            |
+------------------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| ResetStatistics        | reset statistics of and all                                                                                                                                                                                                     |
+------------------------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

Table 1: Configuration Manager Commands.

Note that the list of managed is stored into the ArchiverList device
property that is maintained via the ArchiverAdd,
ArchiverRemove and AttributeSetArchiver commands. Therefore in the
archiving system the device server instances can also be configured by
hand, if required, an run independently.

Attributes
~~~~~~~~~~

The attributes of the are summarized in attributes-table.

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

