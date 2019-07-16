.. _Starter:

The Starter device
------------------

:audience:`administrators, developers, users`


Introduction
~~~~~~~~~~~~

The Starter device can be used to control other device servers running
on the same host.

Possible use cases are:

* start all device servers on system startup,
* get list of all started device servers,
* start or stop a device server,
* get logs from a device server.

:ref:`Astor<introduction to astor>` is a graphical client for Starter devices.


Installation
~~~~~~~~~~~~

There are several ways to install the Starter device server:

* :ref:`as a part of Tango source distribution <source_code_install>`,
* `from Starter source <https://github.com/tango-controls/starter>`_,
* :ref:`using a package manager <tango_on_linux>`
  (e.g. `tango-starter for debian <https://packages.debian.org/buster/tango-starter>`_),
* :ref:`from binary package (Windows) <binary_package>`.


Configuration
~~~~~~~~~~~~~

General recommendations for Starter configuration:

* there should be only one instance of a Starter device server running on a host,
* the instance name can be arbitrary,
* the Starter device server provides a *Starter* class,
* the *member* part of a Starter device name must match the short name
  of the host.
* the *domain/family* part of a Starter device name should be
  "tango/admin" in order for the Starter device to be detected by Astor.

An example how to define Starter device using *tango_admin* tool:

.. code-block:: bash

    host=$(hostname -s)
    tango_admin --add-server Starter/$host Starter tango/admin/$host
    Starter $host

.. note::

    The requirement for *member* part of the name to match the hostname
    can be disabled by setting environment variable ``DEBUG`` to ``true``.
    The starter will be visible in Astor under the name specified in *member*.

Usage
~~~~~

The Astor GUI can be used to
:ref:`start a new Tango device server <astor_new_server>`
using the Starter device.

Alternatively, the Starter interface can be used directly, e.g. to start
a device server:

.. code-block:: python

    import tango
    starter = tango.DeviceProxy("tango/admin/tangobox")
    starter.command_inout("DevStart", "TangoTest/test")

The Starter device will use the paths from the ``StartDsPath`` property
when looking for an executable of a device server to start. The paths are
searched in the order in which they appear in the property.
If the property is empty, Starter device server's working directory is used
when searching for executables.


Autostarting Starter
~~~~~~~~~~~~~~~~~~~~

The Starter device server can be automatically started during system startup
using a service manager of choice. It can then start any other device servers.

Following are example configuration files for different service managers.

systemd
^^^^^^^

Follow :ref:`instructions for systemd integration <systemd_integration>`.

System V init
^^^^^^^^^^^^^

Follow :ref:`instructions in the installation guide <howto_sysv_init>`.


NSSM (Windows)
^^^^^^^^^^^^^^

Follow :ref:`NSSM configuration instructions in the installation guide for Windows <windows_starter_nssm>`.


References
~~~~~~~~~~

* `Starter documentation <http://www.esrf.fr/computing/cs/tango/tango_doc/ds_doc/tango-ds/System/starter/index.html>`_,
* `Starter in the Device Servers Catalogue <https://www.tango-controls.org/developers/dsc/ds/423/>`_,
* `Starter source code repository <https://github.com/tango-controls/starter>`_.
