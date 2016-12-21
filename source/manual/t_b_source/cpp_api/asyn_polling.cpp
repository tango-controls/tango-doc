	Tango::DeviceProxy dev("...");
	long asyn_id;

	asyn_id = dev.command_inout_asyn("MyCmd");
	...
	...
	...

	try
	{
		dev.command_inout_reply(asyn_id);
	}
	catch(Tango::AsynReplyNotArrived)
	{
		cerr << "Command not arrived !" << endl;
	}
	catch (Tango::DevFailed &e)
	{
		Tango::Except::print_exception(e);
	} 
