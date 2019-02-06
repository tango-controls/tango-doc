.. Definitions
.. ------------

.. _TANGO:      http://www.tango-controls.org/
.. _EMF:        http://www.eclipse.org/
.. _XText:      http://www.eclipse.org/Xtext
.. XTend:       http://www.eclipse.org/Xtend

Introduction
===============

:audience:`developers`, :lang:`c++, java, python`

* Pogo is the TANGO_ code generator written in Java swing.
* This graphical interface allows to define a TANGO_ class model.
* This class model will be saved in a **.xmi** file.
	
* From this TANGO_ class model Pogo is able to generate:
    * a device server in C++, Java or Python.
    * An *html* documentation based on information entered during class model creation.
	

* The code generation part is based on EMF_ (Eclipse Model Framework) associated with  Xtext_ and Xtend_  classes.

* Requirement: This tool needs java 1.7 or higher to be able to run.

* Source:

        project: https://github.com/tango-controls/pogo

        download: https://bintray.com/tango-controls/maven/Pogo/_latestVersion
