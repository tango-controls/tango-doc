package examples;

import fr.esrf.tangoatk.widget.image.*;
import javax.swing.*;
import java.awt.event.*;
import fr.esrf.tangoatk.widget.attribute.ImageControlAdapter;
import fr.esrf.tangoatk.core.INumberImage;
import fr.esrf.tangoatk.core.AttributeList;
import fr.esrf.tangoatk.widget.util.ErrorHistory;
import fr.esrf.tangoatk.widget.util.ATKMenuBar;


public class Image extends JFrame
{

    ImageViewer         viewer;        // The thing that actually shows the
                                       // image

    ImageControlAdapter adapter;       // The object responsible for
                                       // connecting an image-attribute
                                       // with the viewer
  
    INumberImage        image;         // The image attribute
    AttributeList       list;          // The attribute list for storing the
                                       // attribute, which also will be
                                       // refreshing the image-viewer

    IRasterConverter    converter;     // The object responsible for
                                       // converting the double[][] of the
                                       // image-attribute to a BufferedImage
                                       // accepted by the ImageViewer

    ErrorHistory       errorHistory;   // A window that displays errors

    ATKMenuBar         menu;           // So that our application looks
                                       // halfway decent.

    public Image(String attribute) throws Exception
    {

//
// Initialize the objects.
//

         viewer = new ImageViewer();
         adapter = new ImageControlAdapter();
         list = new AttributeList();
         errorHistory = new ErrorHistory();
         menu = new ATKMenuBar();

//
// The GrayscalarColorConverter can convert double[][] to images
// in either grayscale or 256 colors. We want colors.
//

         converter = new GrayscaleColorConverter(GrayscaleColorConverter._256_COLORS);

//
// A feature of the command and attribute list is that if you
// supply an errorlistener to these lists, they'll add that
// errorlistener to all subsequently created attributes or
// commands. So it is important to do this _before_ you
// start adding attributes or commands.
//

         list.addErrorListener(errorHistory);

//
// The menubar is already set up to know about the errorhistory,
// you just need to tell it which errorhistory to use.
//

         menu.setErrorHistory(errorHistory);

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
// Add the image-attribute to the list. One should add some
// error-checking at some point here :)
//

         image = (INumberImage)list.add(attribute);

//
// Connect the attribute with its image-viewer
//

         adapter.setViewer(viewer);
         adapter.setModel(image);

//
// Tell the image-viewer how to convert the double to an image
//

         viewer.setRasterConverter(converter);

//
// Add an amusing image-manipulator
//

         viewer.addImageManipulator(new ConvolveFilter());

//
// Make sure we'll get some refreshing images.
//

         list.startRefresher();

//
// Swing stuff...
//

         setJMenuBar(menu);
         getContentPane().add(viewer);
         pack();
         show();
    }

    public static void main (String[] args)
    {
         try
         {
                  new Image(args[0]);	     
         }
         catch (Exception e)
         {
                  System.out.println("Couldn't create imageviewer: " + e.getMessage());
         }
    }
}
