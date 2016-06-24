public void command_factory()
{
	String str = new String("DevReadPosition");
	command_list.addElement(new DevReadPositionCmd(str,
		 	     Tango_DEV_LONG,Tango_DEV_LONG,
			     "Motor number (0-7)",
			     "Motor position"));

	str =  new String("DevReadDirection");
	command_list.addElement(new TemplCommandInOut(str,
	                        "dev_read_direction",
				"direct_cmd_allowed"));
}
