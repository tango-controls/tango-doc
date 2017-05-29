Tango::DevString DocDs::dev_string(Tango::DevString argin)
{
	//	POGO has generated a method core with argout allocation.
	//	If you would like to use a static reference without copying,
	//	See "TANGO Device Server Programmer's Manual"
	//		(chapter x.x)
	//------------------------------------------------------------
	Tango::DevString	argout;
	cout1 << "DocDs::dev_string(): entering... !" << endl;

	//	Add your own code to control device here

	cout << "the received string is " << argin << endl;
	
	string str("Am I a good Tango dancer ?");
	argout = new char[str.size() + 1];
	strcpy(argout,str.c_str());
	
	return argout;
}
