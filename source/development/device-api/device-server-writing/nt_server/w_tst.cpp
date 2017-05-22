int APIENTRY WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR     lpCmdLine,
                     int       nCmdShow)
{

//
// Your code
//

        TangoUtil *tg;
	try
	{
                tg = TangoUtil::init(hInstance,nCmdShow);

                tg->server_init();

               	tg->get_boa()->init_servers();
	}
	catch (bad_alloc)
	{
		MessageBox((HWND)NULL,"Mem alloc failed","WinMain",MB_ICONSTOP);
		return(FALSE);
	}
	catch (CORBA_Exception &e)
	{
		MessageBox((HWND)NULL,"Exception CORBA","WinMain",MB_ICONSTOP);
                return(FALSE);
	}

	if (!InitInstance (hInstance, nCmdShow)) 
	{
		return FALSE;
	}
	hAccelTable = LoadAccelerators(hInstance, (LPCTSTR)IDC_W_TST);

	while (GetMessage(&msg, NULL, 0, 0)) 
	{
		if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg)) 
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	}

        delete tg;

	return msg.wParam;
}


