Tango::DevVarStringArray *DocDs::dev_str_array()
{
	int_buffer[0] = "first";
	int_buffer[1] = "second";

	Tango::DevVarStringArray *argout;
	argout = create_DevVarStringArray(int_buffer,2);
	return argout;
}
