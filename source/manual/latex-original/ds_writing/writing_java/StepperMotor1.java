package StepperMotor;

import java.util.*;
import org.omg.CORBA.*;
import fr.esrf.Tango.*;
import fr.esrf.TangoDs.*;

public class StepperMotor extends DeviceImpl implements TangoConst
{
	protected final int SM_MAX_MOTORS = 8;
	
	protected int[] 		axis = new int[SM_MAX_MOTORS];
	protected int[]			position = new int[SM_MAX_MOTORS];
	protected int[] 		direction = new int[SM_MAX_MOTORS];	
	protected int[]			state = new int[SM_MAX_MOTORS];
	
	protected int[]			attr_Direction_read = new int[1];
	protected int[]			attr_Position_read = new int[1];
	protected int			attr_SetPosition_write;
		

	StepperMotor(DeviceClass cl,String s,String desc,
		     DevState state,String status) throws DevFailed
	{
		super(cl,s,desc,state,status);
		init_device();
	}

	public void init_device()
	{
		System.out.println("StepperMotor() create motor " + dev_name);

		int i;

		for (i=0; i< SM_MAX_MOTORS; i++)
		{
        		axis[i] = 0;
        		position[i] = 0;
        		direction[i] = 0;
        		state[i] = 0;
		}

	}
}
