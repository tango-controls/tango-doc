public int dev_read_direction(int axis) throws DevFailed
{
	if (axis < 0 || axis > SM_MAX_MOTORS)
	{
		Util.out1.println("Steppermotor.dev_read_direction(): axis out of range !");
		
		StringBuffer o = new StringBuffer("Axis number ");
		o.append(axis);
		o.append(" out of range");
		
		Except.throw_exception("StepperMotor_AxisOutOfRange",
				       o.toString(),
				       "StepperMotor.dev_read_direction()");
	}

	return direction[axis];
}

public boolean direct_cmd_allowed(Any data_in)
{
	Util.out2.println("In StepperMotor.direct_cmd_allowed method");

	return true;
}
