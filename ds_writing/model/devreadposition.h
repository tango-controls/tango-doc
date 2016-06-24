class DevReadPositionCmd : public Command
{
public:
	DevReadPositionCmd(const char *,Tango_CmdArgType, Tango_CmdArgType);
	~DevReadPositionCmd() {};
	
	virtual bool is_allowed (DeviceImpl *, const CORBA_Any &);
	virtual CORBA_Any *execute (DeviceImpl *, const CORBA_Any &);
};
