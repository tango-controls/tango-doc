
.. How-To try

How to run a device server with an active Windows firewall
==========================================================


When running Tango device servers on a Windows PC with active firewall
you might find some problems when trying to reconnect to a restarted
server. In some cases the client will never reconnect.

This behavior  is due  to the automatic  closure  of the used device
server port when stopping the process. The client will only receive a
timeout exception on the blocked port instead of an expected "connection
failed" exception  which triggers the reconnection.  

When restarting  a device server it will dynamically open another port. 
New clients can  connect to the new port. But old clients might not
reconnect.

 

To overcome the problem, start your device server with a fixed port
(11000 in this example) as

.. code-block:: console

   $ TangoTest win -ORBendPoint giop:tcp11000

and open the fixed port in the firewall as

.. code-block:: console

   $ Netsh firewall add portopening TCP 11000 TangoTest

You can verify the open ports for the firewall with

.. code-block:: console

   $ Netsh firewall show portopening

The result should look like

.. code-block:: console

   Port configuration for Domaine profile:

   Port     Protocol    Mode      Name

   -----------------------------------------------------------------------------

   11000    TCP         Enable    TangoTest

