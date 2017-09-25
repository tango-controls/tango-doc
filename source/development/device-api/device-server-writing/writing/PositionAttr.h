#include <tango.h>
#include <steppermotor.h>

namespace StepperMotor
{


class PositionAttr: public Tango::Attr
{
public:
	PositionAttr():Attr("Position",
                            Tango::DEV_DOUBLE,
                            Tango::READ_WITH_WRITE,i
                            "SetPosition") {};
	~PositionAttr() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<StepperMotor *>(dev))->read_Position(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<StepperMotor *>(dev))->is_Position_allowed(ty);}
};

} /* End of StepperMotor namespace */

#endif // _STEPPERMOTORCLASS_H
