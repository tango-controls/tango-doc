void StepperMotor::write_attr_hardware(vector<long> &attr_list)
{
	cout2 << "In write_attr_hardware for " << attr_list.size();
	cout2 << " attribute(s)" << endl;
	
	for (long i = 0;i < attr_list.size();i++)
	{
		Tango::WAttribute &att = dev_attr->get_w_attr_by_ind(attr_list[i]);
		string att_name = att.get_name();

		if (att_name == "SetPosition")
		{
			att.get_write_value(attr_SetPosition_write);
			cout2 << "Attribute SetPosition value = ";
			cout2 << attr_SetPosition_write << endl;
			position[0] = attr_SetPosition_write;
		}
	}
}
