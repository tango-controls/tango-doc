
.. _hdbpp_design:

:audience:`administrators, developers`, :lang:`C++`


HDB++ Design and implementation
++++++++++++++++++++++++++++++++

Author: *Lorenzo Pivetta*

Below, details on deployment and configuration of the `HDB++` service are provided.
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

| *R. Bourtembourg, J.M. Chaize, F.Poncet, J.L. Pons, P.Verdier, D.Lacoste* - ESRF
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
   to allow the use of different back-ends (Timescaledb, MySQL, Oracle, etc...)

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
context, has been defined and added to the EventSubscriber. The syntax of the
AttributeList Property has been modified to support a *name=value*
syntax for the context, except for the Attribute name; fields are
separated by semicolon. Keeping the current syntax for the attribute
field allows for unchanged backwards compatibility:

.. code-block:: console
   :linenos:

   $ tango://srv-tango-srf.fcs.elettra.trieste.it:20000/eos/climate/18b20 eos.01/State;strategy=RUN|SHUTDOWN

The labels for the context, are defined in a free
property, and/or in the class property and/or in the device property,
with increasing priority. The defaults values, as well as the default
context, are pre-defined but can be modified by the user. The default
values are shown in table.

+------------+
| label      |
+============+
| ALWAYS     |
+------------+
| RUN        |
+------------+
| SHUTDOWN   |
+------------+
| SERVICE    |
+------------+

Table 1: Context default labels.

Each context is exclusive, except for the ALWAYS context. An attribute
configured to be run in the ALWAYS context will be archived at any time.
This is why the ALWAYS context must be defined, it it is not it will be 
automatically added to the list of context.
A new memorized attribute, named **Context**, written by upper layer logic,
tells the archiver about the current context status or rather the required 
context transition.
Being a memorized Attribute, the **Context** attribute needs to be written
at least once. If not set, a warning will be displayed in the device status,
and only the attributes with the ALWAYS context will be archived.
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

.. _database-interface:

Database interface
==================

A C++ API will be developed to address the writing and reading
operations on the database and made availabile as a library. This
library will provide the *essential* methods for accessing the database.
The device servers, library and tools will eventually take
advantage of the library. Actually a number of libraries are already
available to encapsulate database access:

+-----------------------+-----------------------------------+
| *libhdb++*            | abstraction layer                 |
+-----------------------+-----------------------------------+
| *libhdb++timescale*   | table support, Timescaledb        |
+-----------------------+-----------------------------------+
| *libhdb++mysql*       | table support, MySQL              |
+-----------------------+-----------------------------------+
| *libhdb++cassandra*   | table support, Cassandra          |
+-----------------------+-----------------------------------+
| *libhdbmysql*         | legacy HDB table support, MySQL   |
+-----------------------+-----------------------------------+

Table 2: Available database interfacement libraries.

Additional libraries are foreseen to support different database engines,
such as Oracle, Postgres or possibly noSQL implementations.

.. note::

   The Cassandra Error: "All connections on all I/O threads are busy" is connected with incorrect name of Data Center.
   For example, the correct name is "datacenter1" but libhdbpp-cassandra have default value "DC1".
   To change this value you should add to LibConfiguration property: *local_dc* =datacenter1



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

+--------------------------------+---------------------------+
| *create_hdb_mysql.sql*         | legacy HDB MySQL schema   |
+--------------------------------+---------------------------+
| *create_hdb++_mysql.sql*       | MySQL schema              |
+--------------------------------+---------------------------+
| *create_hdb_cassandra.sql*     | Cassandra schema          |
+--------------------------------+---------------------------+

Table 3: Database setup scripts.

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

Table 4: Supported data types.

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

The HDB++ project page is available on `GitHub <https://github.com/tango-controls-hdbpp>`_.

The HDB++ source code for the archiving engine as well as the
configuration tools, extraction libraries and GUI are available on

`Sourceforge <https://sourceforge.net/p/tango-cs/code/HEAD/tree/archiving/hdb++/>`_

Event Subscriber full documentation
===================================

Please, refer to the :download:`HDB++ Design and implementation .pdf file (page 42) <hdb-design-guidelines-18.pdf>`


Configuration Manager full documentation
========================================

Please, refer to the :download:`HDB++ Design and implementation .pdf file (page 72) <hdb-design-guidelines-18.pdf>`



