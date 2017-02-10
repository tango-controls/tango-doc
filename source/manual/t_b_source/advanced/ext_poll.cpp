	.....

	string ext_polled_cmd("MyCmd");
	Tango::DeviceImpl *device = .....;

	Tango::Util *tg = Tango::Util::instance();

	tg->trigger_cmd_polling(device,ext_polled_cmd);

	.....
