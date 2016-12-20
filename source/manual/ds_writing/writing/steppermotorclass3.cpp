void StepperMotorClass::device_factory(const Tango::_DevVarStringArray *devlist_ptr)
{
	
	for (long i = 0;i < devlist_ptr->length();i++)
	{
		cout4 << "Device name : " << (*devlist_ptr)[i] << endl;
						
		device_list.push_back(new StepperMotor(this,
						       (*devlist_ptr)[i]));							 

		if (Tango::Util::_UseDb == true)
			export_device(device_list.back());
		else
			export_device(device_list.back(),(*devlist_ptr[i]));
	}
}
