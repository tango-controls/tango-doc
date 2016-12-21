public class myDevice extends DeviceImpl implements TangoConst
{
   ...
	
   public void init_device()
   {

// A Debug log

      get_logger().debug("Initializing device " + get_name());

      try
      {
// Initialization code
         String p = get_property("startup property");
         if (p == null)
         {
            get_logger().warn("No startup property defined for " + get_name());
            ...
         }
      }
      catch (Exception e)
      {
// An error log

         get_logger().error("unknown exception caught");
      }
   }
   ...
}
