void DocDs::write_attr_hardware(vector<long> &attr_list)
{
	cout << "In write_attr_hardware for " << attr_list.size();
	cout << " attribute(s)" << endl;

	for (long i=0 ; i < attr_list.size() ; i++)
	{
		WAttribute &att = dev_attr->get_w_attr_by_ind(attr_list[i]);
		string attr_name = att.get_name();

		cout << "Attribute name = " << attr_name;		

		//	Switch on attribute name
		//---------------------------------
		if (attr_name == "LongWrAttr")
		{
			//	Add your own code here
			att.get_write_value(attr_wr);
			cout << "Value to be written = " << attr_wr << endl;
		}
	}
}

void DocDs::read_attr_hardware(vector<long> &attr_list)
{
	cout << "In read_attr_hardware for " << attr_list.size();
	cout << " attribute(s)" << endl;
	
	//	Add your own code here
	//---------------------------------
	
	string att_name;
	for (long i = 0;i < attr_list.size();i++)
	{
		att_name = dev_attr->get_attr_by_ind(attr_list[i]).get_name();
		
		if (att_name == "LongRdAttr")
		{
			attr_rd = 5;
		}
	}
}

void DocDs::read_attr(Tango::Attribute &attr)
{
	string &attr_name = attr.get_name();

	cout << "In read_attr for attribute " << attr_name << endl;

	//	Switch on attribute name
	//---------------------------------
	if (attr_name == "LongRdAttr")
	{
		//	Add your own code here
      		attr.set_value(&attr_rd);
	}
	if (attr_name == "LongWrAttr")
	{
		//	Add your own code here
		attr.set_value(&attr_wr);
	}
	if (attr_name == "StrAttr")
	{
		//	Add your own code here
      		attr_str_array[0] = CORBA::string_dup("Rock");
      		attr_str_array[1] = CORBA::string_dup("Samba");
      
      		attr.set_value(attr_str_array, 2);
	}
}
