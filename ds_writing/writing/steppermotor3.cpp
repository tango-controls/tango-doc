long StepperMotor::dev_read_direction(long axis)
{
	if (axis < 0 || axis > AGSM_MAX_MOTORS)
	{
		cout1 << "Steppermotor::dev_read_direction(): axis out of range !";
		cout1 << endl;
		TangoSys_OMemStream o;
		
		o << "Axis number " << axis << " out of range" << ends;
		throw_exception((const char *)"StepperMotor_OutOfRange",
				o.str(),
				(const char *)"StepperMotor::dev_read_direction");
	}

	return direction[axis];
}


bool StepperMotor::direct_cmd_allowed(const CORBA::Any &in_data)
{
	cout2 << "In direct_cmd_allowed() method" << endl;
	
	return true;
}

