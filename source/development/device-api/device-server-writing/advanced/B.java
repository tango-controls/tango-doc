public class B extends A implements TangoConst
{
	boolean constructed = false;

	A(DeviceClass cl,String s)
	{
		super(cl,s);
		constructed = true;
		...
		init_device();
	}

	public void init_device()
	{
		if (constructed == false)
		{
			return;
		}
		super.init_device();

		...
	}
};
