+----------+---------------------------------------+
| |Logo|   | Tango Core Classes Reference  9.2.5   |
+----------+---------------------------------------+

-  `Main Page <../../index.html>`__
-  `Related Pages <../../pages.html>`__
-  `Modules <../../modules.html>`__
-  `Namespaces <../../namespaces.html>`__
-  `Classes <../../annotated.html>`__
-  `Files <../../files.html>`__

-  `Class List <../../annotated.html>`__
-  `Class Hierarchy <../../inherits.html>`__
-  `Class Members <../../functions.html>`__

`List of all
members <../../d8/d83/classTango_1_1TimedCmdData-members.html>`__

Tango::TimedCmdData< T > Class Template Reference

`Server classes <../../da/d64/group__Server.html>`__

This class is used to store one element of a command history stack.
`More... <../../df/db1/classTango_1_1TimedCmdData.html#details>`__

Public Member Functions
-----------------------

Constructors

Miscellaneous constructors

 

`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html#a52aa3bee7afb6e0947d805e498ee08ae>`__
(T \*p\_data, time\_t when)

 

| Create a new
`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__ object.
`More... <#a52aa3bee7afb6e0947d805e498ee08ae>`__

 

 

`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html#a641bf7e089fd36a70d09cebef4d91c79>`__
(T \*p\_data, bool rel, time\_t when)

 

| Create a new
`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__ object
with memory management. `More... <#a641bf7e089fd36a70d09cebef4d91c79>`__

 

 

`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html#ab61561536584807b6771cc7ab6db76e2>`__
(T \*p\_data, struct timeval when)

 

| Create a new
`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__ object.
`More... <#ab61561536584807b6771cc7ab6db76e2>`__

 

 

`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html#af7d4d705ed242a8dca60443987926e28>`__
(T \*p\_data, bool rel, struct timeval when)

 

| Create a new
`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__ object
with memory management. `More... <#af7d4d705ed242a8dca60443987926e28>`__

 

 

`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html#a8cc1733169352938edf8432bc4551222>`__
(DevErrorList errs, time\_t when)

 

| Create a new
`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__ object
for errors. `More... <#a8cc1733169352938edf8432bc4551222>`__

 

 

`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html#a18999aecdf64d96fa704b7549c534dfe>`__
(DevErrorList errs, timeval when)

 

| Create a new
`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__ object
for errors. `More... <#a18999aecdf64d96fa704b7549c534dfe>`__

 

Detailed Description
--------------------

template<typename T>
 class Tango::TimedCmdData< T >
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

This class is used to store one element of a command history stack.

$Author$ $Revision$

Constructor & Destructor Documentation
--------------------------------------

template<typename T>

+----------------------------------------------------------------------------------------------------------------------------------------------------+-----+------------+--------------+
| `Tango::TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__\ < T >::\ `TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__   | (   | T \*       | *p\_data*,   |
+----------------------------------------------------------------------------------------------------------------------------------------------------+-----+------------+--------------+
|                                                                                                                                                    |     | time\_t    | *when*       |
+----------------------------------------------------------------------------------------------------------------------------------------------------+-----+------------+--------------+
|                                                                                                                                                    | )   |            |              |
+----------------------------------------------------------------------------------------------------------------------------------------------------+-----+------------+--------------+

Create a new
`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__ object.

The memory pointed to by the *p\_data* parameter will not be freed

Parameters
    +-----------+--------------------------------------+
    | p\_data   | Pointer to the command result data   |
    +-----------+--------------------------------------+
    | when      | The date                             |
    +-----------+--------------------------------------+

template<typename T>

+----------------------------------------------------------------------------------------------------------------------------------------------------+-----+------------+--------------+
| `Tango::TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__\ < T >::\ `TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__   | (   | T \*       | *p\_data*,   |
+----------------------------------------------------------------------------------------------------------------------------------------------------+-----+------------+--------------+
|                                                                                                                                                    |     | bool       | *rel*,       |
+----------------------------------------------------------------------------------------------------------------------------------------------------+-----+------------+--------------+
|                                                                                                                                                    |     | time\_t    | *when*       |
+----------------------------------------------------------------------------------------------------------------------------------------------------+-----+------------+--------------+
|                                                                                                                                                    | )   |            |              |
+----------------------------------------------------------------------------------------------------------------------------------------------------+-----+------------+--------------+

Create a new
`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__ object
with memory management.

