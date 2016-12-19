class StepperMotor: public DeviceImpl
{
public :
	StepperMotor(DeviceClass *,string &);
	StepperMotor(DeviceClass *,const char *);
	StepperMotor(DeviceClass *,const char *,const char *);
	~StepperMotor() {};
	
	long dev_read_position(long);
	long dev_read_direction(long);
	bool direct_cmd_allowed(const CORBA::Any &);
	
	void read_attr_hardware(vector<long> &);
	bool is_Position_allowed(Tango::AttReqType);
	void read_Position(Tango::Attribute &);

	virtual Tango_DevState dev_state();
	virtual Tango_DevString dev_status();
	virtual void always_executed_hook();
	
	virtual void init_device();

protected :	
	long axis[AGSM_MAX_MOTORS];
	long position[AGSM_MAX_MOTORS];
	long direction[AGSM_MAX_MOTORS];
	long state[AGSM_MAX_MOTORS];
};
