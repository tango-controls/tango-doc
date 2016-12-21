Tango::DevVarStringArray *DocDs::dev_str_array()
{
	//	POGO has generated a method core with argout allocation.
	//	If you would like to use a static reference without copying,
	//	See "TANGO Device Server Programmer's Manual"
	//		(chapter x.x)
	//------------------------------------------------------------
	Tango::DevVarStringArray	*argout  = new Tango::DevVarStringArray();

	cout1 << "DocDs::dev_str_array(): entering... !" << endl;

	//	Add your own code to control device here

	argout->length(3);
	(*argout)[0] = CORBA::string_dup("Rumba");
	(*argout)[1] = CORBA::string_dup("Waltz");
	string str("Jerck");
	(*argout)[2] = CORBA::string_dup(str.c_str());
	return argout;
}
