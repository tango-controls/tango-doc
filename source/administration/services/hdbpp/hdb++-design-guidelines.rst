:audience:`administrators, developers`, :lang:`C++`


HDB++ Design and implementation
++++++++++++++++++++++++++++++++

Author: *Lorenzo Pivetta*

Below, details on deployment and configuration of the :term:`HDB++` service are provided.
For overview, see :ref:`hdbpp_manual` of :ref:`tools_index` section.


.. contents::
   :depth: 4

.. HDB++ Design and implementation

HDB++ Contributions
===================


**Summary**

The is a novel device server for Historical Data Base (HDB) archiving.
It’s written in C++ and is fully event-driven.


**Contributions**

| *R. Bourtembourg, J.M. Chaize, F.Poncet, J.L. Pons, P.Verdier* - ESRF
| *C.Scafuri, G.Scalamera, G.Strangolino, L.Zambon* - ELETTRA
| 

**Revisions**

+------------+---------+-----------+--------------------------------------------+
| **Date**   | **Rev.**| **Author**|                                            |
+============+=========+===========+============================================+
| 2012-12-04 | 1.0     | L.Pivetta | First release                              |
+------------+---------+-----------+--------------------------------------------+
| 2013-01-29 | 1.1     | L.Pivetta | Merged suggestions from ESRF               |
+------------+---------+-----------+--------------------------------------------+
| 2013-01-31 | 1.2     | L.Pivetta | Cleanup                                    |
+------------+---------+-----------+--------------------------------------------+
| 2013-05-10 | 1.3     | L.Pivetta | Revision after HDB++ meeting on 2013.03.14 |
+------------+---------+-----------+--------------------------------------------+
| 2014-01-30 | 1.4     | L.Pivetta | details + Extraction library               |
+------------+---------+-----------+--------------------------------------------+
| 2014-03-07 | 1.5     | L.Pivetta | Database interface                         |
+------------+---------+-----------+--------------------------------------------+
| 2014-05-05 | 1.6     | L.Pivetta | Cleanup, full ES and CM doc                |
+------------+---------+-----------+--------------------------------------------+
| 2014-07-28 | 1.7     | L.Pivetta | Revision after HDB++ meeting on 2014.06.25 |
+------------+---------+-----------+--------------------------------------------+
| 2016-08-12 | 1.8     | L.Pivetta | Revision after HDB++ meeting on 2016.05.10 |
+------------+---------+-----------+--------------------------------------------+



Historical Database
===================

The Historical Database is a tool that allows to store the values of
Attributes into a database. The core implements an event-based interface
to allow device servers to publish the data to be archived. The
**archive** event can be triggered by two mechanisms:

-  delta_change: the attribute value changed *significantly*

-  periodic: at a fixed periodic interval

The configuration parameters of each attribute, i.e. polling period,
delta change thresholds, archiving period, are defined as properties in
the database. In addition the archive event can be manually pushed from
the device server code.

For additional information concerning the event subsystem please refer
to *The Control System Manual* Version 9.2.

HDB++ TANGO Device Server
=========================

The architecture is composed by several TANGO devices. More in detail,
at least one, but actually many, EventSubscriber TANGO device jointly with one ConfigurationManager device
TANGO and one or more DataExtraction TANGO device are foreseen in a TANGO facility.

The EventSubscriber device, also called archiver device, will subscribe to
archive events on request by the ConfigurationManager. The EventSubscriber will be able to start archiving
all the already configured events even if the ConfigurationManager is not running. The EventSubscriber device
must have the following characteristics:

#. the archiving mechanism is event-based, thus the EventSubscriber device tries
   to subscribe to the event; an error means a fault. A transparent
   re-subscription to the faulty event is required.

#. one additional thread is in charge of events subscription and
   call-back execution; the call back, acting as producer, must put the
   complete data of the received events in a FIFO queue; the thread and
   the callback must be able to handle an *arbitrary* number of events,
   possibly limited just by the available memory and/or the required
   performance; moreover, a high-mark threshold must be setup on the
   FIFO in order to alert for an overloaded Event Subscriber

#. one additional thread, acting as consumer of the FIFO, is in charge
   of pushing the data into the database back-end, preserving the event data
   time-stamp; the code to access the database engine shall be structured
   to allow the use of different back-ends (MySQL, Oracle, etc...)

#. the device server methods, commands and attributes, must allow to
   perform the following operations:

   -  start the archiving for all attributes

   -  stop the archiving for all attributes

   -  start the archiving for one attribute

   -  stop the archiving for one attribute

   -  read the number of attributes in charge

   -  read the list of attributes in charge

   -  read the configuration parameters of each attribute

   -  read the number of working attributes

   -  read the list of working attributes

   -  read the number of faulty attributes

   -  read the list of faulty attributes with diagnostics

   -  read the size of the FIFO queue

   -  read the number of attributes pending in the FIFO

   -  read the list of attributes pending in the FIFO

The list of attributes in charge of each EventSubscriber is stored in
the database as property of the device.

The EventSubscriber device must be able to run and report on the working/faulty
attributes/events by means of the standard API (commands and/or
attributes) without the need of a graphical interface.

The diagnostics of faults could also be stored in the general info about
each attribute; the diagnostics are used by the EventSubscriber device itself to
detect that some data is not being stored as requested. Moreover,
whenever the archive event period for a given Attribute has been
configured, the device server checks that at least the one archive
event/period is received; if not, a error is raised and the Attribute
marked as faulty (NOK).

Stopping the archiving of an attribute does not persist after a restart,
i.e. restarting an EventSubscriber device instance triggers the archiving of
*all* configured attributes. A property can be setup not to start
archiving at startup.

*Note: A new Context based mechanism has been introduced to label
and automatically start/stop archiving for groups of attributes depending on
the specified archiving strategy. See Context description below.*

One NULL value with time stamp is inserted whenever the archiving of an
attribute is stopped, due to error or by a specific stop command.
Moreover, if an error occurred, the corresponding attribute is marked as
faulty in the archiving engine and the error description stored. In case
the archiving was suspended due to error, it is automatically resumed
when good data is available again. The quality factor of the attribute
is also stored into the historical database. One or more alarms can be
configured in the Alarm System to asynchronously inform about the status
of the archiving devices.

Some of the attribute configuration parameters, such as *display-unit*,
*format-string* and *label* will also be available in the archive back-end
and updated by means of the attribute configuration change event.

A mechanism to specify per-attribute archiving strategies, called
context, has been defined ad added to the EventSubscriber. The syntax of the
AttributeList Property has been modified to support a *name=value*
syntax for the context, except for the Attribute name; fields are
separated by semicolon. Keeping the current syntax for the attribute
field allows for unchanged backwards compatibility:

.. code-block:: console
   :linenos:

   $ tango://srv-tango-srf.fcs.elettra.trieste.it:20000/eos/climate/18b20 eos.01/State;strategy=RUN|SHUTDOWN

The labels for the context, implemented as enum, are defined in a free
property, and/or in the class property and/or in the device property,
with increasing priority. The defaults values, as well as the default
context, are pre-defined but can be modified by the user. The default
values are shown in table.

