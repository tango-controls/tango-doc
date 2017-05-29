#include <tango.h>

namespace StepperMotor
{

class StepperMotorClass : public Tango::DeviceClass
{
public:
	static StepperMotorClass *init(const char *);
	static StepperMotorClass *instance();
	~StepperMotorClass() {_instance = NULL;}
	
protected:
	StepperMotorClass(string &);
	static StepperMotorClass *_instance;
	void command_factory();
	void attribute_factory(vector<Tango::Attr *> &);
	
public:
	void device_factory(const Tango::DevVarStringArray *);
};

} /* End of StepperMotor namespace */
