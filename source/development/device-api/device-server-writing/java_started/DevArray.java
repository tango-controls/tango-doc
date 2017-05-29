public int[] dev_array(int[] argin) throws DevFailed
{
	int[]	argout = new int[argin.length];

	Util.out2.println("Entering dev_array()");

	// ---Add your Own code to control device here ---

	for (int i = 0;i < argin.length;i++)
		argout[i] = argin[i] * 2;
	return argout;
}
