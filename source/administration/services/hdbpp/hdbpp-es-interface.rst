.. _hdbpp_es-interface:

:audience:`administrators, developers`, :lang:`C++`


Event Subscriber interface
--------------------------

.. contents::
   :depth: 2

.. Event Subscriber interface

More in detail the device server interface is summarized in table 1 and table 2.

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

Table 1: Event Subscriber Command.

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

Table 2: Event Subscriber Attributes.

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
| ContextsList                | definition of possible archiver operating contexts               |
+-----------------------------+------------------------------------------------------------------+
| DefaultStrategy             | default context for a new attribute (Default to RUN)             |
+-----------------------------+------------------------------------------------------------------+
| StatisticsTimeWindow        | timeslot for statistics in seconds                               |
+-----------------------------+------------------------------------------------------------------+
| SubscribeRetryPeriod        | retry period for subscribe event, in seconds                     |
+-----------------------------+------------------------------------------------------------------+

Table 3: Event Subscriber Class properties.

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

Table 4: LibConfiguration parameters for database.

.. note::
    **The event subscriber can be built directly against a specific backend or the dynamic libhdbpp.**
    **In case of direct linking, this information is not relevant.**

    *libname* should be set to one of the following values:

    libname=libhdb++mysql.so      if you intend to use HDB++ with the MySQL backend
    libname=libhdbmysql.so        if you intend to use HDB++ with the MySQL Legacy backend
    libname=libhdb++cassandra.so  if you intend to use HDB++ with the Cassandra backend
    libname=libhdb++timescale.so  if you intend to use HDB++ with the TimescaleDB backend

    The library specified in LibConfiguration->libname is loaded dynamically by the EventSubscriber device (e.g. *hdb++-es-srv*).
    You need to have your LD_LIBRARY_PATH environment variable correctly set (including the directory
    where the library you intend to use is located).

    libhdb++mysql and libhdb++cassandra are just implementations of the classes defined in libhdb++ library.
    The user can decide which implementation to use by specifying this LibConfiguration -> libname device property config parameter.

    The device dynamically loads the configured library configured (using dlopen()) during the device initialization.
    See :ref:`database-interface` section for more information.



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
| ContextsList                | definition of possible archiver operating contexts               |
+-----------------------------+------------------------------------------------------------------+
| DefaultStrategy             | default context for a new attribute (Default to RUN)             |
+-----------------------------+------------------------------------------------------------------+
| StatisticsTimeWindow        | timeslot for statistics                                          |
+-----------------------------+------------------------------------------------------------------+
| SubscribeRetryPeriod        | retry period for subscribe event, in seconds                     |
+-----------------------------+------------------------------------------------------------------+

Table 5: Event Subscriber Device properties.

In addition to the already described Class properties, device Properties
comprehend the AttributeList property which contains the list of
attributes in charge of the current device. The syntax is
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

Table 6: AttributeList example

The first two attributes will be archived in both RUN and SHUTDOWN
contexts; the last three only when in RUN.


