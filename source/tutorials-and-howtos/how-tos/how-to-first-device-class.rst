.. _how_to_write_first_device_class:

How to write your first Device Class
====================================

:audience:`developers`, :lang:`all`

This HowTo explains how to create your first Device Class regardless of the language used.

Prerequisite : Tango Environment.

Start Pogo_ Generator
----------------------
Now you can create a new Class. Click on |image| and New.

Fill in  your Class
---------------
Fill in required informations.
The Device Class identification on the left part and the description on the right.

|image0|

You will see an empty Pogo_ interface.

|image1|

You can add some Properties, Commands and Attributes, by double-clicking on each one.
There are different possible configuraton. You can see more details in Pogo_ description.

|image2|


Generate
--------
Generate your files |image3|
Choose your folder's path and files you want to create. For example, on linux OS with Cpp language, the minimum is XMI File, Code files and Makefile like you can see behind.

|image4|

You can now see Pogo_'s files in your folder. Pogo_ had create skeleton files with your Properties, Commands and Attributes.

|image5|

Compile And Run 
---------------

Now you can compile and Run_ your Class.

.. definitions
   --------------

.. _Run:    http://www.esrf.fr/computing/cs/tango/tango_doc/ds_doc/tango-ds/System/starter/index.html
.. _Pogo:   https://tango-controls.readthedocs.io/en/latest/tools-and-extensions/pogo/index.html
   
.. |image| image:: img/PogoFileImage.png   
.. |image0| image:: img/PogoFirstConfiguration.png
.. |image1| image:: img/PogoEmptyImage.png
.. |image2| image:: img/PogoFilled.png
.. |image3| image:: img/PogoGenerateButton.png
.. |image4| image:: img/PogoGenerate.png
.. |image5| image:: img/PogoFilesGenerated.png

