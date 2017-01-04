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
Functions <#pro-methods>`__ \| `Friends <#friends>`__ \| `List of all
members <../../da/dc1/classlog4tango_1_1Appender-members.html>`__

log4tango::Appender Class Referenceabstract

``#include "Appender.hh"``

Inheritance diagram for log4tango::Appender:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

virtual 

`~Appender <../../d7/dc4/classlog4tango_1_1Appender.html#a3951b12a37424e9418963680662388b1>`__
()

 

| Destructor for
`Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__.
`More... <#a3951b12a37424e9418963680662388b1>`__

 

int 

`append <../../d7/dc4/classlog4tango_1_1Appender.html#acfb6f50c20043bd740b198dfbb4231ea>`__
(const
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__
&event)

 

| Log in `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__
specific way. `More... <#acfb6f50c20043bd740b198dfbb4231ea>`__

 

virtual void 

`close <../../d7/dc4/classlog4tango_1_1Appender.html#adafebe465072844506448a35570f9c59>`__
(void)=0

 

| Release any resources allocated within the appender such as file
handles, network connections, etc.
`More... <#adafebe465072844506448a35570f9c59>`__

 

const std::string & 

`get\_name <../../d7/dc4/classlog4tango_1_1Appender.html#ac02d43ef46297bcc9eb3e1442d00b58c>`__
(void) const

 

| Returns this appender name.
`More... <#ac02d43ef46297bcc9eb3e1442d00b58c>`__

 

virtual bool 

`is\_valid <../../d7/dc4/classlog4tango_1_1Appender.html#af8d183b5fdfc4b4affda75d1846d9270>`__
(void) const

 

| Check if the appender is valid (for instance the underlying connection
is ok) This default implementation always return true.
`More... <#af8d183b5fdfc4b4affda75d1846d9270>`__

 

virtual bool 

`reopen <../../d7/dc4/classlog4tango_1_1Appender.html#a1f853fae3eebe457698039e3aafb770a>`__
(void)

 

| Reopens the output destination of this
`Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__, e.g.
`More... <#a1f853fae3eebe457698039e3aafb770a>`__

 

virtual bool 

`requires\_layout <../../d7/dc4/classlog4tango_1_1Appender.html#a049da1b0fa6609c29d5b8d8cae0fee7b>`__
(void) const =0

 

| Check if the appender uses a layout.
`More... <#a049da1b0fa6609c29d5b8d8cae0fee7b>`__

 

virtual void 

`set\_layout <../../d7/dc4/classlog4tango_1_1Appender.html#a445f9f26db03e3f54ac2afdb9d594c1b>`__
(`Layout <../../d7/da6/classlog4tango_1_1Layout.html>`__ \*layout=0)=0

 

| Change the layout. `More... <#a445f9f26db03e3f54ac2afdb9d594c1b>`__

 

Protected Member Functions
--------------------------

 

`Appender <../../d7/dc4/classlog4tango_1_1Appender.html#a16f9d0456a87ff10d57b02f7d5c2cc01>`__
(const std::string &name)

 

| Constructor for
`Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__.
`More... <#a16f9d0456a87ff10d57b02f7d5c2cc01>`__

 

virtual int 

`\_append <../../d7/dc4/classlog4tango_1_1Appender.html#a87739ce35cdc83e06dd4c55af28d3ac8>`__
(const
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__
&event)=0

 

| Log in `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__
specific way. `More... <#a87739ce35cdc83e06dd4c55af28d3ac8>`__

 

virtual void 

