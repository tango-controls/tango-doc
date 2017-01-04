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

`Public Member Functions <#pub-methods>`__ \| `Protected Member
Functions <#pro-methods>`__ \| `Protected Attributes <#pro-attribs>`__
\| `List of all
members <../../dd/d28/classlog4tango_1_1AppenderAttachable-members.html>`__

log4tango::AppenderAttachable Class Reference

``#include "AppenderAttachable.hh"``

Inheritance diagram for log4tango::AppenderAttachable:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

 

`AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a5b2a99851f2aa46162c9d51433887e18>`__
()

 

| Constructor. `More... <#a5b2a99851f2aa46162c9d51433887e18>`__

 

virtual 

`~AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a5af097d444408db567e0c2202b10a158>`__
()

 

| Destructor. `More... <#a5af097d444408db567e0c2202b10a158>`__

 

void 

`add\_appender <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a04b4e410672579c6d8f698872f26866d>`__
(`Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__ \*appender)

 

| Adds an `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__.
`More... <#a04b4e410672579c6d8f698872f26866d>`__

 

`AppenderList <../../d4/db0/namespacelog4tango.html#a8fa9a70e20bab57912e721dd4d7dc917>`__ 

`get\_all\_appenders <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#ac09cfee8ed24912f751c1b46502b91c3>`__
(void)

 

| Get all previously added appenders as a vector.
`More... <#ac09cfee8ed24912f751c1b46502b91c3>`__

 

`Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__ \* 

`get\_appender <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#aef280962681b6de83bf759dee678f9ad>`__
(const std::string &name)

 

| Get an appender by name.
`More... <#aef280962681b6de83bf759dee678f9ad>`__

 

bool 

`is\_attached <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#ad453ee78f746f781cdac768c57b8bd74>`__
(`Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__ \*appender)

 

| Returns true if the specified appender is in list of attached
appanders, false otherwise.
`More... <#ad453ee78f746f781cdac768c57b8bd74>`__

 

void 

`remove\_all\_appenders <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a53e072db4ea8496e1fe68b0fa20b6f3b>`__
()

 

| Removes all appenders for this
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__.
`More... <#a53e072db4ea8496e1fe68b0fa20b6f3b>`__

 

void 

`remove\_appender <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a17009480a695669ed8e1611db6320ba9>`__
(`Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__ \*appender)

 

| Remove the appender passed as parameter from the list of appenders.
`More... <#a17009480a695669ed8e1611db6320ba9>`__

 

void 

`remove\_appender <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#af662639b70264c826f88387c99294ba4>`__
(const std::string &name)

 

| Remove the appender with the name passed as parameter from the list of
appenders. `More... <#af662639b70264c826f88387c99294ba4>`__

 

Protected Member Functions
--------------------------

 

`AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a74532446063d73d710678566a5b3fc57>`__
(const
`AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html>`__
&other)

 

`AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html>`__
& 

`operator= <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a4cbf4bf5552db661c8f41c430db0e953>`__
(const
`AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html>`__
&other)

 

Protected Attributes
--------------------

`AppenderMap <../../d4/db0/namespacelog4tango.html#aaff7d7baaf61e3681dda76a0b72ef516>`__ 

`\_appenders <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a1956c7e554f262cfecfc1a9de9145289>`__

 

| Appenders repository. `More... <#a1956c7e554f262cfecfc1a9de9145289>`__

 

`threading::Mutex <../../d8/d70/classlog4tango_1_1threading_1_1Mutex.html>`__ 

`\_appendersMutex <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a9390c8fc80202c4296f7ef10f08d13a5>`__

 

| A mutex to protect the repository against race conditions.
`More... <#a9390c8fc80202c4296f7ef10f08d13a5>`__

 

Constructor & Destructor Documentation
--------------------------------------

+-----------------------------------------------------+-----+----+-----+----+
| log4tango::AppenderAttachable::AppenderAttachable   | (   |    | )   |    |
+-----------------------------------------------------+-----+----+-----+----+

Constructor.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------------------+-----+----+----- |                                      |
| +----+                               |                                      |
| | log4tango::AppenderAttachable::~Ap |                                      |
| penderAttachable   | (   |    | )    |                                      |
| |    |                               |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+----+----- |                                      |
| +----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Destructor.

References
`remove\_all\_appenders() <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a53e072db4ea8496e1fe68b0fa20b6f3b>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------+-----------+-----+----+    |                                      |
| | log4tango::AppenderAttachable::App |                                      |
| enderAttachable   | (   | const `App |                                      |
| enderAttachable <../../d6/d89/classl |                                      |
| og4tango_1_1AppenderAttachable.html> |                                      |
| `__ &    | *other*   | )   |    |    |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+----------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ---------+-----------+-----+----+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Member Function Documentation
-----------------------------

+-----------------------------------------------------+-----+-------------------------------------------------------------------+--------------+-----+----+
| void log4tango::AppenderAttachable::add\_appender   | (   | `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__ \*    | *appender*   | )   |    |
+-----------------------------------------------------+-----+-------------------------------------------------------------------+--------------+-----+----+

Adds an `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__.

Does nothing if the appender is NULL or already attached.

References
`\_appenders <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a1956c7e554f262cfecfc1a9de9145289>`__,
`\_appendersMutex <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a9390c8fc80202c4296f7ef10f08d13a5>`__,
and
`log4tango::Appender::get\_name() <../../d7/dc4/classlog4tango_1_1Appender.html#ac02d43ef46297bcc9eb3e1442d00b58c>`__.

+------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------+----+-----+----+
| `AppenderList <../../d4/db0/namespacelog4tango.html#a8fa9a70e20bab57912e721dd4d7dc917>`__ log4tango::AppenderAttachable::get\_all\_appenders   | (   | void    |    | )   |    |
+------------------------------------------------------------------------------------------------------------------------------------------------+-----+---------+----+-----+----+

Get all previously added appenders as a vector.

The caller must call "release" on each
`Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__ in the
returned list when it is no longer needed (the
`Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__ class is
ref-counted).

References
`\_appenders <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a1956c7e554f262cfecfc1a9de9145289>`__,
and
`\_appendersMutex <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a9390c8fc80202c4296f7ef10f08d13a5>`__.

+---------------------------------------------------------------------------------------------------------------+-----+------------------------+----------+-----+----+
| `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__ \* log4tango::AppenderAttachable::get\_appender   | (   | const std::string &    | *name*   | )   |    |
+---------------------------------------------------------------------------------------------------------------+-----+------------------------+----------+-----+----+

Get an appender by name.

The caller must call "release" on the returned
`Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__ when it is
no longer needed (the
`Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__ class is
ref-counted). Returns 0 if there is no
`Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__ named "name"
currently attached.

References
`\_appenders <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a1956c7e554f262cfecfc1a9de9145289>`__,
and
`\_appendersMutex <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a9390c8fc80202c4296f7ef10f08d13a5>`__.

+----------------------------------------------------+-----+-------------------------------------------------------------------+--------------+-----+----+
| bool log4tango::AppenderAttachable::is\_attached   | (   | `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__ \*    | *appender*   | )   |    |
+----------------------------------------------------+-----+-------------------------------------------------------------------+--------------+-----+----+

Returns true if the specified appender is in list of attached appanders,
false otherwise.

References
`\_appenders <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a1956c7e554f262cfecfc1a9de9145289>`__,
`\_appendersMutex <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a9390c8fc80202c4296f7ef10f08d13a5>`__,
and
`log4tango::Appender::get\_name() <../../d7/dc4/classlog4tango_1_1Appender.html#ac02d43ef46297bcc9eb3e1442d00b58c>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --------------------+-----+--------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----------+-----------+-----+----+  |                                      |
| | `AppenderAttachable <../../d6/d89/ |                                      |
| classlog4tango_1_1AppenderAttachable |                                      |
| .html>`__\ & log4tango::AppenderAtta |                                      |
| chable::operator=   | (   | const `A |                                      |
| ppenderAttachable <../../d6/d89/clas |                                      |
| slog4tango_1_1AppenderAttachable.htm |                                      |
| l>`__ &    | *other*   | )   |    |  |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| --------------------+-----+--------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -----------+-----------+-----+----+  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

+--------------------------------------------------------------+-----+---------+----+-----+----+
| void log4tango::AppenderAttachable::remove\_all\_appenders   | (   | void    |    | )   |    |
+--------------------------------------------------------------+-----+---------+----+-----+----+

Removes all appenders for this
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__.

References
`\_appenders <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a1956c7e554f262cfecfc1a9de9145289>`__,
and
`\_appendersMutex <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a9390c8fc80202c4296f7ef10f08d13a5>`__.

Referenced by
`~AppenderAttachable() <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a5af097d444408db567e0c2202b10a158>`__.

+--------------------------------------------------------+-----+-------------------------------------------------------------------+--------------+-----+----+
| void log4tango::AppenderAttachable::remove\_appender   | (   | `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__ \*    | *appender*   | )   |    |
+--------------------------------------------------------+-----+-------------------------------------------------------------------+--------------+-----+----+

Remove the appender passed as parameter from the list of appenders.

References
`log4tango::Appender::get\_name() <../../d7/dc4/classlog4tango_1_1Appender.html#ac02d43ef46297bcc9eb3e1442d00b58c>`__.

Referenced by
`log4tango::Logger::call\_appenders() <../../d4/d1c/classlog4tango_1_1Logger.html#a44d8fa395ad922427bf417aee9c3ed79>`__.

+--------------------------------------------------------+-----+------------------------+----------+-----+----+
| void log4tango::AppenderAttachable::remove\_appender   | (   | const std::string &    | *name*   | )   |    |
+--------------------------------------------------------+-----+------------------------+----------+-----+----+

Remove the appender with the name passed as parameter from the list of
appenders.

References
`\_appenders <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a1956c7e554f262cfecfc1a9de9145289>`__,
and
`\_appendersMutex <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a9390c8fc80202c4296f7ef10f08d13a5>`__.

Member Data Documentation
-------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------------------------+        |                                      |
| | `AppenderMap <../../d4/db0/namespa |                                      |
| celog4tango.html#aaff7d7baaf61e3681d |                                      |
| da76a0b72ef516>`__ log4tango::Append |                                      |
| erAttachable::\_appenders   |        |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------------------------+        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Appenders repository.

Referenced by
`add\_appender() <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a04b4e410672579c6d8f698872f26866d>`__,
`log4tango::Logger::call\_appenders() <../../d4/d1c/classlog4tango_1_1Logger.html#a44d8fa395ad922427bf417aee9c3ed79>`__,
`get\_all\_appenders() <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#ac09cfee8ed24912f751c1b46502b91c3>`__,
`get\_appender() <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#aef280962681b6de83bf759dee678f9ad>`__,
`is\_attached() <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#ad453ee78f746f781cdac768c57b8bd74>`__,
`remove\_all\_appenders() <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a53e072db4ea8496e1fe68b0fa20b6f3b>`__,
`remove\_appender() <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#af662639b70264c826f88387c99294ba4>`__,
and
`log4tango::Logger::set\_level() <../../d4/d1c/classlog4tango_1_1Logger.html#aee3ae63ec9ebc6f2a2eb72c0ff3d2b34>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------------------+              |                                      |
| | `threading::Mutex <../../d8/d70/cl |                                      |
| asslog4tango_1_1threading_1_1Mutex.h |                                      |
| tml>`__ log4tango::AppenderAttachabl |                                      |
| e::\_appendersMutex   |              |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------------------+              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

A mutex to protect the repository against race conditions.

Referenced by
`add\_appender() <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a04b4e410672579c6d8f698872f26866d>`__,
`log4tango::Logger::call\_appenders() <../../d4/d1c/classlog4tango_1_1Logger.html#a44d8fa395ad922427bf417aee9c3ed79>`__,
`get\_all\_appenders() <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#ac09cfee8ed24912f751c1b46502b91c3>`__,
`get\_appender() <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#aef280962681b6de83bf759dee678f9ad>`__,
`is\_attached() <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#ad453ee78f746f781cdac768c57b8bd74>`__,
`remove\_all\_appenders() <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a53e072db4ea8496e1fe68b0fa20b6f3b>`__,
`remove\_appender() <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#af662639b70264c826f88387c99294ba4>`__,
and
`log4tango::Logger::set\_level() <../../d4/d1c/classlog4tango_1_1Logger.html#aee3ae63ec9ebc6f2a2eb72c0ff3d2b34>`__.

--------------

The documentation for this class was generated from the following files:

-  `AppenderAttachable.hh <../../d6/d73/AppenderAttachable_8hh_source.html>`__
-  `AppenderAttachable.cpp <../../da/d3f/AppenderAttachable_8cpp.html>`__

-  `log4tango <../../d4/db0/namespacelog4tango.html>`__
-  `AppenderAttachable <../../d6/d89/classlog4tango_1_1AppenderAttachable.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../dd/d29/classlog4tango_1_1AppenderAttachable__inherit__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