Parameters
    +-----------+---------------------------------------------------------------------------------+
    | p\_data   | Pointer to the command result data                                              |
    +-----------+---------------------------------------------------------------------------------+
    | rel       | Set to true if the memory pointed to by the *p\_data* parameter must be freed   |
    +-----------+---------------------------------------------------------------------------------+
    | when      | The date                                                                        |
    +-----------+---------------------------------------------------------------------------------+

template<typename T>

+----------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+--------------+
| `Tango::TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__\ < T >::\ `TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__   | (   | T \*              | *p\_data*,   |
+----------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+--------------+
|                                                                                                                                                    |     | struct timeval    | *when*       |
+----------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+--------------+
|                                                                                                                                                    | )   |                   |              |
+----------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+--------------+

Create a new
`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__ object.

The memory pointed to by the *p\_data* parameter will not be freed

Parameters
    +-----------+--------------------------------------+
    | p\_data   | Pointer to the command result data   |
    +-----------+--------------------------------------+
    | when      | The date                             |
    +-----------+--------------------------------------+

template<typename T>

+----------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+--------------+
| `Tango::TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__\ < T >::\ `TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__   | (   | T \*              | *p\_data*,   |
+----------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+--------------+
|                                                                                                                                                    |     | bool              | *rel*,       |
+----------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+--------------+
|                                                                                                                                                    |     | struct timeval    | *when*       |
+----------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+--------------+
|                                                                                                                                                    | )   |                   |              |
+----------------------------------------------------------------------------------------------------------------------------------------------------+-----+-------------------+--------------+

Create a new
`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__ object
with memory management.

Parameters
    +-----------+---------------------------------------------------------------------------------+
    | p\_data   | Pointer to the command result data                                              |
    +-----------+---------------------------------------------------------------------------------+
    | rel       | Set to true if the memory pointed to by the *p\_data* parameter must be freed   |
    +-----------+---------------------------------------------------------------------------------+
    | when      | The date                                                                        |
    +-----------+---------------------------------------------------------------------------------+

template<typename T>

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----+-----+-----------------+------ |                                      |
| -----+                               |                                      |
| | `Tango::TimedCmdData <../../df/db1 |                                      |
| /classTango_1_1TimedCmdData.html>`__ |                                      |
| \ < T >::\ `TimedCmdData <../../df/d |                                      |
| b1/classTango_1_1TimedCmdData.html>` |                                      |
| __   | (   | DevErrorList    | *errs |                                      |
| *,   |                               |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----+-----+-----------------+------ |                                      |
| -----+                               |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                      |                                      |
|                                      |                                      |
|      |     | time\_t         | *when |                                      |
| *    |                               |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----+-----+-----------------+------ |                                      |
| -----+                               |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                      |                                      |
|                                      |                                      |
|      | )   |                 |       |                                      |
|      |                               |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----+-----+-----------------+------ |                                      |
| -----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Create a new
`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__ object
for errors.

The created
`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__ is used
to store command errors in the command history stack

Parameters
    +--------+-------------------+
    | errs   | The error stack   |
    +--------+-------------------+
    | when   | The date          |
    +--------+-------------------+

template<typename T>

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----+-----+-----------------+------ |                                      |
| -----+                               |                                      |
| | `Tango::TimedCmdData <../../df/db1 |                                      |
| /classTango_1_1TimedCmdData.html>`__ |                                      |
| \ < T >::\ `TimedCmdData <../../df/d |                                      |
| b1/classTango_1_1TimedCmdData.html>` |                                      |
| __   | (   | DevErrorList    | *errs |                                      |
| *,   |                               |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----+-----+-----------------+------ |                                      |
| -----+                               |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                      |                                      |
|                                      |                                      |
|      |     | timeval         | *when |                                      |
| *    |                               |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----+-----+-----------------+------ |                                      |
| -----+                               |                                      |
| |                                    |                                      |
|                                      |                                      |
|                                      |                                      |
|                                      |                                      |
|      | )   |                 |       |                                      |
|      |                               |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----+-----+-----------------+------ |                                      |
| -----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Create a new
`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__ object
for errors.

The created
`TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__ is used
to store command errors in the command history stack

Parameters
    +--------+-------------------+
    | errs   | The error stack   |
    +--------+-------------------+
    | when   | The date          |
    +--------+-------------------+

--------------

The documentation for this class was generated from the following file:

-  `pollext.h <../../db/d17/pollext_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `TimedCmdData <../../df/db1/classTango_1_1TimedCmdData.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
