Tango::DevVarDoubleStringArray *DocDs::dev_struct()
{
	//	POGO has generated a method core with argout allocation.
	//	If you would like to use a static reference without copying,
	//	See "TANGO Device Server Programmer's Manual"
	//		(chapter x.x)
	//------------------------------------------------------------
	Tango::DevVarDoubleStringArray	*argout  = new Tango::DevVarDoubleStringArray();

	cout1 << "DocDs::dev_struct(): entering... !" << endl;
	
	//	Add your own code to control device here

	argout->dvalue.length(3);
	argout->dvalue[0] = 0.0;
	argout->dvalue[1] = 11.11;
	argout->dvalue[2] = 22.22;
	
	argout->svalue.length(2);
	argout->svalue[0] = CORBA::string_dup("Be Bop");
	string str("Smurf");
	argout->svalue[1] = CORBA::string_dup(str.c_str());
	
	return argout;
}
