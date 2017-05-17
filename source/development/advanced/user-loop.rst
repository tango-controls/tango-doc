.. _user_loop:

Device server with user defined event loop
==========================================

Sometimes, it could be usefull to write your own process event handling
loop. For instance, this feature can be used in a device server process
where the ORB is only one of several components that must perform event
handling. A device server with a graphical user interface must allow the
GUI to handle windowing events in addition to allowing the ORB to handle
incoming requests. These types of device server therefore perform
non-blocking event handling. They turn the main thread of control over
each of the vvarious event-handling sub-systems while not allowing any
of them to block for significants period of time. The *Tango::Util*
class has a method called *server\_set\_event\_loop()* to deal with such
a case. This method has only one argument which is a function pointer.
This function does not receive any argument and returns a boolean. If
this boolean is true, the device server process exits. The device server
core will call this function in a loop without any sleeping time between
the call. It is the user responsability to implement in this function
some kind of sleeping mechanism in order not to make this loop too CPU
consuming. The code of this function is executed by the device server
main thread. The following piece of code is an example of how you can
use this feature.

.. code:: cpp
  :number-lines:


    bool my_event_loop()
    {
       bool ret;

       some_sleeping_time();

       ret = handle_gui_events();

       return ret;
    }

    int main(int argc,char *argv[])
    {
       Tango::Util *tg;
       try
       {
          // Initialise the device server
          //----------------------------------------
          tg = Tango::Util::init(argc,argv);

          tg->set_polling_threads_pool_size(5);

          // Create the device server singleton
          //        which will create everything
          //----------------------------------------
          tg->server_init(false);

          tg->server_set_event_loop(my_event_loop);

          // Run the endless loop
          //----------------------------------------
          cout << "Ready to accept request" << endl;
          tg->server_run();
       }
       catch (bad_alloc)
       {
       ...

The device server main event loop is set at line 29 before the call to
the Util::server\_run() method. The function used as server loop is
defined between lines 2 and 11.