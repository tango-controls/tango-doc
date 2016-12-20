class Command
{
public:
	Command() {};
	Command(const char *,Tango_CmdArgType,Tango_CmdArgType);
	Command(string &,Tango_CmdArgType,Tango_CmdArgType);
	Command(const char *,Tango_CmdArgType,Tango_CmdArgType, const char *,const char *);
	Command(string &,Tango_CmdArgType,Tango_CmdArgType,string &,string &);
	
	virtual ~Command() {};
	
	virtual CORBA_Any * execute (DeviceImpl *, const CORBA_Any &) = 0;
	virtual bool is_allowed (DeviceImpl *, const CORBA_Any &);
	
	string &get_name() {return name;}
	Tango_CmdArgType get_in_type() {return in_type;}
	Tango_CmdArgType get_out_type() {return out_type;}
	
	string &get_in_type_desc() {return in_type_desc;}
	string &get_out_type_desc() {return out_type_desc;}
	void set_in_type_desc(const char *desc) {in_type_desc = desc;}
	void set_in_type_desc(string &desc) {in_type_desc = desc;}
	void set_out_type_desc(const char *desc) {out_type_desc = desc;}
	void set_out_type_desc(string &desc) {out_type_desc = desc;}

	void extract(const CORBA_Any &,Tango_DevBoolean &);
	void extract(const CORBA_Any &,Tango_DevShort &);
	....

	CORBA_Any *insert();	
	CORBA_Any *insert(Tango_DevBoolean);
	....
			
protected:
	string 			name;		// The command name
	Tango_CmdArgType	in_type;	// The command input type code
	Tango_CmdArgType	out_type;	// The command output type code
	string			in_type_desc;	// Input type desc
	string			out_type_desc;	// Output type desc
};
