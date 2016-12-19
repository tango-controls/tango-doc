public void read_attr_hardware(Vector attr_list)
{
	Util.out2.println("In read_attr_hardware for "+attr_list.size()+" attribute(s)");
	for (int i = 0;i< attr_list.size();i++)
	{
		int ind = ((Integer)(attr_list.elementAt(i))).intValue();
		String attr_name = dev_attr.get_attr_by_ind(ind).get_name();
		
		if (attr_name == "Position")
		{
			attr_Position_read[0] = position[0];
		}
		else if (attr_name == "Direction")
		{
			attr_Direction_read[0] = direction[0];
		}
	}	
}


public void read_attr(Attribute attr) throws DevFailed
{
	String attr_name = attr.get_name();
	Util.out2.println("In read_attr for attribute "+attr_name);
	if (attr_name.equals("Position") == true)
	{
		attr.set_value(attr_Position_read);
	}
	else if (attr_name.equals("Direction") == true)
	{
		attr.set_value(attr_Direction_read);
	}
}	
