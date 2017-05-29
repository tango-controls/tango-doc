try
{    
    attributes.add("fe/imacq/2/Image");
    attributes.add("eas/test-api/1/Att_sinus");
    attributes.add("fe/imacq/2/Roi");
}
catch (ConnectionException ce)
{
    System.out.println("Error fetching " + 
		       "attributes" + ce);
}

