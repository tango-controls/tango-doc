void StepperMotorClass::attribute_factory(vector<Tango::Attr *> &att_list)
{
	att_list.push_back(new PositionAttr());

	Tango::UserDefaultAttrProp def_prop;
	def_prop.set_label("Set the motor position");
	def_prop.set_format("scientific;setprecision(4)");
	Tango::Attr *at = new SetPositionAttr();
	at->set_default_properties(def_prop);
	att_list.push_back(at);

	att_list.push_back(new DirectcionAttr());
}
