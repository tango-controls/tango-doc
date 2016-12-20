   Tango_DevVarStringArray mystrseq();
   mystrseq.length(4);

   mystrseq[0] = CORBA_string_dup("Rock and Roll");
   mystrseq[1] = CORBA_string_dup("Bossa Nova");
   mystrseq[2] = CORBA_string_dup();
   mystrseq[3] = CORBA_string_dup("Tango");

   CORBA_Long nb_elt = mystrseq.length();

   for (int i = 0;i < mystrseq.length();i++)
   	cout << "Sequence elt " << i + 1 << " = " << mystrseq[i] << endl;
