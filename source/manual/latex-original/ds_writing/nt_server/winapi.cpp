int APIENTRY WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR     lpCmdLine,
                     int       nCmdShow)
{
	MSG msg;
	Tango::Util *tg;

	try
	{
		tg = Tango::Util::init(hInstance,nCmdShow);

		string txt;
		txt = "Blabla first line\n";
		txt = txt + "Blabla second line\n";
		txt = txt + "Blabla third line\n";
		tg->set_main_window_text(txt);
		tg->set_server_version("2.2");

                tg->server_init(true);

		tg->server_run();

	}
	catch (bad_alloc)
	{
		MessageBox((HWND)NULL,"Memory error","Command line",MB_ICONSTOP);
		return (FALSE);
	}
	catch (Tango::DevFailed &e)
	{
		MessageBox((HWND)NULL,e.errors[0].desc.in(),"Command line",MB_ICONSTOP);
		return (FALSE);
	}
	catch (CORBA::Exception &)
	{
		MessageBox((HWND)NULL,"Exception CORBA","Command line",MB_ICONSTOP);
                return(FALSE);
	}

	while (GetMessage(&msg, NULL, 0, 0)) 
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

        delete tg;

	return msg.wParam;
}
