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
members <../../de/dec/classlog4tango_1_1FileAppender-members.html>`__

log4tango::FileAppender Class Reference

``#include "FileAppender.hh"``

Inheritance diagram for log4tango::FileAppender:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for log4tango::FileAppender:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

 

`FileAppender <../../dd/d62/classlog4tango_1_1FileAppender.html#a43e09e7221ba060eb95252ee5461da95>`__
(const std::string &name, const std::string &fileName, bool
`append <../../d7/dc4/classlog4tango_1_1Appender.html#acfb6f50c20043bd740b198dfbb4231ea>`__\ =true,
`mode\_t <../../d4/db0/namespacelog4tango.html#af02411cb691986e819f7fbf75872b81a>`__
mode=00644)

 

| Constructs a
`FileAppender <../../dd/d62/classlog4tango_1_1FileAppender.html>`__.
`More... <#a43e09e7221ba060eb95252ee5461da95>`__

 

 

`FileAppender <../../dd/d62/classlog4tango_1_1FileAppender.html#ab4cba01161e7a5db14ab19b07d1397f9>`__
(const std::string &name, int fd)

 

| Constructs a
`FileAppender <../../dd/d62/classlog4tango_1_1FileAppender.html>`__ to
an already open file descriptor.
`More... <#ab4cba01161e7a5db14ab19b07d1397f9>`__

 

virtual 

`~FileAppender <../../dd/d62/classlog4tango_1_1FileAppender.html#a051e5c4850313d9fb3b4240c73d9f61c>`__
()

 

| Destructor. `More... <#a051e5c4850313d9fb3b4240c73d9f61c>`__

 

virtual void 

`close <../../dd/d62/classlog4tango_1_1FileAppender.html#aa354da43ca498a14bdd83b8f8065589d>`__
(void)

 

| Closes the logfile. `More... <#aa354da43ca498a14bdd83b8f8065589d>`__

 

virtual bool 

`get\_append <../../dd/d62/classlog4tango_1_1FileAppender.html#a1958ac2f7755b5415abe40dc00104d6f>`__
(void) const

 

| Gets the value of the 'append' option.
`More... <#a1958ac2f7755b5415abe40dc00104d6f>`__

 

virtual
`mode\_t <../../d4/db0/namespacelog4tango.html#af02411cb691986e819f7fbf75872b81a>`__ 

`get\_mode <../../dd/d62/classlog4tango_1_1FileAppender.html#ab7ebf728457c73d43b16725e048f1597>`__
() const

 

| Gets the file open mode.
`More... <#ab7ebf728457c73d43b16725e048f1597>`__

 

virtual bool 

`is\_valid <../../dd/d62/classlog4tango_1_1FileAppender.html#a418db9eff584e38bd167dcd4e50df6c1>`__
(void) const

 

| Check if the appender is valid.
`More... <#a418db9eff584e38bd167dcd4e50df6c1>`__

 

virtual bool 

`reopen <../../dd/d62/classlog4tango_1_1FileAppender.html#a17989960f7118b8628a93c69b10755ca>`__
(void)

 

| Reopens the logfile. `More... <#a17989960f7118b8628a93c69b10755ca>`__

 

virtual void 

`set\_append <../../dd/d62/classlog4tango_1_1FileAppender.html#a2b73b4da440d31a0b2a4ee7a0016b87c>`__
(bool
`append <../../d7/dc4/classlog4tango_1_1Appender.html#acfb6f50c20043bd740b198dfbb4231ea>`__)

 

| Sets the append vs truncate flag.
`More... <#a2b73b4da440d31a0b2a4ee7a0016b87c>`__

 

virtual void 

`set\_mode <../../dd/d62/classlog4tango_1_1FileAppender.html#abf1747af681b0fa4ac760c364a5da1c6>`__
(`mode\_t <../../d4/db0/namespacelog4tango.html#af02411cb691986e819f7fbf75872b81a>`__
mode)

 

| Sets the file open mode.
`More... <#abf1747af681b0fa4ac760c364a5da1c6>`__

 

|-| Public Member Functions inherited from
`log4tango::LayoutAppender <../../d3/db6/classlog4tango_1_1LayoutAppender.html>`__

 

