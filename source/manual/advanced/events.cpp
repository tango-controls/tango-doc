void MyClass::read_attr(Tango::Attribute &attr)
{
    ...
    ...
    
    
    if (attr_name == "Sinusoide")
    {
        struct timeval tv;
        gettimeofday(&tv, NULL);
        sinusoide = 100 * sin( 2 * 3.14 * frequency * tv.tv_sec);
        attr.set_value(&sinusoide);
	
	if (sinusoide >= 0)              
        {
            vector<string> filterable_names;
            vector<double> filterable_value;
   
            filterable_names.push_back("value");
            filterable_value.push_back((double)sinusoide);
           
            push_event( filterable_names,
                        filterable_value,
                        attr);
			
            attr.set_value(&sinusoide);
	    
        }
      
    }
    
    ....
    ....
    
}
