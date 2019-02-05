.. What is

Overview
=========

:audience:`administrators, developers`

Tango installation can be very simple running on a single machine for managing a few devices
or it can be a fully blown installation managing tens of thousands of devices and
multiple Tango control systems. 

Single computer 
---------------

Installing TANGO on a single machine means TANGO server and TANGO tools will be launched on the same computer. Client-side and server-side softwares have then to be installed.

The components needed to install TANGO are, in order of installation:

- a Database server (MariaDB or MySQL). Warning: root password for MySQL can be different from root password, it should not be empty. tango password for MySQL tango database can be empty. 
- an official Oracle Java JDK
- a TANGO database
- a tango-starter service
- a TangoTest device server to allow testing
- libtango-dev to install headers for development
- libtango-doc to install a basic offline TANGO documentation
- libtango-java to install java tools (astor, atkpanel, jive, pogo, etc.)
- python3-pytango package allows accessing TANGO through Python.

- installation of tango-db package. tango-db will ask for a port number, it will be the port on which the server will wait for requests.
- installation of tango-starter, tango-test, libtango-doc, libtango-dev, liblog4j1.2-java, libtango-java

In this installation type, one should define `TANGO_HOST=${HOSTNAME}:[PORT]` where PORT is the port on which the server will wait for requests.


Multiple computers 
------------------

When installing several computers, one should install one TANGO server and some clients computers.

Those clients can serve as development computers, operators clients to run tools, or even servers running TANGO device servers.

To install the TANGO server, the components to install are in order of installation:

- a Database server (MariaDB or MySQL). Warning: root password for MySQL can be different from root password, it should not be empty. tango password for MySQL tango database can be empty. 
- an official Oracle Java JDK (openjdk is not supported)
- a TANGO database

On the client-side, following components could be installed, depending on you needs:

- on development computers:

  * libtango-dev to install headers on development computers
  * python3-pytango package allows accessing TANGO through Python.

- on operator computers:

  * libtango-doc to install a basic offline TANGO documentation
  * libtango-java to install java tools (astor, atkpanel, jive, pogo, etc.) 
  * python3-pytango package allows accessing TANGO through Python (if using Python device servers)

- on computers running device servers:

  * a tango-starter service on each computer running device servers

- on every computers:

  * libtango-doc to install a basic offline TANGO documentation
  * set an environment variable TANGO_HOST to the TANGO server and the port, for example

.. code-block:: bash

       TANGO_HOST=mycomputer:10000

    `mycomputer` is the hostname on which is installed TANGO server, and `10000` is the port defined during the installation of TANGO database.

.. warning::

    The choosen port should be defined according to network rules and especially be compatible with firewall rules.


Multiple control systems
-------------------------

One can use several TANGO control systems, which means every TANGO control systems will have its own TANGO server and device servers configuration.

In this environment, several TANGO servers can be installed, and several clients can be installed.

The installation of TANGO servers and TANGO clients are the same as described upside, but TANGO_HOST environment variable has to be set on each client according to which server should be used for device servers configuration.

For example, if `testserver` and `productionserver` have been installed as TANGO servers, each one will propose TANGO database as a service, and client can be configured as followed:

- testclient1 with `TANGO_HOST=testserver:10000`
- testclient2 with `TANGO_HOST=testserver:10000`
- operatorclient with `TANGO_HOST=productionserver:10000`
- developerclient with `TANGO_HOST=productionserver:10000`
- dsclient with `TANGO_HOST=productionserver:10000`


No database
------------

It is possible to install some computer without a TANGO database.
It means it will not benefits the major part of the TANGO functionnalities. However, it can be useful for testing purposes.

See :ref:`administration/deployment/without-sql-db.html`
