class StepperMotorClass : public DeviceClass
{
public:
	static StepperMotorClass *init(const char *);
	static StepperMotorClass *instance();
	~StepperMotorClass() {_instance = NULL;}
	
protected:
	StepperMotorClass(string &);
	static StepperMotorClass *_instance;
	void command_factory();
	
private:
	void device_factory(Tango_DevVarStringArray *);
};
