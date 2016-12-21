void public get_device_property() throws DevFailed
{
	String[] prop_names = {"Max","Min"};

	DbDatum[] res_value = db_dev.get_property(prop_names);

	if (res_value[0].is_empty() == false)
		max = res_value[0].extractInt();
	if (res_value[1].is_empty() == false)
		min = res_value[1].extractInt();
}
