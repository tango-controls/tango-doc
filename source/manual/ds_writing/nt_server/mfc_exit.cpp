int FluidsApp::ExitInstance()
{
        bool del = true;

        try
        {
		Tango::Util *tg = Tango::Util::instance();
        }
        catch(Tango::DevFailed)
        {
                del = false;
        }

        if (del == true)
                delete (Tango::Util::instance());

        return CWinApp::ExitInstance();
}