`LayoutAppender <../../d3/db6/classlog4tango_1_1LayoutAppender.html#aae15fc6ce336d263386c6866ad569782>`__
(const std::string &name)

 

virtual 

`~LayoutAppender <../../d3/db6/classlog4tango_1_1LayoutAppender.html#a2822f627fd98e29db0a9a7c96377e81e>`__
()

 

virtual bool 

`requires\_layout <../../d3/db6/classlog4tango_1_1LayoutAppender.html#aed53ada140e2b10a63d4d836b0e22ba9>`__
() const

 

| Check if the appender uses a layout.
`More... <#aed53ada140e2b10a63d4d836b0e22ba9>`__

 

virtual void 

`set\_layout <../../d3/db6/classlog4tango_1_1LayoutAppender.html#ac3d2b08e933399a5dfc78dab2c208055>`__
(`Layout <../../d7/da6/classlog4tango_1_1Layout.html>`__ \*layout=0)

 

| Change the layout. `More... <#ac3d2b08e933399a5dfc78dab2c208055>`__

 

|-| Public Member Functions inherited from
`log4tango::Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__

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

 

const std::string & 

`get\_name <../../d7/dc4/classlog4tango_1_1Appender.html#ac02d43ef46297bcc9eb3e1442d00b58c>`__
(void) const

 

| Returns this appender name.
`More... <#ac02d43ef46297bcc9eb3e1442d00b58c>`__

 

Protected Member Functions
--------------------------

virtual int 

`\_append <../../dd/d62/classlog4tango_1_1FileAppender.html#acc1e885ec09a9f206383284656a0079e>`__
(const
`LoggingEvent <../../d8/df2/structlog4tango_1_1LoggingEvent.html>`__
&event)

 

| Log in `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__
specific way. `More... <#acc1e885ec09a9f206383284656a0079e>`__

 

|-| Protected Member Functions inherited from
`log4tango::LayoutAppender <../../d3/db6/classlog4tango_1_1LayoutAppender.html>`__

`Layout <../../d7/da6/classlog4tango_1_1Layout.html>`__ & 

`get\_layout <../../d3/db6/classlog4tango_1_1LayoutAppender.html#a5b0903233dd0bb8ea2d6fc33a5b85cb0>`__
()

 

|-| Protected Member Functions inherited from
`log4tango::Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__

 

`Appender <../../d7/dc4/classlog4tango_1_1Appender.html#a16f9d0456a87ff10d57b02f7d5c2cc01>`__
(const std::string &name)

 

| Constructor for
`Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__.
`More... <#a16f9d0456a87ff10d57b02f7d5c2cc01>`__

 

virtual void 

`level\_changed <../../d7/dc4/classlog4tango_1_1Appender.html#a3ee7b310ce4681a93e1f53bdcc02a15c>`__
(`Level::Value <../../d8/d0e/classlog4tango_1_1Level.html#aa708c09b6a19a8cc8a3b19631561ca99>`__
new\_level)

 

| Inform an appender that its
`Logger <../../d4/d1c/classlog4tango_1_1Logger.html>`__'s logging level
has changed. `More... <#a3ee7b310ce4681a93e1f53bdcc02a15c>`__

 

Protected Attributes
--------------------

int 

`\_fd <../../dd/d62/classlog4tango_1_1FileAppender.html#a04f8a77d3ad3aa7cdcaa8f6be93c5ab0>`__

 

const std::string 

`\_file\_name <../../dd/d62/classlog4tango_1_1FileAppender.html#a7a21e40ff4eb363cc20678a4be99c93d>`__

 

int 

`\_flags <../../dd/d62/classlog4tango_1_1FileAppender.html#a6d4608df941bbaef01e82396bfc85cb2>`__

 

`mode\_t <../../d4/db0/namespacelog4tango.html#af02411cb691986e819f7fbf75872b81a>`__ 

`\_mode <../../dd/d62/classlog4tango_1_1FileAppender.html#a158481e2d508ad2615d78615a86e5206>`__

 

Additional Inherited Members
----------------------------

