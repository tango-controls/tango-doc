#include <tango.h>

namespace StepperMotor
{

class DevReadPositionCmd : public Tango::Command
{
public:
	DevReadPositionCmd(const char *,Tango::CmdArgType,
			   Tango::CmdArgType,
			   const char *,const char *);
	~DevReadPositionCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};

} /* End of StepperMotor namespace */
