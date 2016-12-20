   Tango_DevVarLongArray mylongseq_ptr;
   mylongseq_ptr = new Tango_DevVarLongArray();
   mylongseq_ptr->length(4);

   (*mylongseq_ptr)[0] = 1;
   (*mylongseq_ptr)[1] = 2;
   (*mylongseq_ptr)[2] = 3;
   (*mylongseq_ptr)[3] = 4;

   // (*mylongseq_ptr)[4] = 5;

   long nb_elt = mylongseq_ptr.length();

   mylongseq_ptr->length(5);
   (*mylongseq_ptr)[4] = 5;

   for (int i = 0;i < mylongseq_ptr->length();i++)
   	cout << "Sequence elt " << i + 1 << " = " << (*mylongseq_ptr)[i] << endl;
