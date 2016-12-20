public void write_attr_hardware(Vector attr_list)
{
	Util.out2.println("In write_attr_hardware for "+attr_list.size()+" attribute(s)");

	for (int i = 0;i < attr_list.size();i++)
	{
		int ind = ((Integer)(attr_list.elementAt(i))).intValue();
		WAttribute att = dev_attr.get_w_attr_by_ind(ind);
		String att_name = att.get_name();

		if (att_name.equals("SetPosition") == true)
		{
			attr_SetPosition_write = att.get_lg_write_value();
			Util.out2.println("Attribute SetPosition value = "+attr_SetPosition_write);
			position[0] = attr_SetPosition_write;
		}
	}
}
