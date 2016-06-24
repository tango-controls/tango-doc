
	nb_args = 3;
	args = new char*[3];
	args[0] = "StepperMotor";
	args[1] = "et";
	args[2] = "-v";
	TangoUtil *tg = TangoUtil::init(nb_args,args);

	tg->server_init();

	tg->get_boa()->init_servers();

