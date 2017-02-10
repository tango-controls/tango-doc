	....

	Tango::AttrHistoryStack<DevString> ahs;
	ahs.length(3);

	for (int k = 0;k < 3;k++)
	{
		time_t when = time(NULL);

		DevString *ptr = new DevString [1];
		ptr = CORBA::string_dup("Attr history data");

		Tango::TimedAttrData<DevString> tad(ptr,Tango::ATTR_VALID,true,when);
		ahs.push(tad);
	}

	Tango::Util *tg = Tango::Util::instance();
	string attr_name("MyAttr");
	DeviceImpl *dev = ....;

	tg->fill_attr_polling_buffer(dev,attr_name,ahs);

	.....
