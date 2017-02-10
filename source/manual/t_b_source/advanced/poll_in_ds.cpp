void MyClass::read_attr(Tango::Attribute &attr)
{
    ...
    ...
    
    string att_name("SomeAttribute");
    string another_att_name("AnotherAttribute");

    if (is_attribute_polled(att_name) == true)
        stop_poll_attribute(att_name);
    else
        poll_attribute(another_att_name,500); 
    
    ....
    ....
    
}
