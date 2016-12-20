void DocDs::read_attr_hardware(vector<long> &attr_list)
{
	DEBUG_STREAM << "DocDs::read_attr_hardware(vector<long> &attr_list) entering... "<< endl;
	//	Add your own code here

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

void DocDs::read_LongRdAttr(Tango::Attribute &attr)
{
	DEBUG_STREAM << "DocDs::read_LongRdAttr(Tango::Attribute &attr) entering... "<< endl;

	attr.set_value(&attr_rd);
}

void DocDs::read_LongWrAttr(Tango::Attribute &attr)
{
	DEBUG_STREAM << "DocDs::read_LongWrAttr(Tango::Attribute &attr) entering... "<< endl;

	attr.set_value(&attr_wr);
}

void DocDs::write_LongWrAttr(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "DocDs::write_LongWrAttr(Tango::WAttribute &attr) entering... "<< endl;

	attr.get_write_value(attr_wr);
	DEBUG_STREAM << "Value to be written = " << attr_wr << endl;
}

void DocDs::read_StrAttr(Tango::Attribute &attr)
{
	DEBUG_STREAM << "DocDs::read_StrAttr(Tango::Attribute &attr) entering... "<< endl;

	attr_str_array[0] = CORBA::string_dup("Rock");
	attr_str_array[1] = CORBA::string_dup("Samba");

	attr_set_value(attr_str_array, 2);
}
