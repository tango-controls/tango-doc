void StepperMotor::read_attr_hardware(vector<long> &attr_list)
{
	INFO_STREAM << "In read_attr_hardware for " << attr_list.size();
	INFO_STREAM << " attribute(s)" << endl;

	for (long i = 0;i < attr_list.size();i++)
	{
		string attr_name;
		attr_name = dev_attr->get_attr_by_ind(attr_list[i]).get_name();

		if (attr_name == "Position")
		{
			attr_Position_read = &(position[0]);
		}
		else if (attr_name == "Direction")
		{
			attr_Direction_read = &(direction[0]);
		}
	}
}

void read_Position(Tango::Attribute &att)
{
	att.set_value(attr_Position_read);
}

bool is_Position_allowed(Tango::AttReqType req)
{
	if (req == Tango::WRITE_REQ)
		return false;
	else
	{
		if (get_state() == Tango::ON)
			return true;
		else
			return false;
	}
}