+------------+---------+
| label      | value   |
+============+=========+
| ALWAYS     | 0       |
+------------+---------+
| RUN        | 1       |
+------------+---------+
| SHUTDOWN   | 2       |
+------------+---------+
| SERVICE    | 3       |
+------------+---------+

Table 1: Context default labels.

Whenever not specified the default context is ALWAYS. A new memorized
attribute, named **Context**, written by upper layer logic, tells the
archiver about the current context status or rather the required context
transition.
Being a memorized Attribute, the **Context** attribute needs to be written
at least once before the EventSubscriber device actually starting archiving.
This means that, once the device has been deployed, and the AttributeList
pupulated with the relevant attributes to be archived, complete with the
strategy, the appropriate label has to be written in **Context**.

The device server shall also expose some additional figures of merit
such as:

-  for each instance, total number of records per time

-  for each instance, total number of failures per time

-  for each attribute, number of records per time

-  for each attribute, number of failures per time

-  for each attribute, time stamp of last record

The system can sum these numbers in a counter which can be reset every
period to rank each attribute in term of data rate, error rate etc. This allows
preventive maintenance and fine tuning, detecting, for instance, when an
attribute is too verbose (e.g. variation threshold below the noise
level). These statistics are a key element for qualifying the health of
the system. All these attributes will be themselves archived to enable a
follow-up versus time.

The device server must maintain at least the following operating states:

-  **ON**: archiving running, everything works

-  **ALARM**: one or more attributes faulty or the FIFO size grows above
   high-mark threshold

-  **FAULT**: all attributes faulty

-  **OFF**: archiving stopped

Event Subscriber interface
--------------------------

More in detail the device server interface is summarized in table 2 and table 3.

Commands
~~~~~~~~

+--------------------+-----------------------------------------------------------------------------------------------------------------------------+
| AttributeAdd       | add an attribute to archiving; the complete FQDN has to be specified otherwise it is completed by the using getaddrinfo()   |
+--------------------+-----------------------------------------------------------------------------------------------------------------------------+
| AttributeContext   | read the specified attribute current context                                                                                |
+--------------------+-----------------------------------------------------------------------------------------------------------------------------+
| AttributePause     | pause archiving specified attribute but do not unsubscribe archive event                                                    |
+--------------------+-----------------------------------------------------------------------------------------------------------------------------+
| AttributeRemove    | remove an attribute from archiving; the archived data and the attribute archive event configuration are left untouched      |
+--------------------+-----------------------------------------------------------------------------------------------------------------------------+
| AttributeStatus    | read attribute status                                                                                                       |
+--------------------+-----------------------------------------------------------------------------------------------------------------------------+
| AttributeStart     | start archiving specified attribute                                                                                         |
+--------------------+-----------------------------------------------------------------------------------------------------------------------------+
| AttributeStop      | stop archiving specified attribute, unsubscribe archive event                                                               |
+--------------------+-----------------------------------------------------------------------------------------------------------------------------+
| AttributeUpdate    | update context of an already archived attribute                                                                             |
+--------------------+-----------------------------------------------------------------------------------------------------------------------------+
| Pause              | pause archiving all attributes but do not unsubscribe archive events                                                        |
+--------------------+-----------------------------------------------------------------------------------------------------------------------------+
| Start              | start archiving                                                                                                             |
+--------------------+-----------------------------------------------------------------------------------------------------------------------------+
| Stop               | stop archiving, usubscribe all archive events                                                                               |
+--------------------+-----------------------------------------------------------------------------------------------------------------------------+
| ResetStatistics    | reset statistics                                                                                                            |
+--------------------+-----------------------------------------------------------------------------------------------------------------------------+

Table 2: Event Subscriber Command.

Attributes
~~~~~~~~~~

+------------------------------+-------------------------------------------------------+
| AttributeContextList         | return the list of attribute contexts                 |
+------------------------------+-------------------------------------------------------+
| AttributeErrorList           | return the list of attribute errors                   |
+------------------------------+-------------------------------------------------------+
| AttributeEventNumberList     | number of events received for each attribute          |
+------------------------------+-------------------------------------------------------+
| AttributeFailureFreq         | total number of failures per time                     |
+------------------------------+-------------------------------------------------------+
| AttributeFailureFreqList     | per-attribute number of failures per time             |
+------------------------------+-------------------------------------------------------+
| AttributeList                | return configured attribute list                      |
+------------------------------+-------------------------------------------------------+
| AttributeMaxPendingNumber    | maximum number of attributes waiting to be archived   |
+------------------------------+-------------------------------------------------------+
| AttributeMaxProcessingTime   | max processing time                                   |
+------------------------------+-------------------------------------------------------+
| AttributeMaxStoreTime        | max storing time                                      |
+------------------------------+-------------------------------------------------------+
| AttributeMinProcessingTime   | min processing time                                   |
+------------------------------+-------------------------------------------------------+
| AttributeMinStoreTime        | min storing time                                      |
+------------------------------+-------------------------------------------------------+
| AttributeNokList             | return the list of attribute in error                 |
+------------------------------+-------------------------------------------------------+
| AttributeNokNumber           | number of archived attribute in error                 |
+------------------------------+-------------------------------------------------------+
| AttributeNumber              | number of attributes configured for archiving         |
+------------------------------+-------------------------------------------------------+
| AttributeOkList              | return the list of attributes not in error            |
+------------------------------+-------------------------------------------------------+
| AttributeOkNumber            | number of archived attributes not in error            |
+------------------------------+-------------------------------------------------------+
| AttributePausedList          | list of paused attributes                             |
+------------------------------+-------------------------------------------------------+
| AttributePausedNumber        | number of paused attributes                           |
+------------------------------+-------------------------------------------------------+
| AttributePendingList         | list of attributes waiting to be archived             |
+------------------------------+-------------------------------------------------------+
| AttributePendingNumber       | number of attributes waiting to be archived           |
+------------------------------+-------------------------------------------------------+
| AttributeRecordFreq          | total number of records per time                      |
+------------------------------+-------------------------------------------------------+
| AttributeRecordFreqList      | per-attribute number of records per time              |
+------------------------------+-------------------------------------------------------+
| AttributeStartedList         | list of started attributes                            |
+------------------------------+-------------------------------------------------------+
| AttributeStartedNumber       | number of started attributes                          |
+------------------------------+-------------------------------------------------------+
| AttributeStoppedList         | list of stopped attributes                            |
+------------------------------+-------------------------------------------------------+
| AttributeStoppedNumber       | number of stopped attributes                          |
+------------------------------+-------------------------------------------------------+
| Context                      | archiver current context (r/w)                        |
+------------------------------+-------------------------------------------------------+
| StatisticsResetTime          | seconds elapsed since last statistics reset           |
+------------------------------+-------------------------------------------------------+

Table 3: Event Subscriber Attributes.

The class and device properties availabile for configuration are shown
in table. According to TANGO
device server design guidelines Device Properties, when defined,
override Class properties. Please note that class and device Properties
have changed since release of the TANGO device server.

Class properties
~~~~~~~~~~~~~~~~

