Tango::DevVarStringArray *MyDev::dev_str_array()
{
	Tango::DevVarStringArray *argout  = new Tango::DevVarStringArray();

	argout->length(3);
	(*argout)[0] = CORBA::string_dup("Rumba");
	(*argout)[1] = CORBA::string_dup("Waltz");
	string str("Jerck");
	(*argout)[2] = CORBA::string_dup(str.c_str());
	return argout;
}
