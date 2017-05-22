void DocDs::get_device_property()
{
	Tango::DbData	data;
	data.push_back(DbDatum("Max"));
	data.push_back(DbDatum("Min"));

	get_db_device()->get_property(data);

	if (data[0].is_empty()==false)
		data[0]  >>  max;
	if (data[1].is_empty()==false)
		data[1]  >>  min;
}
