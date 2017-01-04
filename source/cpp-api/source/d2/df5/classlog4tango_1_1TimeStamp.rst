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

`Public Member Functions <#pub-methods>`__ \| `Static Public Member
Functions <#pub-static-methods>`__ \| `Protected
Attributes <#pro-attribs>`__ \| `Static Protected
Attributes <#pro-static-attribs>`__ \| `List of all
members <../../d0/d6e/classlog4tango_1_1TimeStamp-members.html>`__

log4tango::TimeStamp Class Reference

``#include "TimeStamp.hh"``

Collaboration diagram for log4tango::TimeStamp:

|Collaboration graph|

[`legend <../../graph_legend.html>`__\ ]

Public Member Functions
-----------------------

 

`TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html#af1fae2606fdd64acb5e4b797d9d6958a>`__
()

 

| Constructs a
`TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__
representing 'now'. `More... <#af1fae2606fdd64acb5e4b797d9d6958a>`__

 

 

`TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html#acfd54cdae6f10111d7e0eb127962055c>`__
(const `TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__ &t)

 

| Copy Constructor. `More... <#acfd54cdae6f10111d7e0eb127962055c>`__

 

 

`TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html#a953a716e551afe5d1af84994c42462dd>`__
(unsigned int seconds, unsigned int microseconds=0)

 

| Constructs a
`TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__
representing the given offset since the epoch ( 00:00:00 1970/1/1 UTC).
`More... <#a953a716e551afe5d1af84994c42462dd>`__

 

int 

`get\_microseconds <../../d2/df5/classlog4tango_1_1TimeStamp.html#a646294685da8d31451cbfd5b86780b98>`__
(void) const

 

| Returns the subsecond part of the
`TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__ in
microseconds. `More... <#a646294685da8d31451cbfd5b86780b98>`__

 

int 

`get\_milliseconds <../../d2/df5/classlog4tango_1_1TimeStamp.html#ad78de0eb6ff9d25cc00e24ad5aab16e2>`__
(void) const

 

| Returns the 'subseconds' part of the
`TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__ in
milliseconds,
`get\_milliseconds() <../../d2/df5/classlog4tango_1_1TimeStamp.html#ad78de0eb6ff9d25cc00e24ad5aab16e2>`__
==
`get\_microseconds() <../../d2/df5/classlog4tango_1_1TimeStamp.html#a646294685da8d31451cbfd5b86780b98>`__
/ 1000. `More... <#ad78de0eb6ff9d25cc00e24ad5aab16e2>`__

 

int 

`get\_seconds <../../d2/df5/classlog4tango_1_1TimeStamp.html#a94972a4ed5baac6f19536289ad12a890>`__
(void) const

 

| Returns the 'seconds' part of the
`TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__.
`More... <#a94972a4ed5baac6f19536289ad12a890>`__

 

void 

`operator= <../../d2/df5/classlog4tango_1_1TimeStamp.html#a916933860753832c2b1444b3faa0dfcd>`__
(const `TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__ &t)

 

| Operator=. `More... <#a916933860753832c2b1444b3faa0dfcd>`__

 

Static Public Member Functions
------------------------------

static const
`TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__ & 

`get\_start\_time <../../d2/df5/classlog4tango_1_1TimeStamp.html#a8aff592396c6987d1b0008fd7308346a>`__
(void)

 

| Returns a
`TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__
representing the time at which the application started.
`More... <#a8aff592396c6987d1b0008fd7308346a>`__

 

Protected Attributes
--------------------

int 

`\_micro\_seconds <../../d2/df5/classlog4tango_1_1TimeStamp.html#a1cb0ccf43153e649547fbd1172e95650>`__

 

int 

`\_seconds <../../d2/df5/classlog4tango_1_1TimeStamp.html#a100e29832bd2fb44135cb556234e07ea>`__

 

Static Protected Attributes
---------------------------

static `TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__ 

`\_start\_stamp <../../d2/df5/classlog4tango_1_1TimeStamp.html#ae5498e41fd84e2a0f49bb7640ccec9ec>`__

 

Constructor & Destructor Documentation
--------------------------------------

+-----------------------------------+-----+----+-----+----+
| log4tango::TimeStamp::TimeStamp   | (   |    | )   |    |
+-----------------------------------+-----+----+-----+----+

Constructs a
`TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__
representing 'now'.

References
`\_micro\_seconds <../../d2/df5/classlog4tango_1_1TimeStamp.html#a1cb0ccf43153e649547fbd1172e95650>`__,
and
`\_seconds <../../d2/df5/classlog4tango_1_1TimeStamp.html#a100e29832bd2fb44135cb556234e07ea>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| +-----+----------------------------- |                                      |
| ------------------------------------ |                                      |
| ---------+-------+-----+----+        |                                      |
| | log4tango::TimeStamp::TimeStamp    |                                      |
| | (   | const `TimeStamp <../../d2/d |                                      |
| f5/classlog4tango_1_1TimeStamp.html> |                                      |
| `__ &    | *t*   | )   |    |        |                                      |
| +----------------------------------- |                                      |
| +-----+----------------------------- |                                      |
| ------------------------------------ |                                      |
| ---------+-------+-----+----+        |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Copy Constructor.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| +-----+-----------------+----------- |                                      |
| ----------------+                    |                                      |
| | log4tango::TimeStamp::TimeStamp    |                                      |
| | (   | unsigned int    | *seconds*, |                                      |
|                 |                    |                                      |
| +----------------------------------- |                                      |
| +-----+-----------------+----------- |                                      |
| ----------------+                    |                                      |
| |                                    |                                      |
| |     | unsigned int    | *microseco |                                      |
| nds* = ``0``    |                    |                                      |
| +----------------------------------- |                                      |
| +-----+-----------------+----------- |                                      |
| ----------------+                    |                                      |
| |                                    |                                      |
| | )   |                 |            |                                      |
|                 |                    |                                      |
| +----------------------------------- |                                      |
| +-----+-----------------+----------- |                                      |
| ----------------+                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Constructs a
`TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__
representing the given offset since the epoch ( 00:00:00 1970/1/1 UTC).

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------+-----+---------+----+-- |                                      |
| ---+---------+                       |                                      |
| | int log4tango::TimeStamp::get\_mic |                                      |
| roseconds   | (   | void    |    | ) |                                      |
|    | const   |                       |                                      |
| +----------------------------------- |                                      |
| ------------+-----+---------+----+-- |                                      |
| ---+---------+                       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Returns the subsecond part of the
`TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__ in
microseconds.

The actual precision of this value depends on the platform and may be in
the order of milliseconds rather than microseconds.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| ------------+-----+---------+----+-- |                                      |
| ---+---------+                       |                                      |
| | int log4tango::TimeStamp::get\_mil |                                      |
| liseconds   | (   | void    |    | ) |                                      |
|    | const   |                       |                                      |
| +----------------------------------- |                                      |
| ------------+-----+---------+----+-- |                                      |
| ---+---------+                       |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Returns the 'subseconds' part of the
`TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__ in
milliseconds,
`get\_milliseconds() <../../d2/df5/classlog4tango_1_1TimeStamp.html#ad78de0eb6ff9d25cc00e24ad5aab16e2>`__
==
`get\_microseconds() <../../d2/df5/classlog4tango_1_1TimeStamp.html#a646294685da8d31451cbfd5b86780b98>`__
/ 1000.

Referenced by
`log4tango::MillisSinceEpochComponent::append() <../../d6/df9/structlog4tango_1_1MillisSinceEpochComponent.html#aa27fd154cf9ab295aaa7f4b81f60a182>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -------+-----+---------+----+-----+- |                                      |
| --------+                            |                                      |
| | int log4tango::TimeStamp::get\_sec |                                      |
| onds   | (   | void    |    | )   |  |                                      |
| const   |                            |                                      |
| +----------------------------------- |                                      |
| -------+-----+---------+----+-----+- |                                      |
| --------+                            |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Returns the 'seconds' part of the
`TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__.

Referenced by
`log4tango::MillisSinceEpochComponent::append() <../../d6/df9/structlog4tango_1_1MillisSinceEpochComponent.html#aa27fd154cf9ab295aaa7f4b81f60a182>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------+-----+---------+----+- |                                      |
| ----+----+                           |                                      |
| | static const `TimeStamp <../../d2/ |                                      |
| df5/classlog4tango_1_1TimeStamp.html |                                      |
| >`__\ & log4tango::TimeStamp::get\_s |                                      |
| tart\_time   | (   | void    |    |  |                                      |
| )   |    |                           |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| ------------------------------------ |                                      |
| -------------+-----+---------+----+- |                                      |
| ----+----+                           |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Returns a `TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__
representing the time at which the application started.

Referenced by
`log4tango::MillisSinceEpochComponent::append() <../../d6/df9/structlog4tango_1_1MillisSinceEpochComponent.html#aa27fd154cf9ab295aaa7f4b81f60a182>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inline                               |
| -----+-----+------------------------ |                                      |
| ------------------------------------ |                                      |
| --------------+-------+-----+----+   |                                      |
| | void log4tango::TimeStamp::operato |                                      |
| r=   | (   | const `TimeStamp <../.. |                                      |
| /d2/df5/classlog4tango_1_1TimeStamp. |                                      |
| html>`__ &    | *t*   | )   |    |   |                                      |
| +----------------------------------- |                                      |
| -----+-----+------------------------ |                                      |
| ------------------------------------ |                                      |
| --------------+-------+-----+----+   |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Operator=.

References
`\_micro\_seconds <../../d2/df5/classlog4tango_1_1TimeStamp.html#a1cb0ccf43153e649547fbd1172e95650>`__,
and
`\_seconds <../../d2/df5/classlog4tango_1_1TimeStamp.html#a100e29832bd2fb44135cb556234e07ea>`__.

Member Data Documentation
-------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| -----------+                         |                                      |
| | int log4tango::TimeStamp::\_micro\ |                                      |
| _seconds   |                         |                                      |
| +----------------------------------- |                                      |
| -----------+                         |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Referenced by
`operator=() <../../d2/df5/classlog4tango_1_1TimeStamp.html#a916933860753832c2b1444b3faa0dfcd>`__,
and
`TimeStamp() <../../d2/df5/classlog4tango_1_1TimeStamp.html#af1fae2606fdd64acb5e4b797d9d6958a>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | protected                            |
| ----+                                |                                      |
| | int log4tango::TimeStamp::\_second |                                      |
| s   |                                |                                      |
| +----------------------------------- |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Referenced by
`operator=() <../../d2/df5/classlog4tango_1_1TimeStamp.html#a916933860753832c2b1444b3faa0dfcd>`__,
and
`TimeStamp() <../../d2/df5/classlog4tango_1_1TimeStamp.html#af1fae2606fdd64acb5e4b797d9d6958a>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | staticprotected                      |
| ------------------------------------ |                                      |
| -------------------------------+     |                                      |
| | `TimeStamp <../../d2/df5/classlog4 |                                      |
| tango_1_1TimeStamp.html>`__ log4tang |                                      |
| o::TimeStamp::\_start\_stamp   |     |                                      |
| +----------------------------------- |                                      |
| ------------------------------------ |                                      |
| -------------------------------+     |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

--------------

The documentation for this class was generated from the following files:

-  `TimeStamp.hh <../../db/d7c/TimeStamp_8hh_source.html>`__
-  `TimeStamp.cpp <../../da/d08/TimeStamp_8cpp.html>`__

-  `log4tango <../../d4/db0/namespacelog4tango.html>`__
-  `TimeStamp <../../d2/df5/classlog4tango_1_1TimeStamp.html>`__
-  Generated on Fri Oct 7 2016 11:11:16 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |Collaboration graph| image:: ../../d7/db6/classlog4tango_1_1TimeStamp__coll__graph.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
