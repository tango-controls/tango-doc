void StepperMotor::init_device()
{
	cout << "StepperMotor::StepperMotor() create motor " << dev_name << endl;

	long i;

	for (i=0; i< AGSM_MAX_MOTORS; i++)
	{
        	axis[i] = 0;
        	position[i] = 0;
        	direction[i] = 0;
	}

	if (dev_name == "id04/motor/02")
		register_signal(SIGALRM);
}

StepperMotor::~StepperMotor()
{
	unregister_signal(SIGALRM);
}

void StepperMotor::signal_handler(long signo)
{
	cout2 << "Inside signal handler for signal " << signo << endl;

//	Do what you want here

}
