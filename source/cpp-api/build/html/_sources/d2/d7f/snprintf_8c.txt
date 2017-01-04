+----------+---------------------------------------+
| |Logo|   | Tango Core Classes Reference  9.2.5   |
+----------+---------------------------------------+

-  `Main Page <../../index.html>`__
-  `Related Pages <../../pages.html>`__
-  `Modules <../../modules.html>`__
-  `Namespaces <../../namespaces.html>`__
-  `Classes <../../annotated.html>`__
-  `Files <../../files.html>`__

-  `File List <../../files.html>`__
-  `File Members <../../globals.html>`__

`Macros <#define-members>`__ \| `Functions <#func-members>`__

snprintf.c File Reference

| ``#include <sys/types.h>``
|  ``#include <string.h>``
|  ``#include <stdlib.h>``
|  ``#include <stdio.h>``
|  ``#include <stdarg.h>``
|  ``#include <assert.h>``
|  ``#include <errno.h>``

Include dependency graph for snprintf.c:

|image1|

This graph shows which files directly or indirectly include this file:

|image2|

Macros
------

#define 

`breakeven\_point <../../d2/d7f/snprintf_8c.html#a92682423eb7bc3233c440b67a429b870>`__   6
/\* some reasonable one-size-fits-all value \*/

 

#define 

`fast\_memcpy <../../d2/d7f/snprintf_8c.html#abdd8c3490d94c83fb3866e0e9139db38>`__\ (d,
s, n)

 

#define 

`fast\_memset <../../d2/d7f/snprintf_8c.html#ad448207baaebdf239f9a6eefc806201e>`__\ (d,
c, n)

 

#define 

`isdigit <../../d2/d7f/snprintf_8c.html#a80e33e966a7ec3facaf0b2b4afaf5be5>`__\ (c)   ((c)
>= '0' && (c) <= '9')

 

#define 

`portable\_snprintf <../../d2/d7f/snprintf_8c.html#a93ff4ec8efd9a3f9abfcf127fa408a0a>`__   snprintf

 

#define 

`PORTABLE\_SNPRINTF\_VERSION\_MAJOR <../../d2/d7f/snprintf_8c.html#ae7b63d1b04b47a62e0168225e000824c>`__   2

 

#define 

`PORTABLE\_SNPRINTF\_VERSION\_MINOR <../../d2/d7f/snprintf_8c.html#a076d04c914732567f8300676b32c3b08>`__   2

 

#define 

`portable\_vsnprintf <../../d2/d7f/snprintf_8c.html#ac87f4bcc17a27a39813acfbc8d2e6f05>`__   vsnprintf

 

Functions
---------

int 

`portable\_snprintf <../../d2/d7f/snprintf_8c.html#ae5dc736201ed48de501c7491e23719e5>`__
(char \*str, size\_t str\_m, const char \*fmt,...)

 

int 

`portable\_vsnprintf <../../d2/d7f/snprintf_8c.html#aa73a3dcaf1ccfeaecc146df5ebeb8b0a>`__
(char \*str, size\_t str\_m, const char \*fmt, va\_list ap)

 

Macro Definition Documentation
------------------------------

+--------------------------------------------------------------------------------+
| #define breakeven\_point   6 /\* some reasonable one-size-fits-all value \*/   |
+--------------------------------------------------------------------------------+

+------------------------+-----+-----+------+
| #define fast\_memcpy   | (   |     | d,   |
+------------------------+-----+-----+------+
|                        |     |     | s,   |
+------------------------+-----+-----+------+
|                        |     |     | n    |
+------------------------+-----+-----+------+
|                        | )   |     |      |
+------------------------+-----+-----+------+

**Value:**

{ register size\_t nn = (size\_t)(n); \\

if (nn >=
`breakeven\_point <../../d2/d7f/snprintf_8c.html#a92682423eb7bc3233c440b67a429b870>`__)
memcpy((d), (s), nn); \\

else if (nn > 0) { /\* proc call overhead is worth only for large
strings\*/\\

register char \*dd; register const char \*ss; \\

for (ss=(s), dd=(d); nn>0; nn--) \*dd++ = \*ss++; } }

`breakeven\_point <../../d2/d7f/snprintf_8c.html#a92682423eb7bc3233c440b67a429b870>`__

#define breakeven\_point

**Definition:** snprintf.c:368

Referenced by
`portable\_vsnprintf() <../../d2/d7f/snprintf_8c.html#aa73a3dcaf1ccfeaecc146df5ebeb8b0a>`__.

