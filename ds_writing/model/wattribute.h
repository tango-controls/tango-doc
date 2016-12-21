class WAttribute:public Attribute
{
public:
	WAttribute(vector<AttrProperty> &,long ,string &);
	~WAttribute() {};
	
	void get_write_value(Tango_DevShort &);
	void get_write_value(Tango_DevLong &);
	void get_write_value(Tango_DevDouble &);
	void get_write_value(Tango_DevString &);
	
	virtual void set_value();
	void rollback();
	
	void set_write_value(const CORBA_Any &);

private:
	Tango_DevShort 		short_val;
	Tango_DevShort		old_short_val;
	
	Tango_DevLong		long_val;
	Tango_DevLong		old_long_val;
	
	Tango_DevDouble		double_val;
	Tango_DevDouble		old_double_val;
	
	Tango_DevString		str_val;
	Tango_DevString		old_str_val;
	
	bool			string_allocated;
};
