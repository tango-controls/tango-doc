public void write_attr_hardware(Vector attr_list)
{
	Util.out2.println("In write_attr_hardware for "+attr_list.size()+" attribute(s)");
	
	for (int i=0 ; i<attr_list.size() ; i++)
	{
		int ind = ((Integer)(attr_list.elementAt(i))).intValue();
		WAttribute att = dev_attr.get_w_attr_by_ind(ind);
		String attr_name = att.get_name();

		//	Switch on attribute name
		//---------------------------------
		if (attr_name.equals("LongWrAttr") == true)
		{
			//	Add your own code here
			attr_wr = att.get_lg_write_value();
			System.out.println("Value to be written = "+attr_wr);
		}
	}
}


public void read_attr_hardware(Vector attr_list)
{
	Util.out2.println("In read_attr_hardware for "+attr_list.size()+" attribute(s)");

	//	Add you own code here
	//---------------------------------
		
	for (int i=0; i<attr_list.size() ; i++)
	{
		int ind = ((Integer)(attr_list.elementAt(i))).intValue();
		Attribute att = dev_attr.get_attr_by_ind(ind);
		String attr_name = attr_list.elementAt(i);
			
		if (attr_name.equals("LongRdAttr") == true)
		{
			attr_rd = 5;
		}
		else if (attr_name.equals("StrAttr") == true)
		{
			attr_str_array[0] = new String("Rock");
			attr_str_array[1] = new String("Samba");
		}
	}
}


public void read_attr(Attribute attr) throws DevFailed
{
	String attr_name = attr.get_name();
	Util.out2.println("In read_attr for attribute "+attr_name);

	//	Switch on attribute name
	//---------------------------------
	if (attr_name.equals("LongWrAttr") == true)
	{
		//	Add your own code here
		attr.set_value(attr_wr);
	}
	if (attr_name.equals("LongRdAttr") == true)
	{
		//	Add your own code here
		attr.set_value(attr_rd);
	}
	if (attr_name.equals("StrAttr") == true)
	{
		//	Add your own code here
		attr.set_value(attr_str_array);
	}
}
