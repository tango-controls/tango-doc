	....

	Tango::DevVarLongArray dvla_array[3];
	
	for(int i = 0;i < 3;i++)
	{
		dvla_array[i].length(3);
		dvla_array[i][0] = 10 + i;
		dvla_array[i][1] = 11 + i;
		dvla_array[i][2] = 12 + i;
	}

	Tango::CmdHistoryStack<DevVarLongArray> chs;
	chs.length(3);

	for (int k = 0;k < 3;k++)
	{
		time_t when = time(NULL);

		Tango::TimedCmdData<DevVarLongArray> tcd(&dvla_array[k],when);
		chs.push(tcd);
	}

	Tango::Util *tg = Tango::Util::instance();
	string cmd_name("MyCmd");
	DeviceImpl *dev = ....;

	tg->fill_cmd_polling_buffer(dev,cmd_name,chs);

	.....
