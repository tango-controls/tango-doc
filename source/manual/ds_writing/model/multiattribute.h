class MultiAttribute
{
public:
	MultiAttribute(string &,DeviceClass *);
	~MultiAttribute();

	Attribute &get_attr_by_name(const char *);
	Attribute &get_attr_by_ind(const long);
	WAttribute &get_w_attr_by_name(const char *);
	WAttribute &get_w_attr_by_ind(const long);
	long get_attr_ind_by_name(const char *);
	
	vector<long> &get_alarm_list();
	long get_attr_nb();
	
	bool check_alarm(const char *);
	bool check_alarm(const long);
	bool check_alarm();
	void read_alarm(string &);
	...	

protected:	
	vector<Attribute *>	attr_list;
	vector<long>		writable_attr_list;
	vector<long>		alarm_attr_list;
};
