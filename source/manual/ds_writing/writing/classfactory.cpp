#include <tango.h>
#include <steppermotorclass.h>

void Tango::DServer::class_factory()
{

	add_class(StepperMotor::StepperMotorClass::init("StepperMotor"));

}
