
.. How-To try

How to reconnect Database at device server startup time
=======================================================

This HowTo is a CPP example of how you can program a Tango DS in order
that it can be started before the Tango's database and which will wait
for the Tango database to start.

Add the following lines at the beginning of the main method (File *main.c*):

.. code-block:: python
    :linenos:

     //  Set an automatic retry on database connection
        //---------------------------------------------------
        Tango::Util::_daemon = true;
        Tango::Util::_sleep_between_connect = 5;

The device server will retry to connect database in case of failure
periodicaly (every 5 seconds in example).