+------------------------+-----+-----+------+
| #define fast\_memset   | (   |     | d,   |
+------------------------+-----+-----+------+
|                        |     |     | c,   |
+------------------------+-----+-----+------+
|                        |     |     | n    |
+------------------------+-----+-----+------+
|                        | )   |     |      |
+------------------------+-----+-----+------+

**Value:**

{ register size\_t nn = (size\_t)(n); \\

if (nn >=
`breakeven\_point <../../d2/d7f/snprintf_8c.html#a92682423eb7bc3233c440b67a429b870>`__)
memset((d), (int)(c), nn); \\

else if (nn > 0) { /\* proc call overhead is worth only for large
strings\*/\\

register char \*dd; register const int cc=(int)(c); \\

for (dd=(d); nn>0; nn--) \*dd++ = cc; } }

`breakeven\_point <../../d2/d7f/snprintf_8c.html#a92682423eb7bc3233c440b67a429b870>`__

#define breakeven\_point

**Definition:** snprintf.c:368

Referenced by
`portable\_vsnprintf() <../../d2/d7f/snprintf_8c.html#aa73a3dcaf1ccfeaecc146df5ebeb8b0a>`__.

+-------------------+-----+-----+-----+-----+---------------------------------+
| #define isdigit   | (   |     | c   | )   |    ((c) >= '0' && (c) <= '9')   |
+-------------------+-----+-----+-----+-----+---------------------------------+

Referenced by
`portable\_vsnprintf() <../../d2/d7f/snprintf_8c.html#aa73a3dcaf1ccfeaecc146df5ebeb8b0a>`__.

+-----------------------------------------+
| #define portable\_snprintf   snprintf   |
+-----------------------------------------+

+--------------------------------------------------+
| #define PORTABLE\_SNPRINTF\_VERSION\_MAJOR   2   |
+--------------------------------------------------+

+--------------------------------------------------+
| #define PORTABLE\_SNPRINTF\_VERSION\_MINOR   2   |
+--------------------------------------------------+

+-------------------------------------------+
| #define portable\_vsnprintf   vsnprintf   |
+-------------------------------------------+

Referenced by
`portable\_snprintf() <../../d2/d7f/snprintf_8c.html#ae5dc736201ed48de501c7491e23719e5>`__.

Function Documentation
----------------------

+--------------------------+-----+------------------+-------------+
| int portable\_snprintf   | (   | char \*          | *str*,      |
+--------------------------+-----+------------------+-------------+
|                          |     | size\_t          | *str\_m*,   |
+--------------------------+-----+------------------+-------------+
|                          |     | const char \*    | *fmt*,      |
+--------------------------+-----+------------------+-------------+
|                          |     |                  | *...*       |
+--------------------------+-----+------------------+-------------+
|                          | )   |                  |             |
+--------------------------+-----+------------------+-------------+

References
`portable\_vsnprintf <../../d2/d7f/snprintf_8c.html#ac87f4bcc17a27a39813acfbc8d2e6f05>`__.

+---------------------------+-----+------------------+-------------+
| int portable\_vsnprintf   | (   | char \*          | *str*,      |
+---------------------------+-----+------------------+-------------+
|                           |     | size\_t          | *str\_m*,   |
+---------------------------+-----+------------------+-------------+
|                           |     | const char \*    | *fmt*,      |
+---------------------------+-----+------------------+-------------+
|                           |     | va\_list         | *ap*        |
+---------------------------+-----+------------------+-------------+
|                           | )   |                  |             |
+---------------------------+-----+------------------+-------------+

References
`fast\_memcpy <../../d2/d7f/snprintf_8c.html#abdd8c3490d94c83fb3866e0e9139db38>`__,
`fast\_memset <../../d2/d7f/snprintf_8c.html#ad448207baaebdf239f9a6eefc806201e>`__,
and
`isdigit <../../d2/d7f/snprintf_8c.html#a80e33e966a7ec3facaf0b2b4afaf5be5>`__.

-  `src <../../dir_dce6f6254c1e480719f507d4d11781da.html>`__
-  `log4tango <../../dir_c2bf562858037ce0c46f648f9a619349.html>`__
-  `snprintf.c <../../d2/d7f/snprintf_8c.html>`__
-  Generated on Fri Oct 7 2016 11:11:15 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |image1| image:: ../../dc/dc8/snprintf_8c__incl.png
.. |image2| image:: ../../de/d0e/snprintf_8c__dep__incl.png
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
