Multiple C++ Classes Manager
----------------------------

| 

| Since **Pogo-7.2.0** on **Linux, Pogo** allows you to create multiple
  C++ classes server project.
| Use the **tools** menu (or **pogo -multi** shell command) to launch
  the multiple classes GUI
| Then create a new server project.
| The server name could have the same name of one class in project. But
  it is not mandatory.
| |Multi Classes Creation|
| Then you can add several classes by selecting **xmi** files.

+------------------------+----+----------------------+
| |MultiClassesAdding|   |    | |MultiClassesTree|   |
+------------------------+----+----------------------+

| 
| Now, you can generate code.
| You can generate it where a class is defined or in an independent one.
| The 4 generated files are:

-  **VacGaugeServer.multi.xmi :**
-  **MultiClassesFactory.cpp :**
-  **main.cpp :**
-  **Makefile.multi :**

| 

.. |Multi Classes Creation| image:: img/MultiClassesCreation.gif
.. |MultiClassesAdding| image:: img/MultiClassesAdding.gif
.. |MultiClassesTree| image:: img/MultiClassesTree.gif

