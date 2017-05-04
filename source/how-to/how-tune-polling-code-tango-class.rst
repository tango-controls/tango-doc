
.. How-To try

How to tune polling by code in a TANGO class
============================================


This HowTo explains how it is easily possible to tune attribute or command
polling parameters in the code of a Tango class

Since Tango 8, it is possible to configure command or attribute polling
within a Tango class code. A new set of polling related methods has been
added to the base class **Tango::DeviceImpl.** These methods are similar
to those you find in the Tango::DeviceProxy class when you write a Tango
client. With them, you can

-   Check if a command or attribute is polled
-   Start/Stop polling for a command or a attribute
-   Get or update polling period for a polled attribute or command

In C++
------

To display some information related to polling of the attribute named *TheAtt*:

.. code-block:: cpp
    :linenos:

    string att_name("TheAtt");
    cout << "Attribute " << att_name;

    if (is_attribute_polled(att_name) == true)
       cout << " is polled with period " << get_attribute_poll_period(att_name) << " mS" << endl;
    else
       cout << " is not polled" << endl;

To poll a command simply type:

.. code-block:: cpp
    :linenos:

    poll_command("TheCmd",250);

 If the command is already polled, this method will update its polling
period to 250 mS. Finally, to stop polling the same command, type:

.. code-block:: cpp
    :linenos:

    stop_poll_command("TheCmd");

All these DeviceImpl polling related methods are documented in the DeviceImpl_ class documentation page

In Python
---------

To display some information related to polling of the attribute
named *TheAtt,* in a **DeviceImpl** context type:

.. code-block:: python
    :linenos:

    att_name = "TheAtt"

    if self.is_attribute_polled(att_name):
        print("{0} is polled with period {1} ms".format(att_name, self.get_attribute_poll_period(att_name))
    else:
        print("{0} is not polled".format(att_name))

To poll a command, in a **DeviceImpl** context, simply type:

.. code-block:: python
    :linenos:

    self.poll_command("TheCmd", 250)

If the command is already polled, this method will update its polling
period to 250 mS. Finally, to stop polling the same command, in
a **DeviceImpl** context type:

.. code-block:: python
    :linenos:

    self.stop_poll_command("TheCmd")

All these DeviceImpl polling related methods are documented in the PyTango_ DeviceImpl class documentation page.

In Java
-------

The polling can be retrieved and modified from the DeviceManager class.
Here is an example:

.. code-block:: java
    :linenos:

    import org.tango.server.annotation.Device;
    import org.tango.server.annotation.DeviceManagement;
    import org.tango.server.device.DeviceManager;
    import fr.esrf.Tango.DevFailed;
    @Device
    public class Test {
        @DeviceManagement
        private DeviceManager deviceManager;
         ...
            final String attName = "TheAttr";
            if (deviceManager.isPolled(attName)) {
                System.out.println(attName + " is polled with period " + deviceManager.getPollingPeriod(attName) + " mS");
            } else {
                System.out.println(attName + " is not polled");
            }
            deviceManager.startPolling("TheCmd", 250);
            deviceManager.stopPolling("TheCmd")
            ...
       
       public void setDeviceManager(final DeviceManager deviceManager) {
            this.deviceManager = deviceManager;
        }
    }

.. definitions
  ------------
.. _DeviceImpl: http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/cpp_doc/classTango_1_1DeviceImpl.html
.. _PyTango: http://pytango.readthedocs.io/en/stable/server_api/server.html

