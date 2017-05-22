#include <tango.h>

#include <steppermotor.h>
#include <steppermotorclass.h>

namespace StepperMotor
{

StepperMotorClass *StepperMotorClass::_instance = NULL;

StepperMotorClass::StepperMotorClass(string &s):
Tango::DeviceClass(s)
{
	cout2 << "Entering StepperMotorClass constructor" << endl;
	
	cout2 << "Leaving StepperMotorClass constructor" << endl;
}


StepperMotorClass *StepperMotorClass::init(const char *name)
{
	if (_instance == NULL)
	{
		try
		{
			string s(name);
			_instance = new StepperMotorClass(s);
		}
		catch (bad_alloc)
		{
			throw;
		}		
	}		
	return _instance;
}

StepperMotorClass *StepperMotorClass::instance()
{
	if (_instance == NULL)
	{
		cerr << "Class is not initialised !!" << endl;
		exit(-1);
	}
	return _instance;
}
