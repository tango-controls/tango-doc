int main(int argc,char *argv[])
{
	if (!AfxWinInit(::GetModuleHandle(NULL),NULL,::GetCommandLine(),0))
	{
		cerr << "Can't initialise MFC !" << endl;
		return -1;
	}

	service serv(argv[0]);

	int ret;
	if ((ret = serv.options(argc,argv)) <= 0)
		return ret;

	serv.run(argc,argv);

	return 0;
}