+-----------------------------+------------------------------------------------------------------+
| CheckPeriodicTimeoutDelay   | delay before timeout when checking periodic events, in seconds   |
+-----------------------------+------------------------------------------------------------------+
| PollingThreadPeriod         | default period for polling thread, in seconds                    |
+-----------------------------+------------------------------------------------------------------+
| LibConfiguration            | configuration parameters for backend support library             |
+-----------------------------+------------------------------------------------------------------+
| HdbppContext                | definition of possible archiver operating contexts               |
+-----------------------------+------------------------------------------------------------------+
| DefaultContext              | archiver default context                                         |
+-----------------------------+------------------------------------------------------------------+
| StartArchivingAtStartup     | start archiving at startup                                       |
+-----------------------------+------------------------------------------------------------------+
| StatisticsTimeWindow        | timeslot for statistics in seconds                               |
+-----------------------------+------------------------------------------------------------------+
| SubscribeRetryPeriod        | retry period for subscribe event, in seconds                     |
+-----------------------------+------------------------------------------------------------------+

Table 4: Event Subscriber Class properties.

The **LibConfiguration** property contains the following multi-line
configuration parameters *host*, *user*, *password*, *dbname*, *libname*, *port*.
Table shows example configuration parameters for backend:

+-------------------------------------------+
| host=srv-log-srf.fcs.elettra.trieste.it   |
+-------------------------------------------+
| user=hdbarchiver                          |
+-------------------------------------------+
| password=myownpassword                    |
+-------------------------------------------+
| dbname=hdbpp                              |
+-------------------------------------------+
| libname=dependOnDatabase (see below)      |
+-------------------------------------------+
| port=3306                                 |
+-------------------------------------------+

Table 5: LibConfiguration parameters for database.

.. note::
    *libname* should be set to one of the following values:

    libname=libhdb++mysql.so      if you intend to use HDB++ with the MySQL backend
    libname=libhdbmysql.so        if you intend to use HDB++ with the MySQL Legacy backend
    libname=libhdb++cassandra.so  if you intend to use HDB++ with the Cassandra backend

    The library specified in LibConfiguration->libname is loaded dynamically by the EventSubscriber device (e.g. *hdb++-es-srv*).
    You need to have your LD_LIBRARY_PATH environment variable correctly set (including the directory
    where the library you intend to use is located).

    libhdb++mysql and libhdb++cassandra are just implementations of the classes defined in libhdb++ library.
    The user can decide which implementation to use by specifying this LibConfiguration -> libname device property config parameter.

    The device dynamically laods the configured library configured (using dlopen()) during the device initialization.
    See `Database interface`_ section for more information.



The **HdbppContext property** contains the enum specifying the possible
user-defined operating contexts in the form *number:label*. The default
values are:

+--------------+
| 0:ALWAYS     |
+--------------+
| 1:RUN        |
+--------------+
| 2:SHUTDOWN   |
+--------------+
| 3:SERVICE    |
+--------------+

Table 6: HdbppContext enum default values.

Device properties
~~~~~~~~~~~~~~~~~

+-----------------------------+------------------------------------------------------------------+
| AttributeList               | list of configured attributes                                    |
+-----------------------------+------------------------------------------------------------------+
| CheckPeriodicTimeoutDelay   | delay before timeout when checking periodic events, in seconds   |
+-----------------------------+------------------------------------------------------------------+
| PollingThreadPeriod         | default period for polling thread, in seconds                    |
+-----------------------------+------------------------------------------------------------------+
| LibConfiguration            | configuration parameters for backend support library             |
+-----------------------------+------------------------------------------------------------------+
| HdbppContext                | definition of possible archiver operating contexts               |
+-----------------------------+------------------------------------------------------------------+
| DefaultContext              | archiver default context                                         |
+-----------------------------+------------------------------------------------------------------+
| StartArchivingAtStartup     | start archiving at startup                                       |
+-----------------------------+------------------------------------------------------------------+
| StatisticsTimeWindow        | timeslot for statistics                                          |
+-----------------------------+------------------------------------------------------------------+
| SubscribeRetryPeriod        | retry period for subscribe event, in seconds                     |
+-----------------------------+------------------------------------------------------------------+

Table 7: Event Subscriber Device properties.

In addition to the already described Class properties, device Properties
comprehend the AttributeList property which contains the list of
attributes in charge of the current device. The sintax is
*fully-qualified-attribute-name;context=CONTEXT* where *CONTEXT* can be
one or a combination of the defined contexts (logic OR). Whenever not
specified the DefaultContext specified in the Class property or in the
Device Property applies. Table shows some examples:

.. code-block:: console
   :linenos:

   $ tango://srv-tango-srf.fcs.elettra.trieste.it:20000/eos/climate/18b20 eos.01/State;context=RUN|SHUTDOWN
   $ tango://srv-tango-srf.fcs.elettra.trieste.it:20000/eos/climate/18b20 eos.01/Temperature;context=RUN|SHUTDOWN
   $ tango://srv-tango-srf.fcs.elettra.trieste.it:20000/ctf/diagnostics/ccd_ctf.01/State;context=RUN
   $ tango://srv-tango-srf.fcs.elettra.trieste.it:20000/ctf/diagnostics/ccd_ctf.01/HorProfile;context=RUN
   $ tango://srv-tango-srf.fcs.elettra.trieste.it:20000/ctf/diagnostics/ccd_ctf.01/VerProfile;context=RUN

Table 8: AttributeList example

The first two attributes will be archived in both RUN and SHUTDOWN
contexts; the last three only when in RUN.

In order to address large archiving systems the need to distribute the
workload over a large number of shows up. A device server will assist in
the operations of adding, editing, moving, deleting an attribute the
archiving system. All the configuration parameters, such as polling
period, variation thresholds etc., are kept in the database as
properties of the archived attribute. In order to be managed by the
device server each instance has to added to the pool using the
ArchiverAdd command.

The device server shall be able to perform the following operations on
the managed pool:

#. manage the request of archiving a new attribute

   -  create an entry in the HDB++ if not already done

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

Configuration Manager interface
-------------------------------

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

Table 9: Configuration Manager Commands.

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

Table 10: Configuration Manager Attributes.

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

Table 11: Event Subscriber Class properties.

Device properties
~~~~~~~~~~~~~~~~~

+--------------------+--------------------------------------------------------+
| ArchiverList       | list of existing archivers                             |
+--------------------+--------------------------------------------------------+
| LibConfiguration   | configuration parameters for backend support library   |
+--------------------+--------------------------------------------------------+
| MaxSearchSize      | max size for AttributeSearch result                    |
+--------------------+--------------------------------------------------------+

Table 12: Configuration Manager device properties.

Configuration and diagnostic tools
==================================

With all the statistics kept in the device servers and the device
server, the diagnostic tool can be straightforward to develop as a
simple QTango or ATK GUI. This GUI will also give read access to the
configuration data stored as attribute properties in the database to
display the attribute polling frequency of the involved device
servers, whenever available, and the archive event configuration. The
HDB++ Configurator GUI is available for archiving configuration,
management and diagnostics. It is written in Java. Refer to the
documentation page for any additional information:

`HDB++ Configuration GUI documentation <http://www.esrf.eu/computing/cs/tango/tango_doc/tools_doc/hdb++-configurator/index.html>`_
`Download GUI jar file <https://sourceforge.net/projects/tango-cs/files/tools/HDB%2B%2B/hdb_configurator-1.5a.jar/download>`_


Database interface
==================

