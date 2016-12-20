	DeviceAttribute da;
	vector<short> attr_data;

	try
	{
		da = device->read_attribute("Attr");
		da >> attr_data;
	}
	catch (DevFailed &e)
	{
		....
	}


------------------------------------------------------------------------

	DeviceAttribute da;
	vector<short> attr_data;

	da.reset_exceptions(DeviceAttribute::failed_flag);

	try
	{
		da = device->read_attribute("Attr");
	}
	catch (DevFailed &e)
	{
		.....
	}

	if (!(da >> attr_data))
	{
		DevErrorList &err = da.get_err_stack();
		.....
	}
	else
	{
		.....
	}

----------------------------------------------------------------------

	DeviceAttribute da;
	vector<short> attr_data;

	try
	{
		da = device->read_Attribute("Attr");
	}
	catch (DevFailed &e)
	{
		......
	}

	if (da.has_failed())
	{
		DevErrorList &err = da.get_err_stack();
		....
	}
	else
	{
		da >> attr_data;	
	}
