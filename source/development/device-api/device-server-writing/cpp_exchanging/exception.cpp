	TangoSys_OMemStream o;
		
	o << "Command " << command << " not found" << ends;
	Except::throw_exception((const char *)"API_CommandNotFound",
			      o.str(),
			      (const char *)"DeviceClass::command_handler");


	try
	{
		.....
	}
	catch (Tango::DevFailed &e)
	{
		TangoSys_OMemStream o;
		
		o << "Command " << command << " not found" << ends;
		Except::re_throw_exception(e,
				(const char *)"API_CommandNotFound",
			        o.str(),
			        (const char *)"DeviceClass::command_handler");
	}
