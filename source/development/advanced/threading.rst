Threading
=========

When used with C++, Tango used omniORB as underlying ORB. This CORBA
implementation is a threaded implementation and therefore a C++ Tango
device server or client are multi-threaded processes.

Device server process
---------------------

A classical Tango device server without any connected clients has eight
threads. These threads are :

-  The main thread waiting in the ORB main loop

-  Two ORB implementation threads (the POA thread)

-  The ORB scavanger thread

-  The signal thread

-  The heartbeat thread (needed by the Tango event system)

-  Two Zmq implementation threads

On top of these eight threads, you have to add the thread(s) used by the
polling threads pool. This number depends on the polling thread pool
configuration and could be between 0 (no polling at all) and the maximun
number of threads in the pool.

A new thread is started for each connected client. Device server are
mostly used to interface hardware which most of the time does not
support multi-threaded access. Therefore, all remote calls executed from
a client are serialized within the device server code by using mutual
exclusion. See chapter [sub:Serialization-model-within] on which
serialization model are available. In order to limit thread number, the
underlying ORB (omniORB) is configured to shutdown threads dedicated to
client if the connection is inactive for more than 3 minutes. To also
limit thread number, the ORB is configured to create one thread per
connection up to 55 threads. When this level is reached, the threading
model is automatically switch to a thread pool model with up to 100
threads. If the number of threads decrease down to 50, the threading
model will return to thread per connection model.

If you are using event, the event system for its internal heartbeat
system periodically (every 200 seconds) sends a command to the device
server administration device. As explained above, a thread is created to
execute these command. The omniORB scavanger will terminate this thread
before the next event system heartbeat command arrives. For example, if
you have a device server with three connected clients using only event,
the process thread number will permanently change between 8 and 11
threads.

In summary, the number of threads in a device server process can be
evaluated with the following formula:

**8 + k + m**

k is the number of polling threads used from the polling threads pool
and m is the number of threads used for connected clients.

Serialization model within a device server
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Four serialization models are available within a device server. These
models protect all requests coming from the network but also requests
coming from the polling thread. These models are:

#. Serialization by device. All access to the same device are
   serialized. As an example, let’s take a device server implementing
   one class of device with two instances (dev1 and dev2). Two clients
   are connected to these devices (client1 and client2). Client2 will
   not be able to access dev1 if client1 is using it. Nevertheless,
   client2 is able to access dev2 while client1 access dev1 (There is
   one mutual exclusion object by device)

#. Serialization by class. With non multi-threaded legacy software, the
   preceding scenario could generate problem. In this mode of
   serialization, client2 is not able to access dev2 while client1
   access dev1 because dev2 and dev1 are instances of the same class
   (There is one mutual exclusion object by class)

#. Serialization by process. This is one step further than the previous
   case. In this mode, only one client can access any device embedded
   within the device server at a time. There is only one mutual
   exclusion object for the whole process)

#. No serialization. This is an exotic kind of serialization and
   **should be used with extreme care** only with device which are fully
   thread safe. In this model, most of the device access are not
   serialized at all. Due to Tango internal structure, the
   *get\_attribute\_config*, *set\_attribute\_config*,
   *read\_attributes* and *write\_attributes* CORBA calls are still
   protected. Reading the device state and status via commands or via
   CORBA attribute is also protected.

By default, every Tango device server is in serialization by device
mode. A method of the Tango::Util class allows to change this default
behavior.

.. code:: cpp
  :number-lines:

    #include <tango.h>

    int main(int argc,char *argv[])
    {

        try
        {

            Tango::Util *tg = Tango::Util::init(argc,argv);

            tg->set_serial_model(Tango::BY_CLASS);

            tg->server_init();

            cout << "Ready to accept request" << endl;
            tg->server_run();
        }
        catch (bad_alloc)
        {
             cout << "Can't allocate memory!!!" << endl;
             cout << "Exiting" << endl;
        }
        catch (CORBA::Exception &e)
        {
             Tango::Except::print_exception(e);

             cout << "Received a CORBA::Exception" << endl;
             cout << "Exiting" << endl;
        }

        return(0);
    }

The serialization model is set at line 11 before the server is
initialized and the infinite loop is started. See
[TangoRefMan]_  for all details on the methods to
set/get serialization model.

Attribute Serialization model
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Even with the serialization model described previously, in case of
attributes carrying a large number of data and several clients reading
this attribute, a device attribute serialization has to be followed.
Without this level of serialization, for attribute using a shared
buffer, a thread scheduling may happens while the device server process
is in the CORBA layer transferring the attribute data on the network.
Three serialization models are available for attribute serialization.
The default is well adapted to nearly all cases. Nevertheless, if the
user code manages several attributes data buffer or if it manages its
own buffer protection by one way or another, it could be interesting to
tune this serialization level. The available models are:

#. Serialization by kernel. This is the default case. The kernel is
   managing the serialization

#. Serialization by user. The user code is in charge of the
   serialization. This serialization is done by the use of a omni\_mutex
   object. An omni\_mutex is an object provided by the omniORB package.
   It is the user responsability to lock this mutex when appropriate and
   to give this mutex to the Tango kernel before leaving the attribute
   read method

#. No serialization.

By default, every Tango device attribute is in serialization by kernel.
Methods of the Tango::Attribute class allow to change the attribute
serialization behavior and to give the user omni\_mutex object to the
kernel.

.. code:: cpp
  :number-lines:

   void MyClass::init_device()
   {
      ...
      ...
      Tango::Attribute &att = dev_attr->get_attr_by_name("TheAttribute");
      att.set_attr_serial_model(Tango::ATTR_BY_USER);
      ....
      ....

   }


   void MyClass::read_TheAttribute(Tango::Attribute &attr)
   {
      ....
      ....
      the_mutex.lock();
      ....
      // Fill the attribute buffer
      ....
      attr.set_value(buffer,....);
      attr->set_user_attr_mutex(&the_mutex);
   }


The serialization model is set at line 6 in the init\_device() method.
The user omni\_mutex is passed to the Tango kernel at line 22. This
omni\_mutex object is a device data member. See
[TangoRefMan]_  for all details on the methods to set
attribute serialization model.

Client process
--------------

Clients are also multi threaded processes. The underlying C++ ORB
(omniORB) try to keep system resources to a minimum. To decrease process
file descriptors usage, each connection to server is automatically
closed if it is idle for more than 2 minutes and automatically re-opened
when needed. A dedicated thread is spawned by the ORB to manage this
automatic closing connection (the ORB scavenger thread).

Threrefore, a Tango client has two threads which are:

#. The main thread

#. The ORB scavanger thread

If the client is using the event system and as Tango is using the event
push-push model, it has to be a server for receiving the events. This
increases the number of threads. The client now has 6 threads which are:

-  The main thread

-  The ORB scavenger thread

-  Two Zmq implementation threads

-  Two Tango event system related threads (the KeepAliveThread and the
   EventConsumer thread)