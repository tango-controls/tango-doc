#include <myservice.h>
#include <tango.h>

using namespace std;

MYService::MYService(char *exec_name):NTService(exec_name)
{
}

void MYService::start(int argc,char **argv,Tango::NTEventLogger *logger)
{
	Tango::Util *tg;
	try
	{
		Tango::Util::_service = true;

		tg = Tango::Util::init(argc,argv);

                tg->server_init();

		tg->server_run();
	}
	catch (bad_alloc)
	{
		logger->error("Can't allocate memory to store device object");
	}
	catch (Tango::DevFailed &e)
	{
		logger->error(e.errors[0].desc.in());
	}
	catch (CORBA::Exception &)
	{
		logger->error("CORBA Exception");
	}
}
