#include <tango.h>

int main(int argc,char *argv[])
{

	Tango::Util *tg;
	
	try
	{
	
		tg = Tango::Util::init(argc,argv);

		tg->server_init();

		cout << "Ready to accept request" << endl;
		tg->server_run();
	}
	catch (bad_alloc)
	{
		cout << "Can't allocate memory!!!" << endl;
		cout << "Exiting" << endl;
	}
	catch (CORBA::Exception &e)
	{
		Tango::Except::print_exception(e);
		
		cout << "Received a CORBA::Exception" << endl;
		cout << "Exiting" << endl;
	}

	tg->server_cleanup();
		
	return(0);
}
