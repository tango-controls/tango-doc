.. What is Tango requirements

Overview
=========

:audience:`administrators, developers`


What is Tango Controls
----------------------

Tango Controls is an object oriented, distributed control system. 
It is a framework for building custom SCADA systems.
Tango defines communication protocol and API. 
It provides libraries, set of GUI tools and drivers (so called
:term:`Device Servers <device server>`) for variety of standard and specific control equipment. For more information see:
http://www.tango-controls.org/what-is-tango-controls/

.. image:: /img/logo_tangocontrols.png
    :align: center

Your computer may have different (one or more) roles in the Tango CS system. 
The roles are:

- Tango Host, where configuration of all other components is stored
- Tango Applications, where you run CLI or GUI applications like :program:`Synoptic`
- Tango device servers running
- Tango development, where you develop you Device Servers or Tango applications. 

Your computer may perform all above roles simultaneously.

.. sidebar:: Tango Host, DataBaseds

    Each Tango Controls system/deployment has to have at least one running DataBaseds :term:`Device Server`. 
    The machine on which the :term:`Device Server` is running has a role of so called :term:`Tango Host`. 
    DataBaseds is a device server providing configuration information to all other components of the system as well as a runtime catalog of the components/devices. 
    It allows (among others) client applications to find devices in distributed environment.

    The :envvar:`TANGO_HOST` environment variable is providing information about the address or IP number and the port on which the DataBaseds is listening for Tango connections. The :envvar:`TANGO_HOST` environment variable is built as follows:

    *host_name_or_IP:port*, example: ``localhost:10000``

Tango installation can be very simple running on a single machine for managing a few devices
or it can be a fully blown installation managing tens of thousands of devices and
multiple Tango control systems. 


Tango Host Role
~~~~~~~~~~~~~~~

The central role of a Tango control system is Tango Host role, it is created by running the :program:`DataBaseds` device server. 
This device server requires MySQL database in its most common application. 

The recommended way of running device servers is to use :program:`Starter` service. 

- a Database server (MariaDB or MySQL)

.. warning::

  root password for MySQL can be different from the computer root password. This password should not be empty. tango database password for MySQL tango database can be empty. 


- an official Oracle Java JRE (Java Runtime Environment) >= 1.7
- a Tango database. It will ask for a port number, this port will be the one used by the server for Tango requests. The hostname has then to be known from all the computers which will access to Tango Host. It is mandatory to install this tango database **before** every tango client.



Tango development Role
~~~~~~~~~~~~~~~~~~~~~~

This role is to develop applications and device servers.
To play this role, you need:

- the libtango headers for development
- pytango to allow accessing Tango through Python
- an official Oracle Java JRE (Java Runtime Environment) >= 1.7 for development with Java

Tango applications Role
~~~~~~~~~~~~~~~~~~~~~~~

This role is to run CLI and GUI applications.
To play this role, you need:

* an official Oracle Java JRE (Java Runtime Environment) >= 1.7 for Java applications
* the libtango java tools (astor, atkpanel, jive, pogo, etc.)
* pytango to allow accessing Tango through Python (if using Python device servers)

Tango device servers Role
~~~~~~~~~~~~~~~~~~~~~~~~~

This role is to run device servers (drivers):
The recommended way of running device servers is to use :program:`Starter` service. 

To play this role, you need:

- a Tango Starter service
- a TangoTest device server to allow testing
- an official Oracle Java JRE (Java Runtime Environment) >= 1.7 for Java device servers

Every roles
~~~~~~~~~~~

Whatever the role, every computer needs:

- the libtango offline documentation
- the liblog4j package for logging
- to set an environment variable :envvar:`TANGO_HOST` to the Tango Host and the port, for example

  .. code-block:: console

     TANGO_HOST=mycomputer:10000

  ``mycomputer`` is the hostname on which is installed Tango Host, and ``10000``
  is the port defined during the installation of Tango database.

.. warning::

  The choosen port should be defined according to network rules and it should
  especially be compatible with authorized ports.



Single computer 
---------------

Installing Tango on a single machine means all roles described above (Tango Host, Tango applications, Tango device servers, Tango development) will be played by the same computer.

The software needed are described in each role.

In this installation type, a :envvar:`TANGO_HOST` environment variable has to be set to :envvar:`TANGO_HOST=HOSTNAME:PORT` where HOSTNAME is the name of the computer and PORT is the port on which the server will wait for requests. This will be used to send Tango request.
This :envvar:`TANGO_HOST` environment variable should be loaded at each startup. 


Multiple computers 
------------------

When installing several computers, one should install one Tango host and some clients computers.

Those clients can play different roles (Client computers, Device servers running, and Development).

Moreover, it is possible to start several Tango Host within the same Tango control system in order to keep the control system working if one of them dies.  
This configuration is described in section :ref:`Multiple database servers within a Tango control system<multiple_sql_dbs>`.


Multiple control systems
-------------------------

Several Tango control systems can be used. 
It means every Tango control systems will have its own Tango Host which will store its own device servers configuration.

In this environment, Tango Host and Tango clients installation is the same as described upside, but :envvar:`TANGO_HOST` environment variable has to be set on each client according to which server will be used for device servers configuration.
The hostnames of the Tango Hosts have then to be known from all the computers which will access to them.

For example, if ``testserver`` and ``productionserver`` have been installed as Tango Hosts, each one will propose Tango database as a service, and client can be configured as followed:

- testclient1 with :envvar:`TANGO_HOST=testserver:10000`
- testclient2 with :envvar:`TANGO_HOST=testserver:10000`
- operatorclient with :envvar:`TANGO_HOST=productionserver:10000`
- developerclient with :envvar:`TANGO_HOST=productionserver:10000`
- dsclient with :envvar:`TANGO_HOST=productionserver:10000`

In this configuration, one can decide to change :envvar:`TANGO_HOST` value on a client to use another server. However, this will need to restart every device running on this client.

No database
------------

It is possible to run a device server on some computer without a Tango database.

.. warning::

    A configuration without SQL database can be useful for testing purpose. However, it will not benefit the major part of the Tango functionnalities. 

See section :ref:`Running a device server without SQL database<without_sql_db>` to understand how to use this configuration and what are the limitations.