A C++ API will be developed to address the writing and reading
operations on the database and made availabile as a library. This
library will provide the *essential* methods for accessing the database.
The , the , the device servers, library and tools will eventually take
advantage of the library. Actually a number of libraries are already
available to encapsulate database access decouple the :

+-----------------------+-----+-----------------------------------+
| *libhdb++*            | :   | abstraction layer                 |
+-----------------------+-----+-----------------------------------+
| *libhdb++mysql*       | :   | table support, MySQL              |
+-----------------------+-----+-----------------------------------+
| *libhdb++cassandra*   | :   | table support, Cassandra          |
+-----------------------+-----+-----------------------------------+
| *libhdbmysql*         | :   | legacy HDB table support, MySQL   |
+-----------------------+-----+-----------------------------------+

Table 13: Available database interfacement libraries.

Additional libraries are foreseen to support different database engines,
such as Oracle, Postgres or possibly noSQL implementations.

.. note::
    The Cassandra Error: "All connections on all I/O threads are busy" is connected with incorrect name of Data Center.
    For example, the correct name is "datacenter1" but libhdbpp-cassandra have default value "DC1".
    To change this value you should add to LibConfiguration property: *local_dc*=datacenter1



database structure
------------------

The structure of the legacy HDB is based on three tables, (*adt*, *amt*,
*apt*) shown in appendix. In addition, one table, named
att_xxxxx is created for each attribute or command to be archived. Many
of the columns in the lagacy tables are used for storing HDB archiving
engine configuration parameters and are no more required.

The new database structure, whose tables have been designed for the
archiver, provides just the necessary columns and takes advantage of
microsecond resolution support for daytime. Three SQL scripts are
provided to create the necessary database structure for MySQL or
Cassandra backend:

+--------------------------------+-----+---------------------------+
| *create_hdb_mysql.sql*         | :   | legacy HDB MySQL schema   |
+--------------------------------+-----+---------------------------+
| *create_hdb++_mysql.sql*       | :   | MySQL schema              |
+--------------------------------+-----+---------------------------+
| *create_hdb_cassandra.sql*     | :   | Cassandra schema          |
+--------------------------------+-----+---------------------------+

Table 14: Database setup scripts.

The *att_conf* table associates the attribute name with a unique id and
selects the data type; it’s worth notice that the *att_name* raw always
contains the complete FQDN, e.g. with the hostname and the domainname.

::

    mysql> desc att_conf;
    +-----------------------+------------------+------+-----+---------+----------------+
    | Field                 | Type             | Null | Key | Default | Extra          |
    +-----------------------+------------------+------+-----+---------+----------------+
    | att_conf_id           | int(10) unsigned | NO   | PRI | NULL    | auto_increment |
    | att_name              | varchar(255)     | NO   | UNI | NULL    |                |
    | att_conf_data_type_id | int(10) unsigned | NO   | MUL | NULL    |                |
    | att_ttl               | int(10) unsigned | YES  |     | NULL    |                |
    | facility              | varchar(255)     | NO   |     |         |                |
    | domain                | varchar(255)     | NO   |     |         |                |
    | family                | varchar(255)     | NO   |     |         |                |
    | member                | varchar(255)     | NO   |     |         |                |
    | name                  | varchar(255)     | NO   |     |         |                |
    +-----------------------+------------------+------+-----+---------+----------------+
        

The *att_conf_data_type* table creates an unique ID for each data
type.

::

    mysql> desc att_conf_data_type;
    +-----------------------+------------------+------+-----+---------+----------------+
    | Field                 | Type             | Null | Key | Default | Extra          |
    +-----------------------+------------------+------+-----+---------+----------------+
    | att_conf_data_type_id | int(10) unsigned | NO   | PRI | NULL    | auto_increment |
    | data_type             | varchar(255)     | NO   |     | NULL    |                |
    | tango_data_type       | tinyint(1)       | NO   |     | NULL    |                |
    +-----------------------+------------------+------+-----+---------+----------------+
        

The *att_history* table stores the timestamps relevant for archiving
diagnostics together with the *att_history_event*. The copmplete list
of supported TANGO data types is shown in table [db:datatypes]. As an
example the table *att_scalar_devlong_rw*, for archiving one value,
is also shown below. Three timestamp rows are currently supported: the
datum timestamp, the receive time timestamp and the database insertion
timestamp.

::

    mysql> desc att_history;
    +----------------------+------------------+------+-----+---------+-------+
    | Field                | Type             | Null | Key | Default | Extra |
    +----------------------+------------------+------+-----+---------+-------+
    | att_conf_id          | int(10) unsigned | NO   | MUL | NULL    |       |
    | time                 | datetime(6)      | NO   |     | NULL    |       |
    | att_history_event_id | int(10) unsigned | NO   | MUL | NULL    |       |
    +----------------------+------------------+------+-----+---------+-------+
        

::

    mysql> desc att_history_event;
    +----------------------+------------------+------+-----+---------+----------------+
    | Field                | Type             | Null | Key | Default | Extra          |
    +----------------------+------------------+------+-----+---------+----------------+
    | att_history_event_id | int(10) unsigned | NO   | PRI | NULL    | auto_increment |
    | event                | varchar(255)     | NO   |     | NULL    |                |
    +----------------------+------------------+------+-----+---------+----------------+
        

::

    mysql> desc att_scalar_devlong_rw;
    +-------------------+------------------+------+-----+----------------------------+-------+
    | Field             | Type             | Null | Key | Default                    | Extra |
    +-------------------+------------------+------+-----+----------------------------+-------+
    | att_conf_id       | int(10) unsigned | NO   | MUL | NULL                       |       |
    | data_time         | timestamp(6)     | NO   |     | 0000-00-00 00:00:00.000000 |       |
    | recv_time         | timestamp(6)     | NO   |     | 0000-00-00 00:00:00.000000 |       |
    | insert_time       | timestamp(6)     | NO   |     | 0000-00-00 00:00:00.000000 |       |
    | value_r           | int(11)          | YES  |     | NULL                       |       |
    | value_w           | int(11)          | YES  |     | NULL                       |       |
    | quality           | tinyint(1)       | YES  |     | NULL                       |       |
    | att_error_desc_id | int(10) unsigned | YES  | MUL | NULL                       |       |
    +-------------------+------------------+------+-----+----------------------------+-------+

