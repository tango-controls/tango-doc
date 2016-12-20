class DeviceClass
{
public: 
	virtual ~DeviceClass();

	CORBA_Any *command_handler(DeviceImpl *,string &,const CORBA_Any &);

	string &get_name()
	string &get_doc_url()
	vector<DeviceImpl *> &get_device_list() {return device_list;}
	vector<Command *> &get_command_list() {return command_list;}
	
	void register_signal(long);
	void unregister_signal(long);
	virtual void signal_handler(long);

	virtual void command_factory() = 0;
	virtual void device_factory(Tango_DevVarStringArray *) = 0;
	virtual void attribute_factory(vector<string> &);
		
protected:
	DeviceClass(string &);
	
	void export_device(DeviceImpl *);

	string 			name;
	string			doc_url;
	vector<Command *> 	command_list;
	vector<DeviceImpl *>	device_list;
};
