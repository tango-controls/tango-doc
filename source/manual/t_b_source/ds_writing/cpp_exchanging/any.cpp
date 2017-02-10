	CORBA_Any a;
	Tango_DevLong l1,l2;
	l1 = 2;
	a <<= l1;
	a >>= l2;

	CORBA_Any b;
	Tango_DevBoolean b1,b2;
	b1 = true;
	b <<= CORBA_Any::from_boolean(b1);
	b >>= CORBA_Any::to_boolean(b2);

	CORBA_Any s;
	Tango_DevString str1,str2;
	str1 = "I like dancing TANGO";
	a <<= str1;
	a >>= str2;

//	CORBA_string_free(str2);
//	a <<= CORBA_string_dup("Oups");

	CORBA_Any seq;
	Tango_DevVarFloatArray fl_arr1;
	fl_arr1.length(2);
	fl_arr1[0] = 1.0;
	fl_arr1[1] = 2.0;
	seq <<= fl_arr1;
	Tango_DevVarFloatArray *fl_arr_ptr;
	seq >>= fl_arr_ptr;

//	delete fl_arr_ptr;