+-------------------------------+------------------------------+
| **scalar**                    | **vector**                   |
+===============================+==============================+
| att_scalar_devboolean_ro      | att_array_devboolean_ro      |
+-------------------------------+------------------------------+
| att_scalar_devboolean_rw      | att_array_devboolean_rw      |
+-------------------------------+------------------------------+
| att_scalar_devdouble_ro       | att_array_devdouble_ro       |
+-------------------------------+------------------------------+
| att_scalar_devdouble_rw       | att_array_devdouble_rw       |
+-------------------------------+------------------------------+
| att_scalar_devencoded_ro      | att_array_devencoded_ro      |
+-------------------------------+------------------------------+
| att_scalar_devencoded_rw      | att_array_devencoded_rw      |
+-------------------------------+------------------------------+
| att_scalar_devfloat_ro        | att_array_devfloat_ro        |
+-------------------------------+------------------------------+
| att_scalar_devfloat_rw        | att_array_devfloat_rw        |
+-------------------------------+------------------------------+
| att_scalar_devlong64_ro       | att_array_devlong64_ro       |
+-------------------------------+------------------------------+
| att_scalar_devlong64_rw       | att_array_devlong64_rw       |
+-------------------------------+------------------------------+
| att_scalar_devlong_ro         | att_array_devlong_ro         |
+-------------------------------+------------------------------+
| att_scalar_devlong_rw         | att_array_devlong_rw         |
+-------------------------------+------------------------------+
| att_scalar_devshort_ro        | att_array_devshort_ro        |
+-------------------------------+------------------------------+
| att_scalar_devshort_rw        | att_array_devshort_rw        |
+-------------------------------+------------------------------+
| att_scalar_devstate_ro        | att_array_devstate_ro        |
+-------------------------------+------------------------------+
| att_scalar_devstate_rw        | att_array_devstate_rw        |
+-------------------------------+------------------------------+
| att_scalar_devstring_ro       | att_array_devstring_ro       |
+-------------------------------+------------------------------+
| att_scalar_devstring_rw       | att_array_devstring_rw       |
+-------------------------------+------------------------------+
| att_scalar_devuchar_ro        | att_array_devuchar_ro        |
+-------------------------------+------------------------------+
| att_scalar_devuchar_rw        | att_array_devuchar_rw        |
+-------------------------------+------------------------------+
| att_scalar_devulong64_ro      | att_array_devulong64_ro      |
+-------------------------------+------------------------------+
| att_scalar_devulong64_rw      | att_array_devulong64_rw      |
+-------------------------------+------------------------------+
| att_scalar_devulong_ro        | att_array_devulong_ro        |
+-------------------------------+------------------------------+
| att_scalar_devulong_rw        | att_array_devulong_rw        |
+-------------------------------+------------------------------+
| att_scalar_devushort_ro       | att_array_devushort_ro       |
+-------------------------------+------------------------------+
| att_scalar_devushort_rw       | att_array_devushort_rw       |
+-------------------------------+------------------------------+
| att_scalar_double_ro          | att_array_double_ro          |
+-------------------------------+------------------------------+
| att_scalar_double_rw          | att_array_double_rw          |
+-------------------------------+------------------------------+
| att_scalar_string_ro          | att_array_string_ro          |
+-------------------------------+------------------------------+
| att_scalar_string_rw          | att_array_string_rw          |
+-------------------------------+------------------------------+

Table 15: Supported data types.

To support temporary storage of historical data the att_ttl column has
to be added to the att_conf table. The att_ttl defines the
time-to-live in hours on a per-attribute basis. Deleting expired data is
delegated to the SQL backend; the basic machanism foreseen is a SQL
script run by cron.

The complete SQL source for all the tables is reported in
appendix. The main points can be summarized as:

-  microsecond timestamp resolution

-  no per-attribute additional tables; the number of tables used is
   fixed and does not depend on the number of archived attributes

-  specific data type support

-  temporary storage support


.. note::
    There are some special OS settings to tune for Cassandra to work as expected, in particular, it is recommended to disable the SWAP and
    to change the resource limits on Linux, as described in this documentation page:
    `Recommended production settings for Linux <http://docs.datastax.com/en/archived/cassandra/2.2/cassandra/install/installRecommendSettings.html/>`_.


Deployment best practices
=========================

To take full advantage of the high performance and scaling capability of
the device server some constraints have to be taken into account. Though
a single instance of the device server is capable of handling thousands
of events per second, the following setup is preferrable:

-  setup per-subsystem instances of the device server (homogeneous
   dedicated archiving)

-  possibly separate attributes that have to be archived all the time,
   e.g. also during maintenance periods, from attributes that are
   run-centric

A native tool, available to be run locally, as well as a reworked web
interface (E-Giga) are foreseen. A specific library with a dedicated API
could be developed to address the extraction and the be used into
whatever tool may be provided: a device server, a web interface, a
native graphical panel, etc. The library shall be able to deal with
event based archived data. The possible lack of data inside the
requested time window shall be properly managed:

-  returning some *no-data-available* error: in this case the reply
   contains no data and a *no-data-available* error is triggered. Care
   must be taken whenever the requirement of getting multiple data
   simultanously is foreseen.

-  enlarging the time window itself to include some archived data: the
   requested time interval is enlarged in order to incorporate some
   archived data. A mechanism shall be provided to notify the client of
   the modified data set. No fake samples have to be introduced to fill
   the values in correspondence of the requested timestamps.

-  returning the value of the last archived data anyhow: the requested
   time interval is kept and the last available data sample is returned.
   The validity of the data is guaranteed when the archiving mechanism
   is based on archive event on change; care must be taken when using
   the data in case of periodic event.

Moreover, whenever extracting multiple rows, the library shall allow to
select one of the following behaviours:

-  return variable length data arrays for each row

-  return equal length data arrays for all rows, filling the gaps with
   the previous data value

A C++ native implementation, as well as a Java implementation,
exposing the same API, are foreseen and are currently available.
Please refer to the *hdbextractor* reference manual for the C++
`implementation <https://sourceforge.net/p/tango-cs/code/HEAD/tree/archiving/hdb++/hdbextractor>`_

and the *HDB++ Java Extraction Library* for Java
`HDB++ java-extraction-api <http://www.esrf.eu/computing/cs/tango/tango_doc/hdb_javadoc/index.html>`__

General remarks
===============

Care must be taken to avoid introducing dependencies from libraries not
already needed by the core.

Project references and source code
==================================

The HDB++ project page is available on `GitHub <https://github.com/tango-controls>`_.

The HDB++ source code for the archiving engine as well as the
configuration tools, extraction libraries and GUI are available on

`Sourceforge <https://sourceforge.net/p/tango-cs/code/HEAD/tree/archiving/hdb++/>`_

Legacy HDB tables structure
===========================

::

    mysql> describe adt;
    +-------------+-------------------------------+------+-----+---------+----------------+
    | Field       | Type                          | Null | Key | Default | Extra          |
    +-------------+-------------------------------+------+-----+---------+----------------+
    | ID          | smallint(5) unsigned zerofill | NO   | PRI | NULL    | auto_increment |
    | time        | datetime                      | YES  |     | NULL    |                |
    | full_name   | varchar(200)                  | NO   | PRI |         |                |
    | device      | varchar(150)                  | NO   |     |         |                |
    | domain      | varchar(35)                   | NO   |     |         |                |
    | family      | varchar(35)                   | NO   |     |         |                |
    | member      | varchar(35)                   | NO   |     |         |                |
    | att_name    | varchar(50)                   | NO   |     |         |                |
    | data_type   | tinyint(1)                    | NO   |     | 0       |                |
    | data_format | tinyint(1)                    | NO   |     | 0       |                |
    | writable    | tinyint(1)                    | NO   |     | 0       |                |
    | max_dim_x   | smallint(6) unsigned          | NO   |     | 0       |                |
    | max_dim_y   | smallint(6) unsigned          | NO   |     | 0       |                |
    | levelg      | tinyint(1)                    | NO   |     | 0       |                |
    | facility    | varchar(45)                   | NO   |     |         |                |
    | archivable  | tinyint(1)                    | NO   |     | 0       |                |
    | substitute  | smallint(9)                   | NO   |     | 0       |                |
    +-------------+-------------------------------+------+-----+---------+----------------+
        

