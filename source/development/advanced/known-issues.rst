.. _known-issues:

Known issues
===================

:audience:`developers`

Tango 9
-------

Some of these issues are solved using EnsureOmniThread context manager on Tango >=9.4

 - Unable to launch Jive/DatabaseDS on a linux laptop without network enabled
 
  *known workaround*: set TANGO_HOST=127.0.0.1:10000 (local loopback)

 - Creating/Destroying device proxies on event_received hooks may cause deadlock

  *known workaround*: avoid creating/destroying proxies outside of the main thread

 - event properties for state/string/boolean attributes will crash device server init

  *known workaround*: cleanup tango database from event config properties for the device before restart

 - pushing attributes outside of main thread may fail

  *known workaround*:  attribute pushing should be done from read_attribute, always_executed_hook, read_attr_hardware or any device command

 - pushing attributes after setting attr_value may crash the device

  *known workaround*: attr.set_value() must be called after push_change_event, otherwise device will crash

 - pushing attributes within other attributes read_attribute methods may cause deadlock

  *known workaround*: push events for commands or own read_attribute method only

Tango 8
-------

  ...

