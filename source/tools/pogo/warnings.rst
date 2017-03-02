Warnings
--------

| 

+--------------------------------------+--------------------------------------+
| **xmi file**                         | this file is the project itself, it  |
|                                      | will be loaded when you re-open your |
|                                      | project with Pogo.                   |
|                                      | **Do NOT forget to SAVE and COMMIT   |
|                                      | IT !!!**                             |
+--------------------------------------+--------------------------------------+
| **Pogo-6 Compatibility**             | -  argout declaration could be done  |
|                                      |    twice (one by generator, one by   |
|                                      |    importing code).                  |
|                                      | -  For writable attribute, your old  |
|                                      |    global variable does not exist    |
|                                      |    any more                          |
|                                      |    (it is not necessary to be global |
|                                      |    in 99% of cases).                 |
|                                      |    It now local and named :          |
|                                      |    **w\_val**.                       |
|                                      | -  In case of inheritance, inherited |
|                                      |    class must be converted before.   |
+--------------------------------------+--------------------------------------+
