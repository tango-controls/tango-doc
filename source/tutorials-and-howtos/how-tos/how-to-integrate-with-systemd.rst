.. _systemd_integration:

Tango with systemd integration
==============================

:audience:`administrators`

This recipe shows how to set up Tango environment using systemd, for instance on a developer's box

At first systemd units must be defined for common Tango device servers (db, tango-accesscontrol, tango-test etc):

.. code-block:: ini

        # /etc/systemd/system/tango-db.service
        [Unit]
        Description = Tango DB
        Requires=mysql.service
        After=mysql.service
        StopWhenUnneeded=true

        [Service]
        User=tango
        Environment=TANGO_HOST=localhost:10000
        ExecStart=/opt/tango-9.2.2/bin/DataBaseds 2 -ORBendPoint giop:tcp::10000

        [Install]
        WantedBy=tango.target

.. code-block:: ini

        # /ect/systemd/system/tango-accesscontrol.timer
        [Timer]
        OnActiveSec=3

        [Install]
        WantedBy=tango.target


timer is needed because we have to wait before database is ready to accept requests

.. code-block:: ini

        # /etc/systemd/system/tango-accesscontrol.service
        [Unit]
        Description=TangoAccessControl device server
        Wants=tango-db
        After=tango-db
        StopWhenUnneeded=true

        [Service]
        Environment=TANGO_HOST=localhost:10000
        ExecStart=/opt/tango-9.2.2/bin/TangoAccessControl 1

A service unit for Starter device server can also be defined:

.. code-block:: ini

    # /etc/systemd/system/tango-starter.service
    [Unit]
    Description=Starter device server
    After=tango-accesscontrol.service
    Requires=tango-db.service
    Requires=tango-accesscontrol.service

    [Service]
    Restart=always
    RestartSec=10
    User=tango
    Environment=TANGO_HOST=localhost:10000
    ExecStart=/usr/local/bin/Starter tangobox

Finally combine everything into a single target:

.. code-block:: ini

        # /etc/systemd/system/tango.target
        [Unit]
        Description=Tango development environment target
        Requires=tango-db.service
        Requires=tango-starter.service
        Requires=tango-accesscontrol.timer
        Requires=tango-test.timer

        [Install]
        #WantedBy=multi-user.target


Then these entities must be enabled and started:

.. code-block:: console

    $> sudo systemctl enable {each timer and service}
    $> sudo systemctl start tango.target


systemd unit files may be generated when the device server is built. For instance as it is done in our tango-maven-archetype

Defining Tango servers as systemd units can be also very useful for production.
