.. raw:: latex

    \clearpage

.. _notifd2db:

The notifd2db utility
=====================

The notifd2db utility usage (For Tango releases lower than 8)
-------------------------------------------------------------

The notifd2db utility is used to pass to Tango the necessary information
for the Tango servers or clients to build connection with the CORBA
notification service. Its usage is:

:command:`notifd2db [notifd2db\_IOR\_file] [host] [-o Device\_server\_database\_file\_name] [-h]`

The [notifd2db\_IOR\_file] parameter is used to specify the file name
used by the notification service to store its main IOR. This parameter
is not mandatoty. Its default value is /tmp/rdfact.ior. The [host]
parameter is ued to specify on which host the notification service
should be exported. The default value is the host on which the command
is run. The [-o Device\_server\_database\_file\_name] is used in case of
event and device server started with the file as database (the -file
device server command line option). The file name used here must be the
file name used by the device server in its -file option. The [-h] option
is just to display an help message. Notifd2db utility usage example:

:command:`notifd2db`

to register notification service on the current host using the default
notifictaion service IOR file name.

:command:`notifd C:\\Temp\\nd.ior`

to register a notification service with IOR file named C:\\Temp\\nd.ior.

:command:`notifd -o /var/my\_ds\_file.res`

to register notification service in the /var/my\_ds\_file.res file used
by a device server started with the device server -file command line
option.

