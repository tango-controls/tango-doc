:audience:`administrators`

.. _multiple_sql_dbs:

Multiple database servers within a Tango control system
=======================================================

Tango uses MySQL as database and allows access to this database via a
specific Tango device server. It is possible for the same Tango control
system to have several Tango database servers. The host name and port
number of the database server is known via the TANGO\_HOST environment
variable. If you want to start several database servers in order to
prevent server crash, use the following TANGO\_HOST syntax

TANGO\_HOST=<host\_1>:<port\_1>,<host\_2>:<port\_2>,<host\_3>:<port\_3>

All calls to the database server will automatically switch to a running
servers in the given list if the one used dies.