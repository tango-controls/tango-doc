
void StepperMotorClass::command_factory()
{
	command_list.push_back(new DevReadPositionCmd("DevReadPosition",
						      Tango::DEV_LONG,
						      Tango::DEV_LONG,
						      "Motor number (0-7)",
						      "Motor position"));
						      
	command_list.push_back(
	    new TemplCommandInOut<Tango::DevLong,Tango::DevLong>
		((const char *)"DevReadDirection",
	         static_cast<Tango::Lg_CmdMethPtr_Lg>
			(&StepperMotor::dev_read_direction),
	         static_cast<Tango::StateMethPtr>
			(&StepperMotor::direct_cmd_allowed))
			      );
}

