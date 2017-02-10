class MyCallBack: Tango::CallBack
{
public:
	MyCallback(double d):data(d) {};

	virtual void cmd_ended(Tango::CmdDoneEvent *);

private:
	double data;
};

void MyCallBack::cmd_ended(Tango CmdDoneEvent *cmd)
{
	if (cmd->err == true)
		Tango::Except::print_error_stack(cmd->errors);
	else
	{
		short cmd_result;
		cmd->argout >> cmd_result;

		cout << "Command result = " << cmd_result << endl;
		cout << "Callback personal data = " << data << endl;
	}
}

int main(int argc, char *argv[])
{
	....
	....	
	Tango::DeviceProxy dev("...");
	double my_data = ...;
	MyCallBack cb(my_data);


	dev.command_inout_asynch("MyCmd",cb);
	...
	...
	...

	dev.get_asynch_replies();
	...
	...
}
