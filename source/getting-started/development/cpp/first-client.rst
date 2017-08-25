.. raw:: latex

    \clearpage

Writing your first C++ TANGO client
===================================

The quickest way of getting started is by studying this example :

.. code:: cpp
  :number-lines:

    /*
     * example of a client using the TANGO C++ api.
     */
    #include <tango.h>
    using namespace Tango;
    int main(unsigned int argc, char **argv)
    {
        try
        {

    //
    // create a connection to a TANGO device
    //

            DeviceProxy *device = new DeviceProxy("sys/database/2");

    //
    // Ping the device
    //

            device->ping();

    //
    // Execute a command on the device and extract the reply as a string
    //

            string db_info;
            DeviceData cmd_reply;
            cmd_reply = device->command_inout("DbInfo");
            cmd_reply >> db_info;
            cout << "Command reply " << db_info << endl;

    //
    // Read a device attribute (string data type)
    //

            string spr;
            DeviceAttribute att_reply;
            att_reply = device->read_attribute("StoredProcedureRelease");
            att_reply >> spr;
            cout << "Database device stored procedure release: " << spr << endl;
        }
        catch (DevFailed &e)
        {
            Except::print_exception(e);
            exit(-1);
        }
    }

Modify this example to fit your device server or client’s needs, compile
it and link with the library -ltango. Forget about those painful early
TANGO days when you had to learn CORBA and manipulate Any’s. Life’s
going to easy and fun from now on !


