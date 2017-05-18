.. _high_availability:

High Availability
=================

Availability refers to the ability of a system to mask or repair faults
such that the cumulative service outage period does not exceed a
required value over a specific time interval. Improve availability means
minimize service outage time by mitigating faults.

Tactics to improve the availability
-----------------------------------

In order to improve the availability of Tango, a list of tactics could
be used. Some of these are Tango functionality, others are best
practices or suggested solutions. Using or not the different tactics
depends on use cases.

Fault Detection
~~~~~~~~~~~~~~~

Before any system can take action regarding a fault, the presence of the
fault must be detected. The tactic of Tango system to detect a fault
are:

-  **Ping**: refers to an asynchronous exchange of message between
       nodes, in order to determine if the pinged component is alive and
       responding properly. Tango Ping is performed by Astor, that
       contacts all the starters defined for given tango host, and each
       starter is pinging regularly (sending ping command) all the
       device servers of its host.

-  | **Monitor** is a component that is used to monitor the health
         status of a host (monitoring processor, process and so on).
         Astor is used to monitor the status of device servers
         (running/starting/not running). The device servers are grouped
         by host in a tree. Several hosts can be listed in a branch of
         the tree. It is a good practice to put the not critical hosts
         in branches listed at the end of the tree. The last branches to
         be listed by Astor can be configured from “File → Ctrl System
         Preferences → Last Collections” in Astor. The status of a group
         of device servers is represented by different colours:
       | *Red*: Starter is not running or cannot be reached by Astor
       | *Green*: all device servers necessary (or critical) for the
         operation are running
       | *Orange*: at least one of the necessary (or critical) device
         server for the operation is not running
       | *White*: all starters are running and all device servers from
         this host are stopped (useful for a full restart of a big
         control system. “File→ Ctrl System Preferences → Starter starts
         servers at startup” option in Astor is very useful if one needs
         to restart all the computers of a big control system in a very
         short period of time without overloading the Tango database).
       | *Blue:* At least one device server is starting or stopping.
       | One best practice is to use a different software system monitor
         (like Nagios) in order to monitor the status of the
         applications or resources (e.g. processor usage, disk load) and
         the network (e.g. congestion of a switch).
       | It is also possible to develop a device server that monitors
         network and resources, as the network collisions, network
         errors, operating system and so on. If an anomaly is detected,
         a Tango alarm is sent.

-  | **Heartbeat**: is a fault mechanism that sends a periodic message
         to ensure that the communication between the components works
         properly. Every Tango device server sends periodic messages
         (Tango heartbeat events) to all the clients interested in Tango
         events sent from this device server.
       | (`*http://tango-controls.readthedocs.io/en/latest/manual/07-advanced-features.html?highlight=Heartbeat#device-server-process* <http://tango-controls.readthedocs.io/en/latest/manual/07-advanced-features.html?highlight=Heartbeat#device-server-process>`__
         (documentation has to be updated because it refers to the
         previous Tango event implementation using the Corba
         notification daemon).

-  **Timestamp**: a timestamp is associated with every Tango attribute
       value. For example, in order to help evaluating the latency in
       the storing of events, HDB++ stores the timestamp of the Tango
       attribute data, the timestamp when the HDB++ Event Subscriber
       received the event and the timestamp when the HDB++ Event
       Subscriber tried to store the data into the database.

-  **Sanity checking**: check the correctness and the validity of a
       specific operation or outputs of a component. Tango device server
       can change the attribute quality factor to invalid if the
       attribute value is not making sense in the current state

-  **Condition Monitoring**: is a best practice to change the state and
       status of the device or quality factor of an attribute to alarm
       when behaviour of the system is different than the expected
       conditions

-  **Self-test**: components can perform procedures to test themselves.
       By default Tango doesn’t implement self test, but a device server
       programmer could easily implements a self-test command or add a
       self-test during the init sequence of device.

Recovery from fault
~~~~~~~~~~~~~~~~~~~

Recovery from a fault is composed by a series of tactics that are
concerned with reintroducing a failed component back into normal
operation:

-  **Replication**: It is a good practice to replicate the Tango
       Database. One can use MySQL/MariaDb replication feature to
       automatically replicate the data to a spare MySQL/MariaDb server.
       Recovery is possible manually by exchanging the faulty
       MySQL/MariaDb server with its slave.

-  | **Redundancy**: a best practice is to use the native redundancy for
         the database server, using MySQL NDB Cluster MySQL engine in
         order to remove the single point of failure.
       | Tango provides the possibility to run several Tango Database
         Servers on the same control system.
         (http://tango-controls.readthedocs.io/en/latest/manual/07-advanced-features.html?highlight=multiple%20database%20server#multiple-database-servers-within-a-tango-control-system).
       | It is also a good solution that the redundancy of the device
         servers is managed by the programmer based on the use cases.

-  **Exception Handling/Retry**: Once a fault has been detected, the
       system has to handle it. Tango uses the tactic of retry.
       (AutoRestartDuration property of the starter device). The Starter
       can automatically restart a device server in case of failure.

-  **Ignore Faulty Behaviour/Degradation**: In case of database failure,
       all the clients and the device servers already connected together
       continue to communicate until they need to access to the database
       (in case of reconnection, if the server needs to write a new
       property or to memorize an attribute)

Prevent Fault
~~~~~~~~~~~~~

-  | **Exception prevention**: A good solution is using a software
         system monitor to collect monitoring data in order to analyse
         the trend of the normal behaviour and extract information that
         helps the prevention of fault.
       | Tango will automatically change the attribute quality factor to
         WARNING or ALARM and eventually change the state of the device
         to ALARM if the attribute value is reaching the warning or
         alarm levels defined via min\_alarm, max\_alarm, min\_warning
         and max\_warning attribute properties. This feature can be used
         to raise alarms for instance or some specific software could be
         developed to monitor the state of the device or the quality
         factor of a specific attribute and eventually automatically
         intent a recovery procedure.