|-| Public Types inherited from
`log4tango::LayoutAppender <../../d3/db6/classlog4tango_1_1LayoutAppender.html>`__

typedef `Layout <../../d7/da6/classlog4tango_1_1Layout.html>`__ 

`DefaultLayoutType <../../d3/db6/classlog4tango_1_1LayoutAppender.html#afff8b793c258c86701cbd1fe72925b49>`__

 

Constructor & Destructor Documentation
--------------------------------------

+-----------------------------------------+-----+-----------------------------------------------------------------------------------------+------------------------+
| log4tango::FileAppender::FileAppender   | (   | const std::string &                                                                     | *name*,                |
+-----------------------------------------+-----+-----------------------------------------------------------------------------------------+------------------------+
|                                         |     | const std::string &                                                                     | *fileName*,            |
+-----------------------------------------+-----+-----------------------------------------------------------------------------------------+------------------------+
|                                         |     | bool                                                                                    | *append* = ``true``,   |
+-----------------------------------------+-----+-----------------------------------------------------------------------------------------+------------------------+
|                                         |     | `mode\_t <../../d4/db0/namespacelog4tango.html#af02411cb691986e819f7fbf75872b81a>`__    | *mode* = ``00644``     |
+-----------------------------------------+-----+-----------------------------------------------------------------------------------------+------------------------+
|                                         | )   |                                                                                         |                        |
+-----------------------------------------+-----+-----------------------------------------------------------------------------------------+------------------------+

Constructs a
`FileAppender <../../dd/d62/classlog4tango_1_1FileAppender.html>`__.

Parameters
    +------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | name       | the name of the `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__.                                                                                      |
    +------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | fileName   | the name of the file to which the `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__ has to log.                                                         |
    +------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | append     | whether the `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__ has to truncate the file or just append to it if it already exists. Defaults to 'true'.   |
    +------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | mode       | file mode to open the logfile with. Defaults to 00644.                                                                                                            |
    +------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------+

References
`\_fd <../../dd/d62/classlog4tango_1_1FileAppender.html#a04f8a77d3ad3aa7cdcaa8f6be93c5ab0>`__,
`\_file\_name <../../dd/d62/classlog4tango_1_1FileAppender.html#a7a21e40ff4eb363cc20678a4be99c93d>`__,
`\_flags <../../dd/d62/classlog4tango_1_1FileAppender.html#a6d4608df941bbaef01e82396bfc85cb2>`__,
and
`\_mode <../../dd/d62/classlog4tango_1_1FileAppender.html#a158481e2d508ad2615d78615a86e5206>`__.

+-----------------------------------------+-----+------------------------+-----------+
| log4tango::FileAppender::FileAppender   | (   | const std::string &    | *name*,   |
+-----------------------------------------+-----+------------------------+-----------+
|                                         |     | int                    | *fd*      |
+-----------------------------------------+-----+------------------------+-----------+
|                                         | )   |                        |           |
+-----------------------------------------+-----+------------------------+-----------+

Constructs a
`FileAppender <../../dd/d62/classlog4tango_1_1FileAppender.html>`__ to
an already open file descriptor.

Parameters
    +--------+------------------------------------------------------------------------------------------------------------+
    | name   | the name of the `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__.                               |
    +--------+------------------------------------------------------------------------------------------------------------+
    | fd     | the file descriptor to which the `Appender <../../d7/dc4/classlog4tango_1_1Appender.html>`__ has to log.   |
    +--------+------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -------+-----+----+-----+----+       |                                      |
| | log4tango::FileAppender::~FileAppe |                                      |
| nder   | (   |    | )   |    |       |                                      |
| +----------------------------------- |                                      |
| -------+-----+----+-----+----+       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Destructor.

References
`close() <../../dd/d62/classlog4tango_1_1FileAppender.html#aa354da43ca498a14bdd83b8f8065589d>`__.

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protectedvirtual                     |
| ------+-----+----------------------- |                                      |
| ------------------------------------ |                                      |
| ----------------------+-----------+- |                                      |
| ----+----+                           |                                      |
| | int log4tango::FileAppender::\_app |                                      |
| end   | (   | const `LoggingEvent <. |                                      |
| ./../d8/df2/structlog4tango_1_1Loggi |                                      |
| ngEvent.html>`__ &    | *event*   |  |                                      |
| )   |    |                           |                                      |
| +----------------------------------- |                                      |
| ------+-----+----------------------- |                                      |
| ------------------------------------ |                                      |
| ----------------------+-----------+- |                                      |
| ----+----+                           |                                      |
                                                                             
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

