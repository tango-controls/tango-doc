package StepperMotor;

import org.omg.CORBA.*;
import fr.esrf.Tango.*;
import fr.ersf.TangoDs.*;

public class DevReadPositionCmd extends Command implements TangoConst
{
	public  boolean is_allowed(DeviceImpl dev, Any data_in)
	{
		if (dev.get_state() == DevState.ON)
			return(true);
		else
			return(false);
	}	

}
