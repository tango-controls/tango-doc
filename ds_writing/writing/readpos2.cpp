CORBA::Any *DevReadPositionCmd::execute(
			Tango::DeviceImpl *device,
			const CORBA::Any &in_any)
{	
	cout2 << "DevReadPositionCmd::execute(): arrived" << endl;
	Tango::DevLong motor;

	extract(in_any,motor);
	return insert(
	    (static_cast<StepperMotor *>(device))->dev_read_position(motor));
}
