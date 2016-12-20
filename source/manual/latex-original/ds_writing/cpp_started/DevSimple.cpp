Tango::DevFloat DocDs::dev_simple(Tango::DevFloat argin)
{
	Tango::DevFloat	argout ;
	cout1 << "DocDs::dev_simple(): entering... !" << endl;

	//	Add your own code to control device here

	argout = argin * 2;
	return argout;
}
