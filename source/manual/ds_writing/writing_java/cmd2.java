public Any execute(DeviceImpl device,Any in_any) throws DevFailed
{
	Util.out2.println("DevReadPositionCmd.execute(): arrived");

	int motor = extract_DevLong(in_any);

	return insert(((StepperMotor)(device)).dev_read_position(motor));
}
