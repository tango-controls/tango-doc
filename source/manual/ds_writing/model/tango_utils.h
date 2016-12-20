class TangoUtil
{
public:
	static TangoUtil *init(int,char *[]);
	static TangoUtil *instance();
	~TangoUtil() {};
		
	CORBA_ORB_ptr get_orb()
	CORBA_BOA_var get_boa()
	void set_trace_level(long tr) 
	long get_trace_level()
	void set_trace_output(string &str)
	string &get_trace_output()
	TangoSys_Cout &get_out()
	void set_trace_output_stream(ofstream *in)
	ofstream *get_trace_output_stream()
	
	static long		_tracelevel;
	static bool		_UseDb;
	
	static void print_exception(CORBA_Exception &e);
	string &get_ds_inst_name()
	string &get_ds_exec_name()
	string &get_ds_name()
	string &get_host_name()
	string &get_pid_str()
	TangoSys_Pid get_pid()
	string &get_version_str()
	vector<DeviceImpl *> &get_device_list_by_class(const string &);
	vector<DeviceImpl *> &get_device_list_by_class(const char *);
	DeviceImpl *get_device_by_name(const string &);
	DeviceImpl *get_device_by_name(const char *);
	DServer *get_dserver_device();

	void server_init();

	void connect_db();
	Tango_Device_var &get_db_device()
	void unregister_server();
	
protected:
	TangoUtil(int,char *[]);
};
