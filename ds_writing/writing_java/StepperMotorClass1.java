package StepperMotor;

import java.util.*;
import fr.esrf.Tango.*;
import fr.esrf.TangoDs.*;

public class StepperMotorClass extends DeviceClass implements TangoConst
{
	private static StepperMotorClass 	_instance = null;
	
	
	public static StepperMotorClass instance()
	{
		if (_instance == null)
		{
			System.err.println("StepperMotorClass is not initialised !!!");
			System.err.println("Exiting");
			System.exit(-1);
		}
		return _instance;
	}


	public static StepperMotorClass init(String class_name) throws DevFailed
	{
		if (_instance == null)
		{
			_instance = new StepperMotorClass(class_name);
		}
		return _instance;
	}
	
	protected StepperMotorClass(String name) throws DevFailed
	{
		super(name);

		Util.out2.println("Entering StepperMotorClass constructor");
	
		Util.out2.println("Leaving StepperMotorClass constructor");
	}
}