Implements
`log4tango::Appender <../../d7/dc4/classlog4tango_1_1Appender.html#a87739ce35cdc83e06dd4c55af28d3ac8>`__.

Reimplemented in
`log4tango::RollingFileAppender <../../d9/db4/classlog4tango_1_1RollingFileAppender.html#ad25a1bd45e1dffc755821acca3b958f2>`__.

References
`\_fd <../../dd/d62/classlog4tango_1_1FileAppender.html#a04f8a77d3ad3aa7cdcaa8f6be93c5ab0>`__,
and
`log4tango::LayoutAppender::get\_layout() <../../d3/db6/classlog4tango_1_1LayoutAppender.html#a5b0903233dd0bb8ea2d6fc33a5b85cb0>`__.

Referenced by
`log4tango::RollingFileAppender::\_append() <../../d9/db4/classlog4tango_1_1RollingFileAppender.html#ad25a1bd45e1dffc755821acca3b958f2>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ----+-----+---------+----+-----+---- |                                      |
| +                                    |                                      |
| | void log4tango::FileAppender::clos |                                      |
| e   | (   | void    |    | )   |     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ----+-----+---------+----+-----+---- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Closes the logfile.

Implements
`log4tango::Appender <../../d7/dc4/classlog4tango_1_1Appender.html#adafebe465072844506448a35570f9c59>`__.

References
`\_fd <../../dd/d62/classlog4tango_1_1FileAppender.html#a04f8a77d3ad3aa7cdcaa8f6be93c5ab0>`__.

Referenced by
`reopen() <../../dd/d62/classlog4tango_1_1FileAppender.html#a17989960f7118b8628a93c69b10755ca>`__,
`log4tango::RollingFileAppender::roll\_over() <../../d9/db4/classlog4tango_1_1RollingFileAppender.html#a137e08d9ff85d0b78c06be2323bd66c2>`__,
and
`~FileAppender() <../../dd/d62/classlog4tango_1_1FileAppender.html#a051e5c4850313d9fb3b4240c73d9f61c>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ----------+-----+---------+----+---- |                                      |
| -+---------+                         |                                      |
| | bool log4tango::FileAppender::get\ |                                      |
| _append   | (   | void    |    | )   |                                      |
|  | const   |                         |                                      |
| +----------------------------------- |                                      |
| ----------+-----+---------+----+---- |                                      |
| -+---------+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Gets the value of the 'append' option.

References
`\_flags <../../dd/d62/classlog4tango_1_1FileAppender.html#a6d4608df941bbaef01e82396bfc85cb2>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------------+-----+---------+--- |                                      |
| -+-----+---------+                   |                                      |
| | `mode\_t <../../d4/db0/namespacelo |                                      |
| g4tango.html#af02411cb691986e819f7fb |                                      |
| f75872b81a>`__ log4tango::FileAppend |                                      |
| er::get\_mode   | (   | void    |    |                                      |
|  | )   | const   |                   |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| ----------------+-----+---------+--- |                                      |
| -+-----+---------+                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Gets the file open mode.

References
`\_mode <../../dd/d62/classlog4tango_1_1FileAppender.html#a158481e2d508ad2615d78615a86e5206>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| --------+-----+---------+----+-----+ |                                      |
| ---------+                           |                                      |
| | bool log4tango::FileAppender::is\_ |                                      |
| valid   | (   | void    |    | )   | |                                      |
|  const   |                           |                                      |
| +----------------------------------- |                                      |
| --------+-----+---------+----+-----+ |                                      |
| ---------+                           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the appender is valid.

Returns
    true if the appender is valid, false otherwise.

Reimplemented from
`log4tango::Appender <../../d7/dc4/classlog4tango_1_1Appender.html#af8d183b5fdfc4b4affda75d1846d9270>`__.

