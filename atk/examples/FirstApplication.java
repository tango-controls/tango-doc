package examples;

import javax.swing.JFrame;
import javax.swing.JMenuItem;

import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import java.awt.BorderLayout;

import fr.esrf.tangoatk.core.AttributeList;
import fr.esrf.tangoatk.core.ConnectionException;
import fr.esrf.tangoatk.core.CommandList;
import fr.esrf.tangoatk.widget.util.ErrorHistory;
import fr.esrf.tangoatk.widget.util.ATKMenuBar;
import fr.esrf.tangoatk.widget.attribute.ScalarListViewer;
import fr.esrf.tangoatk.widget.command.CommandComboViewer;
 

public class FirstApplication extends JFrame
{
    ATKMenuBar         menu;           // So that our application looks
                                       // halfway decent.
    AttributeList      attributes;     // The list that will contain our
                                       // attributes
    CommandList        commands;       // The list that will contain our
                                       // commands
    ErrorHistory       errorHistory;   // A window that displays errors
    ScalarListViewer   scalarViewer;   // A viewer which knows how to
                                       // display a list of scalar attributes.
                                       // If you want to display other types
                                       // than scalars, you'll have to wait
                                       // for the next example.
    CommandComboViewer commandViewer;  // A viewer which knows how to display
                                       // a combobox of commands and execute
                                       // them.
    String             device;         // The name of our device.
    
    public FirstApplication()
    {
         attributes    = new AttributeList();   
         commands      = new CommandList();
         errorHistory  = new ErrorHistory();
         device        = "id14/eh3_mirror/1";
         scalarViewer  = new ScalarListViewer();
         commandViewer = new CommandComboViewer();

         menu          = new ATKMenuBar();

//
// Here we tell the menubar what we want to do when the user
// selects the predefined menuentry `Quit'
// We do this by defining an ActionListener on the fly, thus
// creating what we call an anonymous class.
//

         menu.setQuitHandler(new ActionListener()
         {
                 public void actionPerformed(ActionEvent e)
                 { 
                       System.exit(0);
                 }
         });

//
// The menubar is already set up to know about the errorhistory,
// you just need to tell it which errorhistory to use.
//

          menu.setErrorHistory(errorHistory);

//	 
// A feature of the command and attribute list is that if you
// supply an errorlistener to these lists, they'll add that
// errorlistener to all subsequently created attributes or
// commands. So it is important to do this _before_ you
// start adding attributes or commands.
//

         attributes.addErrorListener(errorHistory);
         commands.addErrorListener(errorHistory);

//
// Sometimes we're out of luck and the device or the attributes
// are not available. In that case a ConnectionException is thrown.
// This is why we add the attributes in a try/catch
//

         try
         {
	     
//
// Another feature of the attribute and command list is that they
// can add wildcard names, currently only `*' is supported.
// When using a wildcard, the lists will add all commands or
// attributes available on the device.
//

             attributes.add(device + "/*");
         }
         catch (ConnectionException ce)
         {
             System.out.println("Error fetching " + 
                                "attributes from " +
                                device + " " + ce);
         }

//
// See the comments for attributelist
//

         try
         {
             commands.add(device + "/*");
         }
         catch (ConnectionException ce)
         {
             System.out.println("Error fetching " +
                                "commands from " +
                                device + " " + ce);
         }

//
// Just to show some of the properties of the scalarviewer.
// The propertyListEditable property decides if the propertylist
// (which is shown when clicking on the button to the right)
// is editable or not.
//

         scalarViewer.setPropertyListEditable(true);

//
// The valueEditable property decides if the value of the attribute
// is to be editable or not.
//

         scalarViewer.setValueEditable(true);

//
// Here we tell the scalarViewer what it's to show. The
// ScalarListViewer loops through the attribute-list and picks out
// the ones which are scalars and show them.
//

         scalarViewer.setModel(attributes);

//
// This is where the CommandComboViewer is told what it's to
// show. It knows how to show and execute most commands.
//

         commandViewer.setModel(commands);

//
// add the menubar to the frame
//

         setJMenuBar(menu);

//
// Make the layout nice.
//

         getContentPane().setLayout(new BorderLayout());
         getContentPane().add(commandViewer, BorderLayout.NORTH);
         getContentPane().add(scalarViewer, BorderLayout.SOUTH);

//
// A third feature of the attributelist is that it knows how
// to refresh its attributes.
//

         attributes.startRefresher();

//
// JFrame stuff to make the thing show.
//

         pack();
         show();
    }

    public static void main(String [] args)
    {
         new FirstApplication();
    }

}
