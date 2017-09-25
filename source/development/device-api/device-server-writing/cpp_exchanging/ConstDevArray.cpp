Tango::DevVarLongArray *MyDev::dev_array()
{
	Tango::DevVarLongArray	*argout;
		
	long output_array_length = ...;
	argout = create_DevVarLongArray(buffer,output_array_length);
	return argout;
}