References
`\_fd <../../dd/d62/classlog4tango_1_1FileAppender.html#a04f8a77d3ad3aa7cdcaa8f6be93c5ab0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----+-----+---------+----+-----+--- |                                      |
| -+                                   |                                      |
| | bool log4tango::FileAppender::reop |                                      |
| en   | (   | void    |    | )   |    |                                      |
|  |                                   |                                      |
| +----------------------------------- |                                      |
| -----+-----+---------+----+-----+--- |                                      |
| -+                                   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Reopens the logfile.

This can be useful for logfiles that are rotated externally, e.g. by
logrotate. This method is a NOOP for FileAppenders that have been
constructed with a file descriptor.

Returns
    true if the reopen succeeded.

Reimplemented from
`log4tango::Appender <../../d7/dc4/classlog4tango_1_1Appender.html#a1f853fae3eebe457698039e3aafb770a>`__.

References
`\_fd <../../dd/d62/classlog4tango_1_1FileAppender.html#a04f8a77d3ad3aa7cdcaa8f6be93c5ab0>`__,
`\_file\_name <../../dd/d62/classlog4tango_1_1FileAppender.html#a7a21e40ff4eb363cc20678a4be99c93d>`__,
`\_flags <../../dd/d62/classlog4tango_1_1FileAppender.html#a6d4608df941bbaef01e82396bfc85cb2>`__,
`\_mode <../../dd/d62/classlog4tango_1_1FileAppender.html#a158481e2d508ad2615d78615a86e5206>`__,
and
`close() <../../dd/d62/classlog4tango_1_1FileAppender.html#aa354da43ca498a14bdd83b8f8065589d>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ----------+-----+---------+--------- |                                      |
| ---+-----+----+                      |                                      |
| | void log4tango::FileAppender::set\ |                                      |
| _append   | (   | bool    | *append* |                                      |
|    | )   |    |                      |                                      |
| +----------------------------------- |                                      |
| ----------+-----+---------+--------- |                                      |
| ---+-----+----+                      |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Sets the append vs truncate flag.

NB. currently the
`FileAppender <../../dd/d62/classlog4tango_1_1FileAppender.html>`__
opens the logfile in the constructor. Therefore this method is too late
to influence the first file opening. We'll need something similar to
log4j's activateOptions().

Parameters
    +----------+-------------------------------------+
    | append   | false to truncate, true to append   |
    +----------+-------------------------------------+

References
`\_flags <../../dd/d62/classlog4tango_1_1FileAppender.html#a6d4608df941bbaef01e82396bfc85cb2>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| --------+-----+--------------------- |                                      |
| ------------------------------------ |                                      |
| --------------------------------+--- |                                      |
| -------+-----+----+                  |                                      |
| | void log4tango::FileAppender::set\ |                                      |
| _mode   | (   | `mode\_t <../../d4/d |                                      |
| b0/namespacelog4tango.html#af02411cb |                                      |
| 691986e819f7fbf75872b81a>`__    | *m |                                      |
| ode*   | )   |    |                  |                                      |
| +----------------------------------- |                                      |
| --------+-----+--------------------- |                                      |
| ------------------------------------ |                                      |
| --------------------------------+--- |                                      |
| -------+-----+----+                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Sets the file open mode.

References
`\_mode <../../dd/d62/classlog4tango_1_1FileAppender.html#a158481e2d508ad2615d78615a86e5206>`__.

