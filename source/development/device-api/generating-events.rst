Generating events in a device server
====================================

The server is at the origin of events. It will fire events as soon as
they occur. Standard events (*change*, *periodic* and *archive*) are
detected automatically in the polling thread and fired as soon as they
are detected. The *periodic* events can only be handled by the polling
thread. *Change, Data ready* and *archive* events can also be pushed
from the device server code. To allow a client to subscribe to events of
non polled attributes the server has to declare that events are pushed
from the code. Three methods are available for this purpose:

.. code:: cpp
  :number-lines:

    Attr::set_change_event(bool implemented, bool detect = true);
    Attr::set_archive_event(bool implemented, bool detect = true);
    Attr::set_data_ready_event( bool implemented);

where *implemented*\ =true indicates that events are pushed manually
from the code and *detect*\ =true (when used) triggers the verification
of the same event properties as for events send by the polling thread.
When setting *detect*\ =false, no value checking is done on the pushed
value! The class DeviceImpl also supports the first two methods with an
addictional parameter attr\_name defining the attribute name.

To push events manually from the code a set of data type dependent
methods can be used:

.. code:: cpp
  :number-lines:

    DeviceImpl::push_change_event (string attr_name, ....);
    DeviceImpl::push_archive_event(string attr_name, ....);

For the data ready event, a DeviceImpl class method has to be used to
push the event.

.. code:: cpp
  :number-lines:

    DeviceImpl::push_data_ready_event(string attr_name,Tango::DevLong ctr);

See the class documentation for all available interfaces.

For non-standard events a single call exists for pushing the data to the
CORBA Notification Service (omniNotify). Clients who are subscribed to
this event have to know what data type is in the DeviceAttribute and
unpack it accordingly.

To push non-standard events, use the following api call is available to
all device servers :

.. code:: cpp
  :number-lines:

    DeviceImpl::push_event( string attr_name,
                 vector<string> &filterable_names,
                 vector<double> &filterable_vals,
                 Attribute &att)

where *attr\_name* is the name of the attribute\ *. Filterable\_names*
and *filterable\_vals* represent any filterable data which can be used
by clients to filter on. Here is a typical example of what a server will
need to do to send its own events. We are in the read method of the
Sinusoide attribute. This attribute is readable as any other attribute
but an event is sent if its value is positive when it is read. On top of
that, this event is sent with one filterable field called value which is
set to the attribute value.

.. code:: cpp
  :number-lines:

    void MyClass::read_Sinusoide(Tango::Attribute &attr)
    {
      ...
         struct timeval tv;
         gettimeofday(&tv, NULL);
         sinusoide = 100 * sin( 2 * 3.14 * frequency * tv.tv_sec);

         if (sinusoide >= 0)
         {
            vector<string> filterable_names;
            vector<double> filterable_value;

            filterable_names.push_back("value");
            filterable_value.push_back((double)sinusoide);

            push_event( attr.get_name(),
                        filterable_names, filterable_value,
                        &sinusoide);
         }
      ....
      ....

   }

line 13-14 : The filter pair name/value is initialised

line 16-18 : The event is pushed