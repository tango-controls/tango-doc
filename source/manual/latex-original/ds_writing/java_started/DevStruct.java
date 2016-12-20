public DevVarDoubleStringArray dev_struct() throws DevFailed
{
	DevVarDoubleStringArray	argout = new DevVarDoubleStringArray();

	Util.out2.println("Entering dev_struct()");

	// ---Add your Own code to control device here ---

	argout.dvalue = new double[3];
	argout.dvalue[0] = 0.0;
	argout.dvalue[1] = 11.11;
	argout.dvalue[2] = 22.22;

	argout.svalue = new String[2];
	argout.svalue[0] = new String("Be Bop");
	argout.svalue[1] = new String("Smurf");

	return argout;
}
