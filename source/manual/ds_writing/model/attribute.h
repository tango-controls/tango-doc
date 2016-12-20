class Attribute
{
public:
	Attribute(vector<AttrProperty> &,long ,string &);
	virtual ~Attribute() {};
	
	bool is_writable();
	bool is_writ_associated();
	bool is_alarmed();
	bool is_min_alarm();
	bool is_max_alarm();
	
	string &get_name();
	string &get_upper_name();
	long get_name_size();
	long get_data_type();
	Tango_AttrDataFormat get_data_format();
	string &get_assoc_name();
	long get_assoc_ind();
	void set_assoc_ind(long);
	Tango_TimeVal &get_when();
	Tango_AttrQuality &get_quality();
	void set_quality(Tango_AttrQuality);
	long get_data_size();
	void set_value_flag(bool);
	bool get_value_flag();
	
	void get_properties(Tango_AttributeConfig &);
	void set_properties(const Tango_AttributeConfig &,string &);
	void upd_database(const Tango_AttributeConfig &,string &);
	
	bool check_alarm();
	
	void set_value(Tango_DevShort *,Tango_AttrQuality);
	void set_value(Tango_DevLong *,Tango_AttrQuality);
	...
	Tango_DevVarShortArray *get_short_value();
	Tango_DevVarLongArray *get_long_value();
	Tango_DevVarDoubleArray *get_double_value();
	Tango_DevVarStringArray *get_string_value();
	virtual void set_value() {};
	void delete_seq();
	void wanted_date(bool);
	
	void add_write_value(Tango_DevShort &);
	void add_write_value(Tango_DevLong &);
	...
					
	friend ostream &operator<<(ostream &,Attribute &);

protected:
	string 			name;
	bool			writable;
	long			data_type;
	Tango_AttrDataFormat	data_format;
	long			dim_x;
	long			dim_y;
	
	string			label;
	string			description;
	string			unit;
	string			standard_unit;
	string 			display_unit;
	string			format;
	string			writable_attr_name;
	string			min_alarm_str;
	string			max_alarm_str;
	string			min_value_str;
	string			max_value_str;

	Tango_Attr_CheckVal	min_alarm;	
	Tango_Attr_CheckVal	max_alarm;	
	Tango_Attr_CheckVal	min_value;	
	Tango_Attr_CheckVal	max_value;
	
	Tango_Attr_Value	value;
	long			data_size;
	....
	
};
