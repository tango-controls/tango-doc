    string dev_name("sys/serial/2");

    Tango::DeviceImpl *dev;
    Tango::Util *tg = Tango::Util::instance();
    dev = tg->get_device_by_name(dev_name.c_str());
    
    Tango::DevState d_state = dev->state();
    cout2 << "The serial line device state is " << d_state << endl;
