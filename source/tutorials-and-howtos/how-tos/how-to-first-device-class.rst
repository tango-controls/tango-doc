.. _how_to_write_first_device_class:

How to write your first Device Class
====================================

:audience:`developers`, :lang:`all`

This HowTo explains how to create your first Device Class regardless of the language used.

Prerequisite : Tango Environment.

Start :ref:`Pogo <pogo_manual>` Generator
-----------------------------------------
Now you can create a new Class. Click on |image| and New.

Fill in your Class
------------------
Fill in required informations.
The Device Class identification on the left part and the description on the right.

|image0|

You will see an empty :ref:`Pogo <pogo_manual>` interface.

|image1|

You can add some Properties, Commands and Attributes, by double-clicking on each one.
There are different possible configuraton. You can see more details in :ref:`Pogo <pogo_manual>` description.

|image2|


Generate
--------
Generate your files |image3|
Choose your folder's path and files you want to create. For example, on linux OS with Cpp language, the minimum is XMI File, Code files and Makefile like you can see behind.

|image4|

You can now see :ref:`Pogo <pogo_manual>` 's files in your folder. :ref:`Pogo <pogo_manual>` had create skeleton files with your Properties, Commands and Attributes.

|image5|

Now you have a basic server who's make nothing. You can provide contents or fill it with different needs.

You can have some informations about how to getting properly start :ref:`here <getting_started_as_developer>`

You can have more informations about device server usage :ref:`here <device_api>`.

Compile And Run 
---------------

Now you can compile and Run_ your Class.



.. definitions
   --------------

.. _Run:    http://www.esrf.fr/computing/cs/tango/tango_doc/ds_doc/tango-ds/System/starter/index.html

.. |image| image:: img/PogoFileImage.png   
.. |image0| image:: img/PogoFirstConfiguration.png
.. |image1| image:: img/PogoEmptyImage.png
.. |image2| image:: img/PogoFilled.png
.. |image3| image:: img/PogoGenerateButton.png
.. |image4| image:: img/PogoGenerate.png
.. |image5| image:: img/PogoFilesGenerated.png

