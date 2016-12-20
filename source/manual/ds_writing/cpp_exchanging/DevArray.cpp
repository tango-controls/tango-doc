Tango::DevVarLongArray *MyDev::dev_array()
{
	Tango::DevVarLongArray	*argout  = new Tango::DevVarLongArray();
		
	long output_array_length = ...;
	argout->length(output_array_length);
	for (int i = 0;i < output_array_length;i++)
		(*argout)[i] = i;

	return argout;
}