::

    mysql> describe amt;
    +-------------------+-------------------------------+------+-----+---------+-------+
    | Field             | Type                          | Null | Key | Default | Extra |
    +-------------------+-------------------------------+------+-----+---------+-------+
    | ID                | smallint(5) unsigned zerofill | NO   |     | 00000   |       |
    | archiver          | varchar(255)                  | NO   |     |         |       |
    | start_date        | datetime                      | YES  |     | NULL    |       |
    | stop_date         | datetime                      | YES  |     | NULL    |       |
    | per_mod           | int(1)                        | NO   |     | 0       |       |
    | per_per_mod       | int(5)                        | YES  |     | NULL    |       |
    | abs_mod           | int(1)                        | NO   |     | 0       |       |
    | per_abs_mod       | int(5)                        | YES  |     | NULL    |       |
    | dec_del_abs_mod   | double                        | YES  |     | NULL    |       |
    | gro_del_abs_mod   | double                        | YES  |     | NULL    |       |
    | rel_mod           | int(1)                        | NO   |     | 0       |       |
    | per_rel_mod       | int(5)                        | YES  |     | NULL    |       |
    | n_percent_rel_mod | double                        | YES  |     | NULL    |       |
    | p_percent_rel_mod | double                        | YES  |     | NULL    |       |
    | thr_mod           | int(1)                        | NO   |     | 0       |       |
    | per_thr_mod       | int(5)                        | YES  |     | NULL    |       |
    | min_val_thr_mod   | double                        | YES  |     | NULL    |       |
    | max_val_thr_mod   | double                        | YES  |     | NULL    |       |
    | cal_mod           | int(1)                        | NO   |     | 0       |       |
    | per_cal_mod       | int(5)                        | YES  |     | NULL    |       |
    | val_cal_mod       | int(3)                        | YES  |     | NULL    |       |
    | type_cal_mod      | int(2)                        | YES  |     | NULL    |       |
    | algo_cal_mod      | varchar(20)                   | YES  |     | NULL    |       |
    | dif_mod           | int(1)                        | NO   |     | 0       |       |
    | per_dif_mod       | int(5)                        | YES  |     | NULL    |       |
    | ext_mod           | int(1)                        | NO   |     | 0       |       |
    | refresh_mode      | tinyint(4)                    | YES  |     | 0       |       |
    +-------------------+-------------------------------+------+-----+---------+-------+
        

::

    mysql> describe apt;
    +---------------+--------------------------+------+-----+---------+-------+
    | Field         | Type                     | Null | Key | Default | Extra |
    +---------------+--------------------------+------+-----+---------+-------+
    | ID            | int(5) unsigned zerofill | NO   | PRI | 00000   |       |
    | time          | datetime                 | YES  |     | NULL    |       |
    | description   | varchar(255)             | NO   |     |         |       |
    | label         | varchar(64)              | NO   |     |         |       |
    | unit          | varchar(64)              | NO   |     | 1       |       |
    | standard_unit | varchar(64)              | NO   |     | 1       |       |
    | display_unit  | varchar(64)              | NO   |     |         |       |
    | format        | varchar(64)              | NO   |     |         |       |
    | min_value     | varchar(64)              | NO   |     | 0       |       |
    | max_value     | varchar(64)              | NO   |     | 0       |       |
    | min_alarm     | varchar(64)              | NO   |     | 0       |       |
    | max_alarm     | varchar(64)              | NO   |     | 0       |       |
    +---------------+--------------------------+------+-----+---------+-------+
        

schema SQL source (MySQL)
=========================

