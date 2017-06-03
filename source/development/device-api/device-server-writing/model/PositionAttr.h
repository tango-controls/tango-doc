class PositionAttr: public Tango::Attr
{
public:
	PositionAttr():Attr("Position",Tango::DEV_LONG,Tango::READ);
	~PositionAttr() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<StepperMotor *>(dev))->read_Position(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<StepperMotor *>(dev))->is_Position_allowed(ty);}
};
