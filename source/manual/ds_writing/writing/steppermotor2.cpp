long StepperMotor::dev_read_position(long axis)
{

	if (axis < 0 || axis > AGSM_MAX_MOTORS)
	{
		WARNING_STREAM << "Steppermotor::dev_read_position(): axis out of range !";
		WARNING_STREAM << endl;
		
		TangoSys_OMemStream o;
		
		o << "Axis number " << axis << " out of range" << ends;
		throw_exception((const char *)"StepperMotor_OutOfRange",
				o.str(),
			 	(const char *)"StepperMotor::dev_read_position");
	}

	return position[axis];
}

void always_executed_hook()
{
	INFO_STREAM << "In the always_executed_hook method << endl;
}

Tango_DevState StepperMotor::dev_state()
{
	INFO_STREAM << "In StepperMotor state command" << endl;
	return DeviceImpl::dev_state();
}

Tango_DevString StepperMotor::dev_status()
{
	INFO_STREAM << "In StepperMotor status command" << endl;
	return DeviceImpl::dev_status();
}

void read_Direction(Tango::Attribute att)
{
	att.set_value(attr_Direction_read);
}
