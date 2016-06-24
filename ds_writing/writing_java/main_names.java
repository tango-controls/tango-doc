package StepperMotor

import java.util.*;
import org.omg.CORBA.*;
import fr.esrf.Tango.*;
import fr.esrf.TangoDs.*;

public class StepperMotor extends DeviceImpl implements TangoConst
{
	public static void main(String[] argv)
	{
		try
		{
		
			Util tg = Util.init(argv,"StepperMotor");
			
			tg.add_class("StepperMotor");
			tg.server_init();
			
			System.out.println("Ready to accept request");

			tg.server_run();
		}
		catch (OutOfMemoryError ex)
		{
			System.err.println("Can't allocate memory !!!!");
			System.err.println("Exiting");
		}
		catch (UserException ex)
		{
			Except.print_exception(ex);
			
			System.err.println("Received a CORBA user exception");
			System.err.println("Exiting");
		}
		catch (SystemException ex)
		{
			Except.print_exception(ex);
			
			System.err.println("Received a CORBA system exception");
			System.err.println("Exiting");
		}
		
		System.exit(-1);		
	
	}	
}
