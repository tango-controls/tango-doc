#include <tango.h>
#include <MYService.h>

using namespace std;


int main(int argc,char *argv[])
{
	MYService service(argv[0]);
	
	int ret;
	if ((ret = service.options(argc,argv)) <= 0)
		return ret;
	
	service.run(argc,argv);
	
	return 0;
}
