int dev_read_position(int axis) throws DevFailed
{

	if (axis < 0 || axis > SM_MAX_MOTORS)
	{
		Util.out1.println("Steppermotor.dev_read_position(): axis out of range !");

		StringBuffer o = new StringBuffer("Axis number ");
		o.append(axis);
		o.append(" out of range");
		
		Except.throw_exception("StepperMotor_AxisOutOfRange",
				       o.toString(),
				       "StepperMotor.dev_read_position()");
	}

	return position[axis];
}

public void always_executed_hook()
{
	Util.out2.println("In always_executed_hook method");	
}

public DevState dev_state() throws DevFailed
{
	Util.out2.println("In StepperMotor state command");
	return super.dev_state();
}

public String dev_status() throws DevFailed
{
	Util.out2.println("In StepperMotor status command");
	return super.dev_status();
}
