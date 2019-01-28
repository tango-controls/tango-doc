.. _tango_db_service:
Tango database service source
=============================

.. code-block:: bash

    # If you want to customize, the
    # best way is to create a file "/etc/systemd/system/tango-db.service",
    # containing
    #	.include /lib/systemd/system/tango-db.service
    #	...make your changes here...
    # or create a file "/etc/systemd/system/tango-db.service.d/foo.conf",
    # which doesn't need to include ".include" call and which will be parsed
    # after the file tango-db.service itself is parsed.
    #
    # For more info about custom unit files, see systemd.unit(5) or
    # http://fedoraproject.org/wiki/Systemd#How_do_I_customize_a_unit_file.2F_add_a_custom_unit_file.3F

    # Note: /usr/lib/... is recommended in the .include line though /lib/...
    # still works.
    # Don't forget to reload systemd daemon after you change unit configuration:
    # root> systemctl --system daemon-reload

    [Unit]
    Description=Tango database server
    Requires=mariadb.service
    After=mariadb.service

    [Service]
    Type=simple
    User=tangosys
    Group=tangosys

    # find the TANGO_HOST setting
    EnvironmentFile=/etc/tangorc
    # read db credentials
    EnvironmentFile=/etc/sysconfig/tango-db

    ExecStart=/usr/bin/DataBaseds 2 -ORBendPoint giop:tcp:${TANGO_HOST}

    # Give a reasonable amount of time for the server to start up/shut down
    TimeoutSec=10

    # Place temp files in a secure directory, not /tmp
    PrivateTmp=true

    [Install]
    WantedBy=multi-user.target
