import Tango.*;

public class ty
{
	public static void main(String argv[])
	{
	long l = 2;

	String[] str_array = new String[2];
	str_array[0] = new String("Rumba");
	str_array[1] = new String("BlaBla");

	System.out.println("Elements nb in the DevVarStringArray data " + str_array.length);
	for (int i = 0;i < str_array.length;i++)
		System.out.println("Element value = " + str_array[i]);

	DevVarLongStringArray ls = new DevVarLongStringArray();
	ls.lvalue = new int[1];
	ls.lvalue[0] = 1;
	ls.svalue = new String[2];
	ls.svalue[0] = new String("Bli");
	ls.svalue[1] = new String("Bla");

	DevState st = DevState.FAULT;
	switch (st.value())
	{
	case DevState._ON : 
		System.out.println("The state is ON");
		st = DevState.FAULT;
		break;

	case DevState._FAULT :
		System.out.println("The state is FAULT");
		st = DevState.ON;
		break;
	}
	}

}
