	vector<string> v1;
	v1.push_back("one");
	v1.push_back("two");
	v1.push_back("three");
	
	Tango::DevVarStringArray s;
	s << v1;
	cout << s << endl;

	vector<string> v2;
	v2 << s;
	
	for (int i = 0;i < v2.size();i++)
		cout << "vector element = " << v2[i] << endl;
