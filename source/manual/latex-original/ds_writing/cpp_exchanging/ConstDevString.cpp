Tango::ConstDevString MyDev::dev_string(Tango::DevString argin)
{
	Tango::ConstDevString	argout;

	cout << "the received string is " << argin << endl;
	
	argout = "Hello world";	
	return argout;
}
