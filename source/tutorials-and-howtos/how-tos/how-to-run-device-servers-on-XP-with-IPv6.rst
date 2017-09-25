How to run device servers on Windows XP with IPv6
=================================================

This HowTo gives some advices about running Tango device server on Windows XP when IPv6 protocol stack is installed.

The ORB (CORBA Object Request Broker) used by Tango is omniORB.
On platforms where it is available, omniORB supports IPv6.
On most Unix platform, Ipv6 sockets accept both IPv6 and IPv4 connections.
On Windows, each socket type only accepts incoming connections of the same type, so an IPv6 socket cannot be used with IPv4 clients and vice-versa.
Since Windows XP SP2, it is easily possible to install the IPv6 stack.
Running the ipconfig command in a cmd window will rapidly show you if IPv6 is installed.

**The TANGO_HOST environment variable**

Classically, the TANGO_HOST environment variable is set to the name of the computer
where the database is running followed by a semi-colon and the database server port number (MyWindowsXp:20000).
If the host where the database server is running is a Windows XP with IPv6 installed,
the host name part in the environment variable has to be replaced by the host IPv4 address.
If the host where is running the database server has a name "MyWindowsXp" and
a IPv4 address set to 160.103.81.168, set the TANGO_HOST to:

    .. code-block:: console

    TANGO_HOST=160.103.81.168:20000


**Running a device server**

To run a device server on this Windows host with IPv6 installed,
we have to explicitly ask the underlying ORB to create an IPv4 address and
to publish in the IOR only the IPv4 address. Two omniORB command line options allow us to do this:

    .. code-block:: console

    MyDeviceServer inst_name -ORBendPoint giop:tcp:0.0.0.0: -ORBendPointPublish ipv4


**Running the database server**

The database server creates one device which is the anchor of a Tango control system.
To achieve this, this device is registered in the ORB in a specific manner.
To start the database server on a Windows host with IPv6 installed,
it is neceesary to change its command line and to use the following command line arguments (Server listenning only on IPv4 port 20000)

    .. code-block:: console

    database dbds -ORBendPoint giop:tcp:0.0.0.0:20000


**Conclusion**

To know the differences between IPv6 vs IPv4 and which is the most secure, please,
follow `the link <https://www.comparitech.com/blog/vpn-privacy/ipv6-vs-ipv4/>`_.
