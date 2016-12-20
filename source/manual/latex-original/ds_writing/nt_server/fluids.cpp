/////////////////////////////////////////////////////////////////////////////
// MyApp initialization

BOOL MyApp::InitInstance()
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
	try
	{
	
                TangoUtil *tg = TangoUtil::init(m_hInstance,m_nCmdShow);

                tg->server_init();

		tg->get_boa()->init_servers();

	}
	catch (bad_alloc)
	{
		MessageBox((HWND)NULL,"Mem alloc failed","InitInstance",MB_ICONSTOP);
		return(FALSE);
	}
	catch (CORBA_Exception)
	{
		MessageBox((HWND)NULL,"Exception CORBA","InitInstance",MB_ICONSTOP);
                return(FALSE);
	}

//
// Your code here
//

}


