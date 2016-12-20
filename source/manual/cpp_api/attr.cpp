	DeviceAttribute da;

	bitset<DeviceAttribute::numFlags> bs = da.exceptions();
	cout << "bs = " << bs << endl;
		
	da.set_exceptions(DeviceAttribute::wrongtype_flag);
	bs = da.exceptions();
		
	cout << "bs = " << bs << endl;