Member Data Documentation
-------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| --+                                  |                                      |
| | int log4tango::FileAppender::\_fd  |                                      |
|   |                                  |                                      |
| +----------------------------------- |                                      |
| --+                                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Referenced by
`log4tango::RollingFileAppender::\_append() <../../d9/db4/classlog4tango_1_1RollingFileAppender.html#ad25a1bd45e1dffc755821acca3b958f2>`__,
`\_append() <../../dd/d62/classlog4tango_1_1FileAppender.html#acc1e885ec09a9f206383284656a0079e>`__,
`close() <../../dd/d62/classlog4tango_1_1FileAppender.html#aa354da43ca498a14bdd83b8f8065589d>`__,
`FileAppender() <../../dd/d62/classlog4tango_1_1FileAppender.html#a43e09e7221ba060eb95252ee5461da95>`__,
`is\_valid() <../../dd/d62/classlog4tango_1_1FileAppender.html#a418db9eff584e38bd167dcd4e50df6c1>`__,
`reopen() <../../dd/d62/classlog4tango_1_1FileAppender.html#a17989960f7118b8628a93c69b10755ca>`__,
and
`log4tango::RollingFileAppender::roll\_over() <../../d9/db4/classlog4tango_1_1RollingFileAppender.html#a137e08d9ff85d0b78c06be2323bd66c2>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------+            |                                      |
| | const std::string log4tango::FileA |                                      |
| ppender::\_file\_name   |            |                                      |
| +----------------------------------- |                                      |
| ------------------------+            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Referenced by
`FileAppender() <../../dd/d62/classlog4tango_1_1FileAppender.html#a43e09e7221ba060eb95252ee5461da95>`__,
`reopen() <../../dd/d62/classlog4tango_1_1FileAppender.html#a17989960f7118b8628a93c69b10755ca>`__,
and
`log4tango::RollingFileAppender::roll\_over() <../../d9/db4/classlog4tango_1_1RollingFileAppender.html#a137e08d9ff85d0b78c06be2323bd66c2>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| -----+                               |                                      |
| | int log4tango::FileAppender::\_fla |                                      |
| gs   |                               |                                      |
| +----------------------------------- |                                      |
| -----+                               |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Referenced by
`FileAppender() <../../dd/d62/classlog4tango_1_1FileAppender.html#a43e09e7221ba060eb95252ee5461da95>`__,
`get\_append() <../../dd/d62/classlog4tango_1_1FileAppender.html#a1958ac2f7755b5415abe40dc00104d6f>`__,
`reopen() <../../dd/d62/classlog4tango_1_1FileAppender.html#a17989960f7118b8628a93c69b10755ca>`__,
`log4tango::RollingFileAppender::roll\_over() <../../d9/db4/classlog4tango_1_1RollingFileAppender.html#a137e08d9ff85d0b78c06be2323bd66c2>`__,
and
`set\_append() <../../dd/d62/classlog4tango_1_1FileAppender.html#a2b73b4da440d31a0b2a4ee7a0016b87c>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------+                       |                                      |
| | `mode\_t <../../d4/db0/namespacelo |                                      |
| g4tango.html#af02411cb691986e819f7fb |                                      |
| f75872b81a>`__ log4tango::FileAppend |                                      |
| er::\_mode   |                       |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------+                       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Referenced by
`FileAppender() <../../dd/d62/classlog4tango_1_1FileAppender.html#a43e09e7221ba060eb95252ee5461da95>`__,
`get\_mode() <../../dd/d62/classlog4tango_1_1FileAppender.html#ab7ebf728457c73d43b16725e048f1597>`__,
`reopen() <../../dd/d62/classlog4tango_1_1FileAppender.html#a17989960f7118b8628a93c69b10755ca>`__,
`log4tango::RollingFileAppender::roll\_over() <../../d9/db4/classlog4tango_1_1RollingFileAppender.html#a137e08d9ff85d0b78c06be2323bd66c2>`__,
and
`set\_mode() <../../dd/d62/classlog4tango_1_1FileAppender.html#abf1747af681b0fa4ac760c364a5da1c6>`__.

--------------

The documentation for this class was generated from the following files:

-  `FileAppender.hh <../../dd/de6/FileAppender_8hh_source.html>`__
-  `FileAppender.cpp <../../d2/d6d/FileAppender_8cpp.html>`__

-  `log4tango <../../d4/db0/namespacelog4tango.html>`__
-  `FileAppender <../../dd/d62/classlog4tango_1_1FileAppender.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d6/d51/classlog4tango_1_1FileAppender__inherit__graph.png
.. |Collaboration graph| image:: ../../de/d7f/classlog4tango_1_1FileAppender__coll__graph.png
.. |-| image:: ../../closed.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
