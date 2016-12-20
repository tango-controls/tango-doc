BOOL FluidsApp::InitInstance()
{
	AfxEnableControlContainer();

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	//  of your final executable, you should remove from the following
	//  the specific initialization routines you do not need.

#ifdef _AFXDLL
	Enable3dControls();			// Call this when using MFC in a shared DLL
#else
	Enable3dControlsStatic();	// Call this when linking to MFC statically
#endif
	Tango::Util *tg;
	try
	{
	
		tg = Tango::Util::init(m_hInstance,m_nCmdShow);

                tg->server_init(true);

		tg->server_run();

	}
	catch (bad_alloc)
	{
		MessageBox((HWND)NULL,"Memory error","Command line",MB_ICONSTOP);
                return(FALSE);
	}
	catch (Tango::DevFailed &e)
	{
		MessageBox((HWND)NULL,,e.errors[0].desc.in(),"Command line",MB_ICONSTOP);
		return(FALSE);
	}
	catch (CORBA::Exception &)
	{
		MessageBox((HWND)NULL,"Exception CORBA","Command line",MB_ICONSTOP);
                return(FALSE);
	}

	m_pMainWnd = new CWnd;
	m_pMainWnd->Attach(tg->get_ds_main_window());

        return TRUE;
}
