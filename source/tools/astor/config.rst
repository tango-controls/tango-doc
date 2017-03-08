Astor Configuration
-------------------

Astor can be configured using the following window.
Click on :menuselection:`File --> Ctrl System Preferences` menu to open

+--------------------------------------+----------------------------------------+
| |image0|                             | -  `Define control system              |
|                                      |    name <name>`_                       |
|                                      | -  `Define default window              |
|                                      |    sizes <sizes>`_                     |
|                                      | -  `Additional java                    |
|                                      |    tools. <add_tools>`_                |
|                                      | -  `Additional html                    |
|                                      |    pages. <html_pages>`_               |
|                                      | -  `Multi Tango                        |
|                                      |    Host. <known_hosts>`_               |
|                                      | _                                    |
|                                      | -  `Host remote loggin               |
|                                      |    command. <config.html#remote_logg |
|                                      | in>`__                               |
|                                      | -  `Host remote loggin               |
|                                      |    user. <config.html#remote_user>`_ |
|                                      | _                                    |
|                                      | -  `Jive in RAD\_ONLY                |
|                                      |    mode. <config.html#jive_mode>`__  |
|                                      | -  `Starter starts servers at        |
|                                      |    startup <config.html#starter_star |
|                                      | t>`__                                |
+--------------------------------------+--------------------------------------+

| 
| **NOTE**: To disable the **Preference** menu, start Astor with
  **-DNO\_PREF=true**.
| 

.. _`name`:

Control system name
~~~~~~~~~~~~~~~~~~~

This name will be displayed on top of Astor main window.

It could be useful when user has to manage several control systems.

.. _`sizes`:

Default window sizes
~~~~~~~~~~~~~~~~~~~~

:guilabel:`Hosts tree Width/Height` defines the preferred size for the tree object in main window.

:guilabel:`Host window Width/Height` defines default maximum size for host window.

If the number of hosts needs a bigger window, scroll bars will be added.


Last Collections
~~~~~~~~~~~~~~~~

Hosts can be distributed in families.

In the tree, the families are sorted by alphabetic order.

The property LastCollections give the possibility put collections (families) at the end of the tree.

It could be useful to put at the end of the tree, families like Not Critical, In Test, ...

.. _`html_pages`:

Additional html pages
~~~~~~~~~~~~~~~~~~~~~

The property *HtmlHelps* give the possibility to add specific html pages.
This is a string array property.

-  The first line is the message displayed in help menu.
-  The second one is the URL address for the specified page.

The following example add a link to the Tango device servers pages:

  |image1|

.. _`add_tools`:

Additional java Tools
~~~~~~~~~~~~~~~~~~~~~

The property *Tools* give the possibility to add java class to tools
menu.
These additional tools could be specific for one controle system
This is a string array property.

One tool (java class) is define by two strings:

-  The first line is the message displayed in tools menu.
-  The second one is the class (and package) to be instancied.


The following example add 3 java tools used on ESRF machine control
system for TACO HDB:

  |image2|

.. topic:: Remarks

    -  The tools java classes need to have a constructor with a *JFrame*
       parameter as parent.
    -  It need also to not exit if it has been instancied from a parent
       application.
    -  The tools class or jar file needs to be found in :envvar:`$CLASSPATH` of
       :program:`Astor` startup.

.. _`known_hosts`:

KnownTangoHosts
~~~~~~~~~~~~~~~

This property give a list of :envvar:`TANGO_HOST` to be controlled by Astor.
The :envvar:`TANGO_HOST` can be change by typing a new name but the specified list will be available in a combo box.

RloginCmd
~~~~~~~~~

| 
| 

**RloginUser:**

| 
| 

**Jive in READ\_ONLY mode:**

| 
| 

**Starter starts servers at startup:**

| 

.. |image0| image:: img/preferences.jpg
.. |image1| image:: img/html_pages.jpg
.. |image2| image:: img/add-tools.jpg

