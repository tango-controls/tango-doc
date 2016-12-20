namespace B
{

class B : public A:A
{
	.....
};

B::B(Tango::DeviceClass *cl,const char *s):A::A(cl,s)
{
	....
	init_device();
}

void B::init_device()
{
	....
}

} /* End of B namespace */
