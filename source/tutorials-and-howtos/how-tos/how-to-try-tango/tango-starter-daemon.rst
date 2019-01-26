.. _tango_starter_daemon:
Tango starter daemon source
===========================

.. code-block:: bash

    #!/bin/sh
    #
    # tango-starter
    #
    # description:       Tango control system starter daemon
    # chkconfig:         2345 90 10
    #
    . /etc/rc.d/init.d/functions

    PREFIX=/usr
    TANGO_CONFIG=/etc/tangorc
    STARTER_CONFIG=/etc/sysconfig/tango-starter

    PID_FILE=/var/run/tango-starter.pid
    LOCK_FILE=/var/lock/subsys/tango-starter

    # set up environment
    . /etc/profile

    [ -f $TANGO_CONFIG ] && . $TANGO_CONFIG
    [ -f $STARTER_CONFIG ] && . $STARTER_CONFIG

    if [ -z $TANGO_HOST ]; then
        echo $"error: TANGO_HOST not set"
        exit 1
    fi
    export TANGO_HOST

    DAEMON=Starter
    DAEMON_ARGS=`hostname -s`

    CLASS=Starter
    SERVER=$CLASS/`hostname -s`
    DEVICE=tango/admin/`hostname -s`

    RETVAL=0
    start()
    {
        echo -n $"Starting Tango starter daemon"

        status -p $PID_FILE tango-starter >/dev/null
        if [ $? -eq 0 ]; then
        echo
        echo -n $"Starter server is running"
        RETVAL=0
        else
        tango_admin --ping-database >/dev/null
        if [ $? -ne 0 ]; then
            echo
            echo -n "Tango database connection failed"
            RETVAL=1
        else
            tango_admin --check-device $DEVICE
            if [ $? -ne 0 ]; then
            echo
            echo -n "Adding $SERVER to the Tango database"
            tango_admin --add-server $SERVER $CLASS $DEVICE >> /dev/null
            tango_admin --add-property $DEVICE startDsPath $PREFIX/bin >> /dev/null
            fi

            runuser -m $TANGO_USER -c \
            "$DAEMON $DAEMON_ARGS >/dev/null 2>&1 &"
            sleep 2

            # check if daemon survived..
            pidofproc $DAEMON > $PID_FILE
            RETVAL=$?
            if [ $RETVAL -eq 0 ]; then
            touch $LOCK_FILE
            else
            rm -f $PID_FILE
            fi
        fi
        fi

        [ $RETVAL -eq 0 ] && success || failure
        echo
        return $RETVAL

    }

    stop()
    {
        echo -n $"Stopping Tango starter daemon"

        status -p $PID_FILE tango-starter >/dev/null
        if [ $? -eq 3 ]; then
        echo
        echo -n $"Starter server is not running"
        RETVAL=0
        else
        killproc -p $PID_FILE $DAEMON
        RETVAL=$?
        [ $RETVAL -eq 0 ] && rm -f $PID_FILE $LOCK_FILE
        fi

        [ $RETVAL -eq 0 ] && success || failure
        echo
        return $RETVAL
    }

    restart()
    {
        stop
        start
    }

    # See how we were called.
    case "$1" in
        start )
        start
        ;;
        stop )
        stop
        ;;
        status )
        status -p $PID_FILE tango-starter
        ;;
        restart | reload )
        restart
        ;;
        condrestart )
        [ -f $LOCK_FILE ] && restart || :
        ;;
        *)
        echo $"Usage: $0 {start|stop|status|restart|reload|condrestart}"
        exit 1
    esac

    exit 0