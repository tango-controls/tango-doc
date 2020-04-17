.. _tango_admin:

Tango admin
=================

:audience:`administrators`

The Tango Database can also be maintained using a command-line interface. Using this utility, not all the database features are interfaced. Only the features needed for the Debian packaging have been implemented.

This means:

* ping the database server
* check if a device is defined in DB
* check if a server is defined in DB
* create a server in DB
* delete a server from the DB
* create a property in DB
* delete a property from DB

Using Tango Admin
-----

.. sourcecode:: console

    $ /usr/lib/tango/tango_admin --help

    Usage: 
    --help  		Prints this help 
    --ping-database	[max_time (s)] Ping database 
    --check-device <dev>    Check if the device is defined in DB
    --add-server <exec/inst> <class> <dev list (comma separated)>   Add a server in DB
    --delete-server <exec/inst> [--with-properties]   Delete a server from DB
    --check-server <exec/inst>   Check if a device server is defined in DB
    --server-list  Display list of server names
    --server-instance-list <exec>   Display list of server instances for the given server name
    --add-property <dev> <prop_name> <prop_value (comma separated for array)>    Add a device property in DB
    --delete-property <dev> <prop_name>   Delete a device property from DB 
    --tac-enabled Check if the TAC (Tango Access Control) is enabled
    --ping-device <dev> [max_time (s)] Check if the device is running
    --ping-network [max_time (s)] [-v] Ping network
