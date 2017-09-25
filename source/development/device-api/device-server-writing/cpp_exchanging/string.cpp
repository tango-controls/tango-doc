   Tango_DevString str = CORBA_string_alloc(5);
   strcpy(str,"TANGO");

   Tango_DevString str1 = CORBA_string_dup("Do you want to danse TANGO with me?");

   CORBA_string_free(str);
   CORBA_string_free(str1);
