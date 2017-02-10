public void device_factory(String[] devlist) throws DevFailed
{
	for (int i = 0;i < devlist.length;i++)
	{
		Util.out4.println("Device name : " + devlist[i]);
						
		device_list.addElement(new StepperMotor(this,
					  	        devlist[i],
							"A Tango motor",
							DevState.ON,
							"The motor is ON"));

		if (Util.instance()._UseDb == true)
			export_device(((DeviceImpl)(device_list.lastElement())));
		else
			export_device(((DeviceImpl)(device_list.lastElement())),
					devlist[i]);
	}
}
