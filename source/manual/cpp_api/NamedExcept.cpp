catch (Tango::NamedDevFailed &e)
{
   long nb_faulty = e.get_faulty_attr_nb();
   for (long i = 0;i < nb_faulty;i++)
   {
       cout << "Attribute " << e.err_list[i].name << " failed!" << endl;

       for (long j = 0;j < e.err_list[i].err_stack.length();j++)
       {
           cout << "Reason [" << j << "] = " << e.err_list[i].err_stack[j].reason.in();
           cout << "Desc [" << j << "] = " << e.err_list[i].err_stack[j].desc.in();
       }
   }
}
