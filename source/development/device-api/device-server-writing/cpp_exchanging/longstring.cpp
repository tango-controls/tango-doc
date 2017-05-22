   Tango_DevVarLongStringArray my_vl;

   myvl.svalue.length(2);
   myvl.svalue[0] = CORBA_string_dup("Samba");
   myvl.svalue[1] = CORBA_string_dup("Rumba");

   myvl.lvalue.length(1);
   myvl.lvalue[0] = 10;
