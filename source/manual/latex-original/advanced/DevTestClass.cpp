
void DevTestClass::command_factory()
{
...
	command_list.push_back(new IOStartPoll("IOStartPoll",
					       Tango::DEV_VOID,
					       Tango::DEV_LONG,
					       "Void",
					       "Constant number"));
	command_list.back()->set_polling_period(400);
...
}


void DevTestClass::attribute_factory(vector<Tango::Attr *> &att_list)
{
...
  	att_list.push_back(new Tango::Attr("String_attr",
                                           Tango::DEV_STRING,
                                           Tango::READ));
  	att_list.back()->set_polling_period(250);
...
}








