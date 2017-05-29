	Tango_DevLong l1,l2;
	l1 = 2;
	CORBA_Any *a_ptr = insert(l1);
	extract(*a_ptr,l2);

	Tango_DevBoolean b1,b2;
	b1 = true;
	CORBA_Any *b_ptr = insert(b1);
	extract(*b_ptr,b2);

	Tango_DevString str1,str2;
	str1 = "I like dancing TANGO";
	CORBA_Any *s_ptr = insert(str1);
	extract(*s_ptr,str2);

	Tango_DevVarFloatArray fl_arr1;
	fl_arr1.length(2);
	fl_arr1[0] = 1.0;
	fl_arr1[1] = 2.0;
	insert(fl_arr1);
	CORBA_Any *seq_ptr = insert(fl_arr1);
	Tango_DevVarFloatArray *fl_arr_ptr;
	extract(*seq_ptr,fl_arr_ptr);
