#include <tango.h>
#include <steppermotor.h>

namespace StepperMotor
{

StepperMotor::StepperMotor(Tango::DeviceClass *cl,string &s)
:TANGO_BASE_CLASS(cl,s.c_str())
{
	init_device();
}

StepperMotor::StepperMotor(Tango::DeviceClass *cl,const char *s)
:TANGO_BASE_CLASS(cl,s)
{
	init_device();
}

StepperMotor::StepperMotor(Tango::DeviceClass *cl,const char *s,const char *d)
:TANGO_BASE_CLASS(cl,s,d)
{
	init_device();
}

void StepperMotor::init_device()
{
	cout << "StepperMotor::StepperMotor() create " << device_name << endl;

	long i;

	for (i=0; i< AGSM_MAX_MOTORS; i++)
	{
        	axis[i] = 0;
        	position[i] = 0;
        	direction[i] = 0;
	}

	ptr = new Tango::DevLong[10];

	get_device_properties();
}

void StepperMotor::delete_device()
{
	delete [] ptr;
}
