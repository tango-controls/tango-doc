//+============================================================================
//
// file :               StepperMotor.java
//
// description :        java source code for the StepperMotor class. 
//			and its commands. This class is derived from DeviceImpl
//			class. It represents the CORBA servant obbject which
//			will be accessed from the network. All commands which
//			can be executed on the StepperMotor are implemented
//			in this file.
//
// project :            TANGO
//
// author(s) :          E.Taurel
//
// $Revision: 11075 $
//
// $Log$
// Revision 1.2  2000/02/04 09:04:12  taurel
// Just update revision level
//
// Revision 1.1.1.1  2000/02/04 09:00:55  taurel
// Imported sources
//
//
// copyleft :           European Synchrotron Radiation Facility
//                      BP 220, Grenoble 38043
//                      FRANCE
//
//-============================================================================

import java.util.*;
import org.omg.CORBA.*;
import Tango.*;
import TangoDs.*;

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
		
//+----------------------------------------------------------------------------
//
// method : 		StepperMotor(string &s)
// 
// description : 	constructors for simulated stepper motor
//
// in :			string s - motor name 
//
//-----------------------------------------------------------------------------

	StepperMotor(DeviceClass cl,String s,String desc,
		     DevState state,String status) throws DevFailed
	{
		super(cl,s,desc,state,status);
		init_device();
	}

	public void init_device()
	{
		System.out.println("StepperMotor() create motor " + dev_name);

//	
// Initialise variables to default values
//

		int i;

		for (i=0; i< SM_MAX_MOTORS; i++)
		{
        		axis[i] = 0;
        		position[i] = 0;
        		direction[i] = 0;
        		state[i] = 0;
		}

	}

//+----------------------------------------------------------------------------
//
// method : 		dev_read_position(int axis)
// 
// description : 	command to read the position of an axis
//
// in :			long axis - axis to read
//
// out :		position returned
//
//-----------------------------------------------------------------------------

	int dev_read_position(int axis) throws DevFailed
	{

		if (axis < 0 || axis > SM_MAX_MOTORS)
		{
			TangoUtil.out1.println("Steppermotor.dev_read_position(): axis out of range !");
		
//		
// throw an exception to client
//

			StringBuffer o = new StringBuffer("Axis number ");
			o.append(axis);
			o.append(" out of range");
		
			TangoUtil.throw_exception(new String(o),"StepperMotor.dev_read_position()");
		}

		return position[axis];
	}

//+----------------------------------------------------------------------------
//
// method : 		dev_read_direction(int axis)
// 
// description : 	command to read the direction of an axis
//
// in :			long axis - axis to read
//
// out :		direction returned
//
//-----------------------------------------------------------------------------

	public int dev_read_direction(int axis) throws DevFailed
	{

		if (axis < 0 || axis > SM_MAX_MOTORS)
		{
			TangoUtil.out1.println("Steppermotor.dev_read_direction(): axis out of range !");
		
//		
// throw an exception to client
//

			StringBuffer o = new StringBuffer("Axis number ");
			o.append(axis);
			o.append(" out of range");
		
			TangoUtil.throw_exception(new String(o),"StepperMotor.dev_read_direction()");
		}

		return direction[axis];
	}
	
	public boolean direct_cmd_allowed(Any data_in)
	{
		TangoUtil.out2.println("In StepperMotor::direct_cmd_allowed method");
	
		return true;
	}
	
//+----------------------------------------------------------------------------
//
// method : 		always_executed_hook()
// 
// description : 	A method always executed before any command
//
//-----------------------------------------------------------------------------

	public void always_executed_hook()
	{
		TangoUtil.out2.println("In always_executed_hook method");	
	}


//+----------------------------------------------------------------------------
//
// method : 		write_attr_hardware()
// 
// description : 	method called by the write_attributes CORBA operation to
//			write device hardware
//
// in :			attr_list : vector of index in the attribute vector
//			of attribute to be written
//
//-----------------------------------------------------------------------------

	public void write_attr_hardware(Vector attr_list)
	{
		TangoUtil.out2.println("In write_attr_hardware for "+attr_list.size()+" attribute(s)");
	
		for (int i = 0;i < attr_list.size();i++)
		{
			WAttribute att = dev_attr.get_w_attr_by_ind(((Integer)(attr_list.elementAt(i))).intValue());
			String att_name = att.get_name();

			if (att_name.equals("SetPosition") == true)
			{
				attr_SetPosition_write = att.get_lg_write_value();
				TangoUtil.out2.println("Attribute SetPosition value = "+attr_SetPosition_write);
				position[0] = attr_SetPosition_write;
			}
		}
	}


//+----------------------------------------------------------------------------
//
// method : 		read_attr_hardware()
// 
// description : 	method called by the read_attributes CORBA operation to
//			read device hardware
//
// in :			attr_list : vector of index in the attribute vector
//			of attribute to be read
//
//-----------------------------------------------------------------------------
			
	public void read_attr_hardware(Vector attr_list)
	{
		TangoUtil.out2.println("In read_attr_hardware for "+attr_list.size()+" attribute(s)");
		for (int i = 0;i< attr_list.size();i++)
		{
			int ind = ((Integer)(attr_list.elementAt(i))).intValue();
			String attr_name = dev_attr.get_attr_by_ind(ind).get_name();
		
			if (attr_name == "Position")
			{
				attr_Position_read[0] = position[0];
			}
			else if (attr_name == "Direction")
			{
				attr_Direction_read[0] = direction[0];
			}
		}	
	}

//+----------------------------------------------------------------------------
//
// method : 		read_attr()
// 
// description : 	method called by the read_attributes CORBA operation to
//			set internal attribute value
//
// in :			attr : reference to the Attribute object
//
//-----------------------------------------------------------------------------

	public void read_attr(Attribute attr) throws DevFailed
	{
		String attr_name = attr.get_name();
		TangoUtil.out2.println("In read_attr for attribute "+attr_name);
		if (attr_name.equals("Position") == true)
		{
			attr.set_value(attr_Position_read);
		}
		else if (attr_name.equals("Direction") == true)
		{
			attr.set_value(attr_Direction_read);
		}
	}	
		
//+----------------------------------------------------------------------------
//
// method : 		state_cmd()
// 
// description : 	command to read the device state
//
// out :		device state
//
//-----------------------------------------------------------------------------

	public DevState state_cmd() throws DevFailed
	{

		TangoUtil.out2.println("In StepperMotor state command");
	
		return super.state_cmd();
	}

//+----------------------------------------------------------------------------
//
// method : 		status_cmd()
// 
// description : 	command to read the device status
//
// out :		device status
//
//-----------------------------------------------------------------------------

	public String status_cmd() throws DevFailed
	{

		TangoUtil.out2.println("In StepperMotor status command");
		return super.status_cmd();
	}
	
	
	
	public static void main(String[] argv)
	{
		try
		{
		
			TangoUtil tg = TangoUtil.init(argv,"StepperMotor");
			
			tg.server_init();
			
			System.out.println("Ready to accept request");

			tg.get_boa().impl_is_ready(null);
		}
		catch (OutOfMemoryError ex)
		{
			System.err.println("Can't allocate memory !!!!");
			System.err.println("Exiting");
		}
		catch (UserException ex)
		{
			TangoUtil.print_exception(ex);
			
			System.err.println("Received a CORBA user exception");
			System.err.println("Exiting");
		}
		catch (SystemException ex)
		{
			TangoUtil.print_exception(ex);
			
			System.err.println("Received a CORBA system exception");
			System.err.println("Exiting");
		}
		
		System.exit(-1);		
	
	}	
}
