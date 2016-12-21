namespace B
{

class BClass : public A::AClass
{
.....
}

BClass::command_factory()
{
	A::AClass::command_factory();

	command_list.push_back(....);
}

} /* End of B namespace */