::

    CREATE TABLE IF NOT EXISTS att_conf
    (
    att_conf_id INT UNSIGNED NOT NULL AUTO_INCREMENT PRIMARY KEY,
    att_name VARCHAR(255) UNIQUE NOT NULL,
    att_conf_data_type_id INT UNSIGNED NOT NULL,
    att_ttl INT UNSIGNED NULL DEFAULT NULL,
    facility VARCHAR(255) NOT NULL DEFAULT '',
    domain VARCHAR(255) NOT NULL DEFAULT '',
    family VARCHAR(255) NOT NULL DEFAULT '',
    member VARCHAR(255) NOT NULL DEFAULT '',
    name VARCHAR(255) NOT NULL DEFAULT '',
    INDEX(att_conf_data_type_id)
    ) ENGINE=MyISAM COMMENT='Attribute Configuration Table';

    DROP TABLE att_conf_data_type;
    CREATE TABLE IF NOT EXISTS att_conf_data_type
    (
    att_conf_data_type_id INT UNSIGNED NOT NULL AUTO_INCREMENT PRIMARY KEY,
    data_type VARCHAR(255) NOT NULL,
    tango_data_type TINYINT(1) NOT NULL
    ) ENGINE=MyISAM COMMENT='Attribute types description';

    INSERT INTO att_conf_data_type (data_type, tango_data_type) VALUES
    ('scalar_devboolean_ro', 1),('scalar_devboolean_rw', 1),('array_devboolean_ro', 1),
    ('array_devboolean_rw', 1),('scalar_devuchar_ro', 22),('scalar_devuchar_rw', 22),
    ('array_devuchar_ro', 22),('array_devuchar_rw', 22),('scalar_devshort_ro', 2),
    ('scalar_devshort_rw', 2),('array_devshort_ro', 2),('array_devshort_rw', 2),
    ('scalar_devushort_ro', 6),('scalar_devushort_rw', 6),('array_devushort_ro', 6),
    ('array_devushort_rw', 6),('scalar_devlong_ro', 3),('scalar_devlong_rw', 3),
    ('array_devlong_ro', 3),('array_devlong_rw', 3),('scalar_devulong_ro', 7),
    ('scalar_devulong_rw', 7),('array_devulong_ro', 7),('array_devulong_rw', 7),
    ('scalar_devlong64_ro', 23),('scalar_devlong64_rw', 23),('array_devlong64_ro', 23),
    ('array_devlong64_rw', 23),('scalar_devulong64_ro', 24),('scalar_devulong64_rw', 24),
    ('array_devulong64_ro', 24),('array_devulong64_rw', 24),('scalar_devfloat_ro', 4),
    ('scalar_devfloat_rw', 4),('array_devfloat_ro', 4),('array_devfloat_rw', 4),
    ('scalar_devdouble_ro', 5),('scalar_devdouble_rw', 5),('array_devdouble_ro', 5),
    ('array_devdouble_rw', 5),('scalar_devstring_ro', 8),('scalar_devstring_rw', 8),
    ('array_devstring_ro', 8),('array_devstring_rw', 8),('scalar_devstate_ro', 19),
    ('scalar_devstate_rw', 19),('array_devstate_ro', 19),('array_devstate_rw', 19),
    ('scalar_devencoded_ro', 28),('scalar_devencoded_rw', 28),('array_devencoded_ro', 28),
    ('array_devencoded_rw', 28);

    CREATE TABLE IF NOT EXISTS att_history
    (
    att_conf_id INT UNSIGNED NOT NULL,
    time TIMESTAMP(6) DEFAULT 0,
    att_history_event_id INT UNSIGNED NOT NULL,
    INDEX(att_conf_id),
    INDEX(att_history_event_id)
    ) ENGINE=MyISAM COMMENT='Attribute Configuration Events History Table';

    DROP TABLE att_history_event;
    CREATE TABLE IF NOT EXISTS att_history_event
    (   
    att_history_event_id INT UNSIGNED NOT NULL AUTO_INCREMENT PRIMARY KEY,
    event VARCHAR(255) NOT NULL
    ) ENGINE=MyISAM COMMENT='Attribute history events description';

    INSERT INTO att_history_event (event) VALUES
    ('add'),('remove'),('start'),('stop'),('crash'),('pause');

    CREATE TABLE IF NOT EXISTS att_parameter
    (
    att_conf_id INT UNSIGNED NOT NULL,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    label VARCHAR(255) NOT NULL DEFAULT '',
    unit VARCHAR(64) NOT NULL DEFAULT '',
    standard_unit VARCHAR(64) NOT NULL DEFAULT '1',
    display_unit VARCHAR(64) NOT NULL DEFAULT '',
    format VARCHAR(64) NOT NULL DEFAULT '',
    archive_rel_change VARCHAR(64) NOT NULL DEFAULT '',
    archive_abs_change VARCHAR(64) NOT NULL DEFAULT '',
    archive_period VARCHAR(64) NOT NULL DEFAULT '',
    description VARCHAR(1024) NOT NULL DEFAULT '',
    INDEX(recv_time),
    INDEX(att_conf_id)
    ) ENGINE=MyISAM COMMENT='Attribute configuration parameters';

    CREATE TABLE IF NOT EXISTS att_error_desc
    (
    att_error_desc_id INT UNSIGNED NOT NULL AUTO_INCREMENT PRIMARY KEY,
    error_desc VARCHAR(255) UNIQUE NOT NULL
    ) ENGINE=MyISAM COMMENT='Error Description Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devboolean_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r TINYINT(1) UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Boolean ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devboolean_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r TINYINT(1) UNSIGNED DEFAULT NULL,
    value_w TINYINT(1) UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Boolean ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devboolean_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r TINYINT(1) UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Boolean ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devboolean_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r TINYINT(1) UNSIGNED DEFAULT NULL,
    dim_x_w INT UNSIGNED NOT NULL,
    dim_y_w INT UNSIGNED NOT NULL DEFAULT 0,
    value_w TINYINT(1) UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Boolean ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devuchar_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r TINYINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar UChar ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devuchar_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r TINYINT UNSIGNED DEFAULT NULL,
    value_w TINYINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar UChar ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devuchar_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r TINYINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array UChar ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devuchar_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r TINYINT UNSIGNED DEFAULT NULL,
    dim_x_w INT UNSIGNED NOT NULL,
    dim_y_w INT UNSIGNED NOT NULL DEFAULT 0,
    value_w TINYINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array UChar ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devshort_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r SMALLINT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Short ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devshort_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r SMALLINT DEFAULT NULL,
    value_w SMALLINT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Short ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devshort_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r SMALLINT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Short ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devshort_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r SMALLINT DEFAULT NULL,
    dim_x_w INT UNSIGNED NOT NULL,
    dim_y_w INT UNSIGNED NOT NULL DEFAULT 0,
    value_w SMALLINT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Short ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devushort_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r SMALLINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar UShort ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devushort_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r SMALLINT UNSIGNED DEFAULT NULL,
    value_w SMALLINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar UShort ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devushort_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r SMALLINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array UShort ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devushort_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r SMALLINT UNSIGNED DEFAULT NULL,
    dim_x_w INT UNSIGNED NOT NULL,
    dim_y_w INT UNSIGNED NOT NULL DEFAULT 0,
    value_w SMALLINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array UShort ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devlong_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r INT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Long ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devlong_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r INT DEFAULT NULL,
    value_w INT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Long ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devlong_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r INT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Long ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devlong_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r INT DEFAULT NULL,
    dim_x_w INT UNSIGNED NOT NULL,
    dim_y_w INT UNSIGNED NOT NULL DEFAULT 0,
    value_w INT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Long ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devulong_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r INT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar ULong ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devulong_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r INT UNSIGNED DEFAULT NULL,
    value_w INT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar ULong ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devulong_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r INT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array ULong ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devulong_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r INT UNSIGNED DEFAULT NULL,
    dim_x_w INT UNSIGNED NOT NULL,
    dim_y_w INT UNSIGNED NOT NULL DEFAULT 0,
    value_w INT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array ULong ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devlong64_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r BIGINT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Long64 ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devlong64_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r BIGINT DEFAULT NULL,
    value_w BIGINT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Long64 ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devlong64_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r BIGINT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Long64 ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devlong64_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r BIGINT DEFAULT NULL,
    dim_x_w INT UNSIGNED NOT NULL,
    dim_y_w INT UNSIGNED NOT NULL DEFAULT 0,
    value_w BIGINT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Long64 ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devulong64_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r BIGINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar ULong64 ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devulong64_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r BIGINT UNSIGNED DEFAULT NULL,
    value_w BIGINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar ULong64 ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devulong64_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r BIGINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array ULong64 ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devulong64_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r BIGINT UNSIGNED DEFAULT NULL,
    dim_x_w INT UNSIGNED NOT NULL,
    dim_y_w INT UNSIGNED NOT NULL DEFAULT 0,
    value_w BIGINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array ULong64 ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devfloat_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r FLOAT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Float ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devfloat_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r FLOAT DEFAULT NULL,
    value_w FLOAT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Float ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devfloat_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r FLOAT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Float ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devfloat_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r FLOAT DEFAULT NULL,
    dim_x_w INT UNSIGNED NOT NULL,
    dim_y_w INT UNSIGNED NOT NULL DEFAULT 0,
    value_w FLOAT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Float ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devdouble_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r DOUBLE DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Double ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devdouble_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r DOUBLE DEFAULT NULL,
    value_w DOUBLE DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Double ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devdouble_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r DOUBLE DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Double ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devdouble_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r DOUBLE DEFAULT NULL,
    dim_x_w INT UNSIGNED NOT NULL,
    dim_y_w INT UNSIGNED NOT NULL DEFAULT 0,
    value_w DOUBLE DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Double ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devstring_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r VARCHAR(16384) DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar String ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devstring_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r VARCHAR(16384) DEFAULT NULL,
    value_w VARCHAR(16384) DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar String ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devstring_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r VARCHAR(16384) DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array String ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devstring_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r VARCHAR(16384) DEFAULT NULL,
    dim_x_w INT UNSIGNED NOT NULL,
    dim_y_w INT UNSIGNED NOT NULL DEFAULT 0,
    value_w VARCHAR(16384) DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array String ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devstate_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r TINYINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar State ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devstate_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r TINYINT UNSIGNED DEFAULT NULL,
    value_w TINYINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar State ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devstate_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r TINYINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array State ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devstate_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r TINYINT UNSIGNED DEFAULT NULL,
    dim_x_w INT UNSIGNED NOT NULL,
    dim_y_w INT UNSIGNED NOT NULL DEFAULT 0,
    value_w TINYINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array State ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devencoded_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r BLOB DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Encoded ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devencoded_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r BLOB DEFAULT NULL,
    value_w BLOB DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Encoded ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devencoded_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r BLOB DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Encoded ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devencoded_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r BLOB DEFAULT NULL,
    dim_x_w INT UNSIGNED NOT NULL,
    dim_y_w INT UNSIGNED NOT NULL DEFAULT 0,
    value_w BLOB DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Encoded ReadWrite Values Table';
        

