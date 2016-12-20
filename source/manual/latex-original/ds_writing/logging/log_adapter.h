class MyDeviceActualImpl: public Tango::LogAdapter
{
public :
	MyDeviceActualImpl(...,Tango::DeviceImpl *device,...):Tango::LogAdpater(device)
	{
		....
//
// The following log is associated to the device passed as constructor parameter
//
		DEBUG_STREAM << "In MyDeviceActualImpl constructor" << ENDLOG;

		....
	}
};