`level\_changed <../../d7/dc4/classlog4tango_1_1Appender.html#a3ee7b310ce4681a93e1f53bdcc02a15c>`__
(`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
new\_level)

 

| Inform an appender that its
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__'s logging level
has changed. `More... <#a3ee7b310ce4681a93e1f53bdcc02a15c>`__

 

Friends
-------

class 

`Logger <../../d7/dc4/classlog4tango_1_1Appender.html#aff02b76416d2846736b7ecd798921a0a>`__

 

Constructor & Destructor Documentation
--------------------------------------

+--------------------------------------+--------------------------------------+
| +---------------------------------+- | protected                            |
| ----+------------------------+------ |                                      |
| ----+-----+----+                     |                                      |
| | log4tango::Appender::Appender   |  |                                      |
| (   | const std::string &    | *name |                                      |
| *   | )   |    |                     |                                      |
| +---------------------------------+- |                                      |
| ----+------------------------+------ |                                      |
| ----+-----+----+                     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Constructor for
`Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__.

Will only be used in getAppender() (and in derived classes of course).

Parameters
    +--------+---------------------------------------------------------------------------------+
    | name   | The name of this `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__.   |
    +--------+---------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------+ | virtual                              |
| -----+----+-----+----+               |                                      |
| | log4tango::Appender::~Appender   | |                                      |
|  (   |    | )   |    |               |                                      |
| +----------------------------------+ |                                      |
| -----+----+-----+----+               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Destructor for
`Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__.

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protectedpure virtual                |
| ----------+-----+------------------- |                                      |
| ------------------------------------ |                                      |
| --------------------------+--------- |                                      |
| --+-----+----+                       |                                      |
| | virtual int log4tango::Appender::\ |                                      |
| _append   | (   | const `LoggingEven |                                      |
| t <../../d8/df2/structlog4tango_1_1L |                                      |
| oggingEvent.html>`__ &    | *event*  |                                      |
|   | )   |    |                       |                                      |
| +----------------------------------- |                                      |
| ----------+-----+------------------- |                                      |
| ------------------------------------ |                                      |
| --------------------------+--------- |                                      |
| --+-----+----+                       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Log in `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__
specific way.

Subclasses of
`Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__ should
implement this method to perform actual logging.

Parameters
    +---------+------------------------------------------------------------------------------------+
    | event   | The `LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__ to log.   |
    +---------+------------------------------------------------------------------------------------+

Implemented in
`log4tango::FileAppender <../../dd/d62/classlog4tango_1_1FileAppender.html#acc1e885ec09a9f206383284656a0079e>`__,
`log4tango::RollingFileAppender <../../d9/db4/classlog4tango_1_1RollingFileAppender.html#ad25a1bd45e1dffc755821acca3b958f2>`__,
and
`log4tango::OstreamAppender <../../df/d37/classlog4tango_1_1OstreamAppender.html#a90001f5d7e7ef88b5492e6154d90aa86>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| +-----+----------------------------- |                                      |
| ------------------------------------ |                                      |
| ----------------+-----------+-----+- |                                      |
| ---+                                 |                                      |
| | int log4tango::Appender::append    |                                      |
| | (   | const `LoggingEvent <../../d |                                      |
| 8/df2/structlog4tango_1_1LoggingEven |                                      |
| t.html>`__ &    | *event*   | )   |  |                                      |
|    |                                 |                                      |
| +----------------------------------- |                                      |
| +-----+----------------------------- |                                      |
| ------------------------------------ |                                      |
| ----------------+-----------+-----+- |                                      |
| ---+                                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Log in `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__
specific way.

Returns -1 on error, 0 otherwise.

Parameters
    +---------+------------------------------------------------------------------------------------+
    | event   | The `LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__ to log.   |
    +---------+------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | pure virtual                         |
| --------+-----+---------+----+-----+ |                                      |
| ----+                                |                                      |
| | virtual void log4tango::Appender:: |                                      |
| close   | (   | void    |    | )   | |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| --------+-----+---------+----+-----+ |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Release any resources allocated within the appender such as file
handles, network connections, etc.

Implemented in
`log4tango::FileAppender <../../dd/d62/classlog4tango_1_1FileAppender.html#aa354da43ca498a14bdd83b8f8065589d>`__,
and
`log4tango::OstreamAppender <../../df/d37/classlog4tango_1_1OstreamAppender.html#a6a805af756881eb7ba69de21c60780a1>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------------+-----+---------+- |                                      |
| ---+-----+---------+                 |                                      |
| | const std::string& log4tango::Appe |                                      |
| nder::get\_name   | (   | void    |  |                                      |
|    | )   | const   |                 |                                      |
| +----------------------------------- |                                      |
| ------------------+-----+---------+- |                                      |
| ---+-----+---------+                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Returns this appender name.

Referenced by
`log4tango::AppenderAttachable::add\_appender() <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a04b4e410672579c6d8f698872f26866d>`__,
`log4tango::AppenderAttachable::is\_attached() <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#ad453ee78f746f781cdac768c57b8bd74>`__,
and
`log4tango::AppenderAttachable::remove\_appender() <../../d6/d89/classlog4tango_1_1AppenderAttachable.html#a17009480a695669ed8e1611db6320ba9>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ----+-----+---------+----+-----+---- |                                      |
| -----+                               |                                      |
| | bool log4tango::Appender::is\_vali |                                      |
| d   | (   | void    |    | )   | con |                                      |
| st   |                               |                                      |
| +----------------------------------- |                                      |
| ----+-----+---------+----+-----+---- |                                      |
| -----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the appender is valid (for instance the underlying connection
is ok) This default implementation always return true.

Overload to define your own behaviour.

Returns
    true if the appender is valid, false otherwise.

Reimplemented in
`log4tango::FileAppender <../../dd/d62/classlog4tango_1_1FileAppender.html#a418db9eff584e38bd167dcd4e50df6c1>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protectedvirtual                     |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------+----------------+-----+----+ |                                      |
| | void log4tango::Appender::level\_c |                                      |
| hanged   | (   | `Level::Value <../. |                                      |
| ./d8/d0e/classlog4tango_1_1Level.htm |                                      |
| l#aa708c09b6a19a8cc8a3b19631561ca99> |                                      |
| `__    | *new\_level*   | )   |    | |                                      |
| +----------------------------------- |                                      |
| ---------+-----+-------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------+----------------+-----+----+ |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Inform an appender that its
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__'s logging level
has changed.

The default implementation does nothing.

Parameters
    +--------------+----------------------------------------------------------------------------+
    | new\_level   | The new `Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__'s level.   |
    +--------------+----------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -+-----+---------+----+-----+----+   |                                      |
| | bool log4tango::Appender::reopen   |                                      |
|  | (   | void    |    | )   |    |   |                                      |
| +----------------------------------- |                                      |
| -+-----+---------+----+-----+----+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Reopens the output destination of this
`Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__, e.g.

the logfile or TCP socket.

Returns
    false if an error occured during reopening, true otherwise.

Reimplemented in
`log4tango::FileAppender <../../dd/d62/classlog4tango_1_1FileAppender.html#a17989960f7118b8628a93c69b10755ca>`__,
and
`log4tango::OstreamAppender <../../df/d37/classlog4tango_1_1OstreamAppender.html#ac07a12e667d34c7560a690cf35851ec8>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | pure virtual                         |
| -------------------+-----+---------+ |                                      |
| ----+-----+---------+                |                                      |
| | virtual bool log4tango::Appender:: |                                      |
| requires\_layout   | (   | void    | |                                      |
|     | )   | const   |                |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------+ |                                      |
| ----+-----+---------+                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the appender uses a layout.

Returns
    true if the appender implementation requires a layout.

Implemented in
`log4tango::LayoutAppender <../../d3/db6/classlog4tango_1_1LayoutAppender.html#aed53ada140e2b10a63d4d836b0e22ba9>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | pure virtual                         |
| --------------+-----+--------------- |                                      |
| ------------------------------------ |                                      |
| ------------+--------------------+-- |                                      |
| ---+----+                            |                                      |
| | virtual void log4tango::Appender:: |                                      |
| set\_layout   | (   | `Layout <../.. |                                      |
| /d7/da6/classlog4tango_1_1Layout.htm |                                      |
| l>`__ \*    | *layout* = ``0``   | ) |                                      |
|    |    |                            |                                      |
| +----------------------------------- |                                      |
| --------------+-----+--------------- |                                      |
| ------------------------------------ |                                      |
| ------------+--------------------+-- |                                      |
| ---+----+                            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Change the layout.

Implemented in
`log4tango::LayoutAppender <../../d3/db6/classlog4tango_1_1LayoutAppender.html#ac3d2b08e933399a5dfc78dab2c208055>`__.

Friends And Related Function Documentation
------------------------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | friend                               |
| ------------------------------------ |                                      |
| -+                                   |                                      |
| | friend class `Logger <../../d4/d1c |                                      |
| /classlog4tango_1_1Logger.html>`__   |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -+                                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

--------------

The documentation for this class was generated from the following files:

-  `Appender.hh <../../d2/d5c/Appender_8hh_source.html>`__
-  `Appender.cpp <../../d3/d49/Appender_8cpp.html>`__

-  `log4tango <../../d4/db0/namespacelog4tango.html>`__
-  `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d6/d48/classlog4tango_1_1Appender__inherit__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
