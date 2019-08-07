Server Statistics
-----------------

:audience:`administrators, developers`

When a server, started by the Starter, is stopped by another way than
a command on the Starter (kill signal, core dump, ...), this event is logged in a file.

When the server is re started by the Starter, this information is logged too.

Astor proposes to get information from this file for :

-  All controlled hosts
-  One host.
-  Compute statistics and availability for servers.

   |statistics|

Reset statistics:
-----------------

The reset of servers statistics is system specific.
It must reserved to a TANGO administrator and it is protected by a password.

.. |statistics| image:: img/ServerStatistics.jpg

