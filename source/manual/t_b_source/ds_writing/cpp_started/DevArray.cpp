Tango::DevVarLongArray *DocDs::dev_array(const Tango::DevVarLongArray *argin)
{
	//	POGO has generated a method core with argout allocation.
	//	If you would like to use a static reference without copying,
	//	See "TANGO Device Server Programmer's Manual"
	//		(chapter x.x)
	//------------------------------------------------------------
	Tango::DevVarLongArray	*argout  = new Tango::DevVarLongArray();
		
	cout1 << "DocDs::dev_array(): entering... !" << endl;

	//	Add your own code to control device here

	long argin_length = argin->length();	
	argout->length(argin_length);
	for (int i = 0;i < argin_length;i++)
		(*argout)[i] = (*argin)[i] * 2;

	return argout;
}
