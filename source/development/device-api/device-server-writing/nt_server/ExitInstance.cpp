int MyApp::ExitInstance()
{

//
// Your own code
//

        bool del = true;

        try
        {
                TangoUtil *tg = TangoUtil::instance();
        }
        catch(Tango_DevFailed)
        {
                del = false;
        }

        if (del == true)
                delete (TangoUtil::instance());

        return CWinApp::ExitInstance();
}
 
