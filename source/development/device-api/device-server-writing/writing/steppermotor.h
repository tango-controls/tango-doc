#include <tango.h>

#define AGSM_MAX_MOTORS 8 // maximum number of motors per device

namespace StepperMotor
{

class StepperMotor: public TANGO_BASE_CLASS
{
public :
	StepperMotor(Tango::DeviceClass *,string &);
	StepperMotor(Tango::DeviceClass *,const char *);
	StepperMotor(Tango::DeviceClass *,const char *,const char *);
	~StepperMotor() {};
	
	DevLong dev_read_position(DevLong);
	DevLong dev_read_direction(DevLong);
	bool direct_cmd_allowed(const CORBA::Any &);
	
	virtual Tango::DevState dev_state();
	virtual Tango::ConstDevString dev_status();

	virtual void always_executed_hook();

	virtual void read_attr_hardware(vector<long> &attr_list);
	virtual void write_attr_hardware(vector<long> &attr_list);

	void read_position(Tango::Attribute &);
	bool is_Position_allowed(Tango::AttReqType req);
	void write_SetPosition(Tango::WAttribute &);
	void read_Direction(Tango::Attribute &);
			
	virtual void init_device();
	virtual void delete_device();

	void get_device_properties();

protected :	
	long axis[AGSM_MAX_MOTORS];
	DevLong position[AGSM_MAX_MOTORS];
	DevLong direction[AGSM_MAX_MOTORS];
	long state[AGSM_MAX_MOTORS];
	
	Tango::DevLong	*attr_Position_read;
	Tango::DevLong	*attr_Direction_read;
	Tango::DevLong	attr_SetPosition_write;

	Tango::DevLong	min;
	Tango::DevLong	max;

	Tango::DevLong *ptr;
};

} /* End of StepperMotor namespace */
