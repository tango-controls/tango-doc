bool DevReadPositionCmd::is_allowed(Tango::DeviceImpl *device,
				    const CORBA::Any &in_any)
{
	if (device->get_state() == Tango::ON)
		return true;
	else
		return false;
}
