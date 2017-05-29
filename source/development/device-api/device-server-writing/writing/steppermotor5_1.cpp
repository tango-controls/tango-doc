void StepperMotor::write_SetPosition(Tango::WAttribute &att)
{
	att.get_write_value(sttr_SetPosition_write);

	DEBUG_STREAM << "Attribute SetPosition value = ";
	DEBUG_STREAM << attr_SetPosition_write << endl;

	position[0] = attr_SetPosition_write;
}

void StepperMotor::write_attr_hardware(vector<long> &attr_list)
{

}
