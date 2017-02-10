#include <tango.h>
#include <ntservice.h>

class MYService: public Tango::NTService
{
public:
	MYService(char *);

	void start(int,char **,Tango::NTEventLogger *);
};
