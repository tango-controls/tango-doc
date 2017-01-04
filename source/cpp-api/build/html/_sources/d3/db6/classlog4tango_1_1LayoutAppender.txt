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

`Public Types <#pub-types>`__ \| `Public Member
Functions <#pub-methods>`__ \| `Protected Member
Functions <#pro-methods>`__ \| `List of all
members <../../d7/d3c/classlog4tango_1_1LayoutAppender-members.html>`__

log4tango::LayoutAppender Class Reference

``#include "LayoutAppender.hh"``

Inheritance diagram for log4tango::LayoutAppender:

|Inheritance graph|

[`legend <../../graph_legend.html>`__\ ]

Collaboration diagram for log4tango::LayoutAppender:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Types
------------

typedef `Layout <../../d7/da6/classlog4tango_1_1Layout.html>`__ 

`DefaultLayoutType <../../d3/db6/classlog4tango_1_1LayoutAppender.html#afff8b793c258c86701cbd1fe72925b49>`__

 

Public Member Functions
-----------------------

 

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

 

Protected Member Functions
--------------------------

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

 

Member Typedef Documentation
----------------------------

+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| typedef `Layout <../../d7/da6/classlog4tango_1_1Layout.html>`__ `log4tango::LayoutAppender::DefaultLayoutType <../../d3/db6/classlog4tango_1_1LayoutAppender.html#afff8b793c258c86701cbd1fe72925b49>`__   |
+-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

Constructor & Destructor Documentation
--------------------------------------

+---------------------------------------------+-----+------------------------+----------+-----+----+
| log4tango::LayoutAppender::LayoutAppender   | (   | const std::string &    | *name*   | )   |    |
+---------------------------------------------+-----+------------------------+----------+-----+----+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----------+-----+----+-----+----+   |                                      |
| | log4tango::LayoutAppender::~Layout |                                      |
| Appender   | (   |    | )   |    |   |                                      |
| +----------------------------------- |                                      |
| -----------+-----+----+-----+----+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ------------------------------------ |                                      |
| -----------------------------+-----+ |                                      |
| ---------+----+-----+----+           |                                      |
| | `Layout <../../d7/da6/classlog4tan |                                      |
| go_1_1Layout.html>`__ & log4tango::L |                                      |
| ayoutAppender::get\_layout   | (   | |                                      |
|  void    |    | )   |    |           |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -----------------------------+-----+ |                                      |
| ---------+----+-----+----+           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Referenced by
`log4tango::OstreamAppender::\_append() <../../df/d37/classlog4tango_1_1OstreamAppender.html#a90001f5d7e7ef88b5492e6154d90aa86>`__,
and
`log4tango::FileAppender::\_append() <../../dd/d62/classlog4tango_1_1FileAppender.html#acc1e885ec09a9f206383284656a0079e>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| -----------------+-----+----+-----+- |                                      |
| --------+                            |                                      |
| | bool log4tango::LayoutAppender::re |                                      |
| quires\_layout   | (   |    | )   |  |                                      |
| const   |                            |                                      |
| +----------------------------------- |                                      |
| -----------------+-----+----+-----+- |                                      |
| --------+                            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Check if the appender uses a layout.

Returns
    true if the appender implementation requires a layout.

Implements
`log4tango::Appender <../../d7/dc4/classlog4tango_1_1Appender.html#a049da1b0fa6609c29d5b8d8cae0fee7b>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | virtual                              |
| ------------+-----+----------------- |                                      |
| ------------------------------------ |                                      |
| ----------+--------------------+---- |                                      |
| -+----+                              |                                      |
| | void log4tango::LayoutAppender::se |                                      |
| t\_layout   | (   | `Layout <../../d |                                      |
| 7/da6/classlog4tango_1_1Layout.html> |                                      |
| `__ \*    | *layout* = ``0``   | )   |                                      |
|  |    |                              |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------------------------------------ |                                      |
| ----------+--------------------+---- |                                      |
| -+----+                              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Change the layout.

Implements
`log4tango::Appender <../../d7/dc4/classlog4tango_1_1Appender.html#a445f9f26db03e3f54ac2afdb9d594c1b>`__.

--------------

The documentation for this class was generated from the following files:

-  `LayoutAppender.hh <../../d3/da3/LayoutAppender_8hh_source.html>`__
-  `LayoutAppender.cpp <../../dd/d2b/LayoutAppender_8cpp.html>`__

-  `log4tango <../../d4/db0/namespacelog4tango.html>`__
-  `LayoutAppender <../../d3/db6/classlog4tango_1_1LayoutAppender.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Inheritance graph| image:: ../../d1/d86/classlog4tango_1_1LayoutAppender__inherit__graph.png
.. |Collaboration graph| image:: ../../d4/dca/classlog4tango_1_1LayoutAppender__coll__graph.png
.. |-| image:: ../../closed.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
