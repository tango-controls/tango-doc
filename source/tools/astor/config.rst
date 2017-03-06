Astor Configuration
-------------------

| 

| Astor can be configured using the following window.
| Click on **File/Ctrl System Preferences** menu to open

+--------------------------------------+--------------------------------------+
| |image0|                             | -  `Define control system            |
|                                      |    name <config.html#name>`__        |
|                                      | -  `Define default window            |
|                                      |    sizes <config.html#sizes>`__      |
|                                      | -  `Additional java                  |
|                                      |    tools. <config.html#add_tools>`__ |
|                                      | -  `Additional html                  |
|                                      |    pages. <config.html#html_pages>`_ |
|                                      | _                                    |
|                                      | -  `Multi Tango                      |
|                                      |    Host. <config.html#known_hosts>`_ |
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

**Control system name :**

| 
| 

**Default window sizes :**

| 
| 

**Last Collections :**

| 
| 

**Additional html pages :**

| The property *HtmlHelps* give the possibility to add specific html
  pages.
| This is a string array property.

-  The first line is the message displayed in help menu.
-  The second one is the URL address for the specified page.

| 
| The following example add a link to the Tango device servers pages:
| |image1|

| 
| 

**Additional java Tools:**

| The property *Tools* give the possibility to add java class to tools
  menu.
| These additional tools could be specific for one controle system
| This is a string array property.
| One tool (java class) is define by two strings:

-  The first line is the message displayed in tools menu.
-  The second one is the class (and package) to be instancied.

| 
| The following example add 3 java tools used on ESRF machine control
  system for TACO HDB:
| |image2|
| **Remarks:**

-  The tools java classes need to have a constructor with a *JFrame*
   parameter as parent.
-  It need also to not exit if it has been instancied from a parent
   application.
-  The tools class or jar file needs to be found in *$CLASSPATH* of
   **Astor** startup.

| 
| 

**KnownTangoHosts:**

| 
| 

**RloginCmd:**

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

