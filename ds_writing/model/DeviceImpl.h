class DeviceImpl : public Tango_Device_skel
{
public:
	DeviceImpl(DeviceClass *class_ptr,
	           const char *dev_name,const char *description = "A TANGO device",
	           Tango_DevState state = Tango_UNKNOWN,
	           const char *status = "Not Initialised");
	DeviceImpl(DeviceClass *class_ptr,string &dev_name);	
	DeviceImpl(DeviceClass *class_ptr,string &dev_name,string &description);
	DeviceImpl(DeviceClass *class_ptr,
	           string &dev_name,string &description,
	           Tango_DevState state,string &status);
		   
	virtual ~DeviceImpl();
		
	string &get_status();
	void set_status(const string &new_status);
	Tango_DevState &get_state();
	void set_state (const Tango_DevState &new_state);
	Tango_DevState &get_init_state();
	string &get_init_status();
	string &get_name();
	DeviceClass *get_device_class();
	MultiAttribute *get_device_attr();
	void set_device_attr(MultiAttribute *);

	virtual char *name();
	virtual char *description();
	virtual char *status();
	virtual Tango_DevState state();

	virtual CORBA_Any *command_inout(const char *, const CORBA_Any &);
	virtual Tango_DevVarStringArray *black_box(CORBA_Long);
	virtual Tango_DevCmdInfoList *command_list_query();
	virtual Tango_DevCmdInfo *command_query(const char *);
	virtual Tango_DevInfo *info();
	virtual void ping();
	virtual Tango_AttributeConfigList *get_attribute_config(
				const Tango_DevVarStringArray &);
	virtual void set_attribute_config(const Tango_AttributeConfigList &);
	virtual Tango_AttributeValueList *read_attributes(
				const Tango_DevVarStringArray &);
	virtual void write_attributes(const Tango_AttributeValueList &);

	virtual void init_device() = 0;
	virtual Tango_DevState dev_state();
	virtual Tango_DevString dev_status();
	virtual void always_executed_hook();
	virtual void read_attr_hardware(vector<long> &);
	virtual void read_attr(Attribute &);
	virtual void write_attr_hardware(vector<long> &);
	
	void register_signal(long);
	void unregister_signal(long);
	virtual void signal_handler(long);
	
protected:
	BlackBox		*blackbox_ptr;	
	long			blackbox_depth;
	string			device_name;	
	string			desc;	
	string			device_status;	
	string			init_status;
	Tango_DevState		device_state;
	Tango_DevState		init_state;
	Tango_DevSecurity	access;	
	long			version;
	DeviceClass		*device_class;
	MultiAttribute		*dev_attr;
};
