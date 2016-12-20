public void attribute_factory(Vector att) throws DevFailed
{
	att.addElement(new Attr("Position",
				Tango_DEV_LONG,
				AttrWriteType.READ_WITH_WRITE,
				"SetPosition"));

	UserDefaultAttrProp def_prop = new UserDefaultAttrProp();
	def_prop.set_label("set the motor position");
	def_prop.set_format("scientific;setprecision(4)");
	Attr at = new Attr("SetPosition",
			   Tango_DEV_LONG,
			   AttrWriteType.WRITE));
	at.set_default_properties(def_prop);
	att.addElement(at);

	att.addElement(new Attr("Direction",
				Tango_DEV_LONG));
}
