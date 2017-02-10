
bool my_event_loop()
{
	bool ret;

	some_sleeping_time();

	ret = handle_gui_events();

	return ret;
}

int main(int argc,char *argv[])
{
	Tango::Util *tg;
	try
	{
		// Initialise the device server
		//----------------------------------------
		tg = Tango::Util::init(argc,argv);

		tg->set_polling_threads_pool_size(5);

		// Create the device server singleton 
		//	which will create everything
		//----------------------------------------
		tg->server_init(false);

		tg->server_set_event_loop(my_event_loop);

		// Run the endless loop
		//----------------------------------------
		cout << "Ready to accept request" << endl;
		tg->server_run();
	}
	catch (bad_alloc)
	{
	...