schema CQL source (Cassandra)
=============================

::

    -- Create hdb keyspace
    -- Please adapt the replication factor (3 by default here) to your use case
    CREATE KEYSPACE IF NOT EXISTS hdb WITH REPLICATION = { 'class' : 'NetworkTopologyStrategy', 'DC1' : 3 };

    USE hdb;

    CREATE TYPE IF NOT EXISTS devencoded (
     encoded_format text,
     encoded_data blob
    );

    CREATE TABLE IF NOT EXISTS att_conf (
    cs_name text,
    att_name text,
    att_conf_id timeuuid,
    data_type text,   -- data_types set<text> in the future?
    PRIMARY KEY (cs_name, att_name)
    )
    WITH comment='Attribute Configuration Table'
    AND caching = {'keys' : 'NONE', 'rows_per_partition': 'ALL' };

    CREATE INDEX on att_conf(data_type);
    CREATE INDEX on att_conf(att_conf_id);

    CREATE TABLE IF NOT EXISTS att_history
    (
    att_conf_id timeuuid,
    time timestamp,
    time_us int,
    event text, -- 'add','remove','start','stop' or 'crash'
    PRIMARY KEY(att_conf_id, time, time_us)
    )
    WITH comment='Attribute Configuration Events History Table';


    CREATE TABLE IF NOT EXISTS att_scalar_devboolean_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r boolean,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevBoolean ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devboolean_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r boolean,
    value_w boolean,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevBoolean ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devuchar_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r int,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    ) WITH comment='Scalar DevUChar ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devuchar_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r int,
    value_w int,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevUChar ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devshort_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r int,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    ) WITH comment='Scalar DevShort ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devshort_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r int,
    value_w int,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevShort ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devushort_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r int,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevUShort ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devushort_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r int,
    value_w int,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevUShort ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devlong_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r int,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevLong ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devlong_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r int,
    value_w int,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevLong ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devulong_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r bigint,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevULong ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devulong_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r bigint,
    value_w bigint,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevULong ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devlong64_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r bigint,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevLong64 ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devlong64_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r bigint,
    value_w bigint,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevLong64 ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devulong64_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r bigint,              // issue here with very big numbers
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevULong64 ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devulong64_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r bigint, // issue here with very big numbers
    value_w bigint, // issue here with very big numbers
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevLong64 ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devfloat_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r float,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevFloat ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devfloat_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r float,
    value_w float,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevFloat ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devdouble_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r double,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevDouble ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devdouble_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r double,
    value_w double,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevDouble ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devstring_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r text,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevString ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devstring_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r text,
    value_w text,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevString ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devstate_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r int,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevState ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devstate_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r int,
    value_w int,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevState ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devencoded_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r frozen<devencoded>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevEncoded ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devencoded_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r frozen<devencoded>,
    value_w frozen<devencoded>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevEncoded ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devboolean_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<boolean>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevBoolean ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devboolean_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<boolean>,
    value_w list<boolean>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevBoolean ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devuchar_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<int>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevUChar ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devuchar_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<int>,
    value_w list<int>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevUChar ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devshort_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<int>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevShort ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devshort_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<int>,
    value_w list<int>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevShort ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devushort_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<int>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevUShort ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devushort_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<int>,
    value_w list<int>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevUShort ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devlong_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<int>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevLong ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devlong_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<int>,
    value_w list<int>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevLong ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devulong_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<bigint>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevULong ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devulong_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<bigint>,
    value_w list<bigint>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevULong ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devlong64_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<bigint>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevLong64 ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devlong64_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<bigint>,
    value_w list<bigint>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevLong64 ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devulong64_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<bigint>,  // issue with very big numbers
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevULong64 ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devulong64_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<bigint>, // issue with very big numbers
    value_w list<bigint>, // issue with very big numbers
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevULong64 ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devfloat_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<float>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevFloat ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devfloat_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<float>,
    value_w list<float>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevFloat ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devdouble_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<double>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevDouble ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devdouble_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<double>,
    value_w list<double>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevDouble ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devstring_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<text>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevString ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devstring_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<text>,
    value_w list<text>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevString ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devstate_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<int>, // Store a special type here
                       // where we could store an int and a string?
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevState ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devstate_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<int>,// Store a special type here
    value_w list<int>,// where we could store an int and a string?
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevState ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devencoded_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<frozen<devencoded>>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevEncoded ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devencoded_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<frozen<devencoded>>,
    value_w list<frozen<devencoded>>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevEncoded ReadWrite Values Table';

    -------------------------
    -- att_parameter table --
    -------------------------
    CREATE TABLE IF NOT EXISTS att_parameter (
    att_conf_id timeuuid,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    label text,
    unit text,
    standard_unit text,
    display_unit text,
    format text,
    archive_rel_change text,
    archive_abs_change text,
    archive_period text,
    description text,
    PRIMARY KEY((att_conf_id), recv_time, recv_time_us)
    ) WITH COMMENT='Attribute configuration parameters';

    --------------------------------
    -- Attributes browsing tables --
    --------------------------------
    CREATE TABLE IF NOT EXISTS domains ( 
    cs_name text,
    domain text,
    PRIMARY KEY (cs_name, domain)
    )
    WITH CLUSTERING ORDER BY (domain ASC)
    AND comment='Domains Table'
    AND caching = {'keys' : 'NONE', 'rows_per_partition': 'ALL' };

    CREATE TABLE IF NOT EXISTS families ( 
    cs_name text,
    domain text,
    family text,
    PRIMARY KEY ((cs_name, domain),family)
    )
    WITH CLUSTERING ORDER BY (family ASC)
    AND comment='Families Table'
    AND caching = {'keys' : 'NONE', 'rows_per_partition': 'ALL' };

    CREATE TABLE IF NOT EXISTS members (
    cs_name text,
    domain text,
    family text,
    member text,
    PRIMARY KEY ((cs_name, domain,family),member)
    )
    WITH CLUSTERING ORDER BY (member ASC)
    AND comment='Members Table'
    AND caching = {'keys' : 'NONE', 'rows_per_partition': 'ALL' };

    CREATE TABLE IF NOT EXISTS att_names (
    cs_name text,
    domain text,
    family text,
    member text,
    name text,
    PRIMARY KEY ((cs_name, domain,family,member),name)
    )
    WITH CLUSTERING ORDER BY (name ASC)
    AND comment='Attributes Names Table'
    AND caching = {'keys' : 'NONE', 'rows_per_partition': 'ALL' };

    CREATE TABLE IF NOT EXISTS time_stats (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Time Statistics Table';


Event Subscriber full documentation
===================================

Please, refer to the :download:`HDB++ Design and implementation .pdf file (page 42) <hdb-design-guidelines-18.pdf>`


Configuration Manager full documentation
========================================

Please, refer to the :download:`HDB++ Design and implementation .pdf file (page 72) <hdb-design-guidelines-18.pdf>`



