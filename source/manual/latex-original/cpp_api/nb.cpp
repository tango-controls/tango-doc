DeviceAttribute da;
vector<short> attr_data;

try
{
   da = device->read_attribute("Attr");
   da >> attr_data;
}
catch (DevFailed &e)
{
   ....
}

long read = da.get_nb_read();
long written = da.get_nb_written();

for (long i = 0;i < read;i++)
   cout << "Read value " << i+1 << " = " << attr_data[i] << endl;

for (long j = 0; j < written;j++)
   cout << "Last written value " << j+1 << " = " << attr_data[j + read] << endl;
