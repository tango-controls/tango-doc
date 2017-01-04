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

`List of all members <../../d2/d33/classTango_1_1Except-members.html>`__

Tango::Except Class Reference

`Server classes <../../da/d64/group__Server.html>`__ \| `Client
classes <../../d1/d45/group__Client.html>`__

Container class for all exception related methods.
`More... <../../df/d37/classTango_1_1Except.html#details>`__

Static Public Member Functions
------------------------------

Exception related method

static void 

`print\_exception <../../df/d37/classTango_1_1Except.html#a649730652d055010916449aad7a9b5f3>`__
(const CORBA::Exception &ex)

 

| Print a TANGO exception.
`More... <#a649730652d055010916449aad7a9b5f3>`__

 

Error stack related method

static void 

`print\_error\_stack <../../df/d37/classTango_1_1Except.html#aba359c6be26a171c1d9ebd143f7a9630>`__
(const Tango::DevErrorList &ex)

 

| Print a TANGO error stack.
`More... <#aba359c6be26a171c1d9ebd143f7a9630>`__

 

Throw exception inline methods (static)

static void 

`throw\_exception <../../df/d37/classTango_1_1Except.html#a937f591028b392e50070fbc4149beec6>`__
(const char \*reason, const char \*desc, const char \*origin,
Tango::ErrSeverity sever=Tango::ERR)

 

| Generate and throw a TANGO DevFailed exception.
`More... <#a937f591028b392e50070fbc4149beec6>`__

 

static void 

`throw\_exception <../../df/d37/classTango_1_1Except.html#a2dc82f122c0bdde68566f0a6b3419f13>`__
(const char \*reason, const char \*desc, char \*origin,
Tango::ErrSeverity sever=Tango::ERR)

 

| Generate and throw a TANGO DevFailed exception.
`More... <#a2dc82f122c0bdde68566f0a6b3419f13>`__

 

static void 

`throw\_exception <../../df/d37/classTango_1_1Except.html#a21f0ffe9ed4839c570f8137edb3d7241>`__
(const char \*reason, char \*desc, const char \*origin,
Tango::ErrSeverity sever=Tango::ERR)

 

| Generate and throw a TANGO DevFailed exception.
`More... <#a21f0ffe9ed4839c570f8137edb3d7241>`__

 

static void 

`throw\_exception <../../df/d37/classTango_1_1Except.html#a4b6a58d11b720d1aef7cc341802ddc4e>`__
(const char \*reason, char \*desc, char \*origin, Tango::ErrSeverity
sever=Tango::ERR)

 

| Generate and throw a TANGO DevFailed exception.
`More... <#a4b6a58d11b720d1aef7cc341802ddc4e>`__

 

static void 

`throw\_exception <../../df/d37/classTango_1_1Except.html#a4bc955a801d67a784828f4b79471e959>`__
(char \*reason, const char \*desc, const char \*origin,
Tango::ErrSeverity sever=Tango::ERR)

 

| Generate and throw a TANGO DevFailed exception.
`More... <#a4bc955a801d67a784828f4b79471e959>`__

 

static void 

`throw\_exception <../../df/d37/classTango_1_1Except.html#a21253baed3a2521bfa388fc8079f2026>`__
(char \*reason, const char \*desc, char \*origin, Tango::ErrSeverity
sever=Tango::ERR)

 

| Generate and throw a TANGO DevFailed exception.
`More... <#a21253baed3a2521bfa388fc8079f2026>`__

 

static void 

`throw\_exception <../../df/d37/classTango_1_1Except.html#a87d6f2b545de08d288da642068e001c8>`__
(char \*reason, char \*desc, const char \*origin, Tango::ErrSeverity
sever=Tango::ERR)

 

| Generate and throw a TANGO DevFailed exception.
`More... <#a87d6f2b545de08d288da642068e001c8>`__

 

static void 

`throw\_exception <../../df/d37/classTango_1_1Except.html#a55ed8f25cc157fa3152ede702b36517c>`__
(char \*reason, char \*desc, char \*origin, Tango::ErrSeverity
sever=Tango::ERR)

 

| Generate and throw a TANGO DevFailed exception.
`More... <#a55ed8f25cc157fa3152ede702b36517c>`__

 

static void 

`throw\_exception <../../df/d37/classTango_1_1Except.html#ae8002ec9ea1ba0c99a0770b55ff71d98>`__
(const string &reason, const string &desc, const string &origin,
Tango::ErrSeverity sever=Tango::ERR)

 

| Generate and throw a TANGO DevFailed exception.
`More... <#ae8002ec9ea1ba0c99a0770b55ff71d98>`__

 

static void 

`throw\_exception <../../df/d37/classTango_1_1Except.html#aea2efa05e2b0f46a343061cf88655547>`__
(const string &reason, const string &desc, const char \*origin,
Tango::ErrSeverity sever=Tango::ERR)

 

| Generate and throw a TANGO DevFailed exception.
`More... <#aea2efa05e2b0f46a343061cf88655547>`__

 

static void 

`throw\_exception <../../df/d37/classTango_1_1Except.html#a13ecdf493972a076fcf3627624198cce>`__
(const string &reason, const char \*desc, const string &origin,
Tango::ErrSeverity sever=Tango::ERR)

 

| Generate and throw a TANGO DevFailed exception.
`More... <#a13ecdf493972a076fcf3627624198cce>`__

 

static void 

`throw\_exception <../../df/d37/classTango_1_1Except.html#ac7a9b59a82aa568890f75c0232e68824>`__
(const string &reason, const char \*desc, const char \*origin,
Tango::ErrSeverity sever=Tango::ERR)

 

| Generate and throw a TANGO DevFailed exception.
`More... <#ac7a9b59a82aa568890f75c0232e68824>`__

 

static void 

`throw\_exception <../../df/d37/classTango_1_1Except.html#ac7d152b9c381a9ff2202224404b4df34>`__
(const char \*reason, const string &desc, const string &origin,
Tango::ErrSeverity sever=Tango::ERR)

 

| Generate and throw a TANGO DevFailed exception.
`More... <#ac7d152b9c381a9ff2202224404b4df34>`__

 

static void 

`throw\_exception <../../df/d37/classTango_1_1Except.html#ae1125b916a127f9b75832b018eb98ede>`__
(const char \*reason, const string &desc, const char \*origin,
Tango::ErrSeverity sever=Tango::ERR)

 

| Generate and throw a TANGO DevFailed exception.
`More... <#ae1125b916a127f9b75832b018eb98ede>`__

 

static void 

`throw\_exception <../../df/d37/classTango_1_1Except.html#a92359694cca28325fd6480f87e4b9668>`__
(const char \*reason, const char \*desc, const string &origin,
Tango::ErrSeverity sever=Tango::ERR)

 

| Generate and throw a TANGO DevFailed exception.
`More... <#a92359694cca28325fd6480f87e4b9668>`__

 

static void 

`throw\_exception <../../df/d37/classTango_1_1Except.html#a379a9cc1c1ccfc574ffecd135279e13f>`__
(const string &reason, const string &desc, char \*origin,
Tango::ErrSeverity sever=Tango::ERR)

 

| Generate and throw a TANGO DevFailed exception.
`More... <#a379a9cc1c1ccfc574ffecd135279e13f>`__

 

static void 

`throw\_exception <../../df/d37/classTango_1_1Except.html#a8a7e6834550169c1b9bd4c6cd822bd58>`__
(const string &reason, char \*desc, const string &origin,
Tango::ErrSeverity sever=Tango::ERR)

 

| Generate and throw a TANGO DevFailed exception.
`More... <#a8a7e6834550169c1b9bd4c6cd822bd58>`__

 

static void 

`throw\_exception <../../df/d37/classTango_1_1Except.html#a81dc475cd517c75e49c188bb91fd0e60>`__
(const string &reason, char \*desc, char \*origin, Tango::ErrSeverity
sever=Tango::ERR)

 

| Generate and throw a TANGO DevFailed exception.
`More... <#a81dc475cd517c75e49c188bb91fd0e60>`__

 

static void 

`throw\_exception <../../df/d37/classTango_1_1Except.html#a81a64fad0f2d00d7e9eae178fe986ea8>`__
(char \*reason, const string &desc, const string &origin,
Tango::ErrSeverity sever=Tango::ERR)

 

| Generate and throw a TANGO DevFailed exception.
`More... <#a81a64fad0f2d00d7e9eae178fe986ea8>`__

 

static void 

`throw\_exception <../../df/d37/classTango_1_1Except.html#a99d02e0220c93333faf67f1b680c38c1>`__
(char \*reason, const string &desc, char \*origin, Tango::ErrSeverity
sever=Tango::ERR)

 

| Generate and throw a TANGO DevFailed exception.
`More... <#a99d02e0220c93333faf67f1b680c38c1>`__

 

static void 

`throw\_exception <../../df/d37/classTango_1_1Except.html#a51c66f4b7d4ef481676117b5db783695>`__
(char \*reason, char \*desc, const string &origin, Tango::ErrSeverity
sever=Tango::ERR)

 

| Generate and throw a TANGO DevFailed exception.
`More... <#a51c66f4b7d4ef481676117b5db783695>`__

 

Re-throw exception inline methods (static)

static void 

`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a9c3792241214eac89e7fbdd91646b67a>`__
(Tango::DevFailed &ex, const char \*reason, const char \*desc, const
char \*origin, Tango::ErrSeverity sever=Tango::ERR)

 

| Re-throw a TANGO DevFailed exception with one more error.
`More... <#a9c3792241214eac89e7fbdd91646b67a>`__

 

static void 

`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#ab892eac30e082eca52af8c57f245e46e>`__
(Tango::DevFailed &ex, const char \*reason, const char \*desc, char
\*origin, Tango::ErrSeverity sever=Tango::ERR)

 

| Re-throw a TANGO DevFailed exception with one more error.
`More... <#ab892eac30e082eca52af8c57f245e46e>`__

 

static void 

`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a498aaee0525e6650bb17e209581837f8>`__
(Tango::DevFailed &ex, const char \*reason, char \*desc, const char
\*origin, Tango::ErrSeverity sever=Tango::ERR)

 

| Re-throw a TANGO DevFailed exception with one more error.
`More... <#a498aaee0525e6650bb17e209581837f8>`__

 

static void 

`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a0422b78fa9a5632a46f3c617917ea80f>`__
(Tango::DevFailed &ex, const char \*reason, char \*desc, char \*origin,
Tango::ErrSeverity sever=Tango::ERR)

 

| Re-throw a TANGO DevFailed exception with one more error.
`More... <#a0422b78fa9a5632a46f3c617917ea80f>`__

 

static void 

`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a8896fdbe1a3bbe7b3aee6930a3d01b68>`__
(Tango::DevFailed &ex, char \*reason, const char \*desc, const char
\*origin, Tango::ErrSeverity sever=Tango::ERR)

 

| Re-throw a TANGO DevFailed exception with one more error.
`More... <#a8896fdbe1a3bbe7b3aee6930a3d01b68>`__

 

static void 

`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a83510f679847371ba4ac8813e82fc14f>`__
(Tango::DevFailed &ex, char \*reason, const char \*desc, char \*origin,
Tango::ErrSeverity sever=Tango::ERR)

 

| Re-throw a TANGO DevFailed exception with one more error.
`More... <#a83510f679847371ba4ac8813e82fc14f>`__

 

static void 

`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#aa01396d9679d7b260a31a61735bf4004>`__
(Tango::DevFailed &ex, char \*reason, char \*desc, const char \*origin,
Tango::ErrSeverity sever=Tango::ERR)

 

| Re-throw a TANGO DevFailed exception with one more error.
`More... <#aa01396d9679d7b260a31a61735bf4004>`__

 

static void 

`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#ae2c8a7188665f1cd16f448aa4ab83d17>`__
(Tango::DevFailed &ex, char \*reason, char \*desc, char \*origin,
Tango::ErrSeverity sever=Tango::ERR)

 

| Re-throw a TANGO DevFailed exception with one more error.
`More... <#ae2c8a7188665f1cd16f448aa4ab83d17>`__

 

static void 

`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#ace5f51b25e895260bb85b318d4e4f59c>`__
(Tango::DevFailed &ex, const string &reason, const string &desc, const
string &origin, Tango::ErrSeverity sever=Tango::ERR)

 

| Re-throw a TANGO DevFailed exception with one more error.
`More... <#ace5f51b25e895260bb85b318d4e4f59c>`__

 

static void 

`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#aeba14e603df6a856739c7734859c50f9>`__
(Tango::DevFailed &ex, const string &reason, const string &desc, const
char \*origin, Tango::ErrSeverity sever=Tango::ERR)

 

| Re-throw a TANGO DevFailed exception with one more error.
`More... <#aeba14e603df6a856739c7734859c50f9>`__

 

static void 

`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a03a3ffc68c976acb58a8e61eb50fcad6>`__
(Tango::DevFailed &ex, const string &reason, const char \*desc, const
string &origin, Tango::ErrSeverity sever=Tango::ERR)

 

| Re-throw a TANGO DevFailed exception with one more error.
`More... <#a03a3ffc68c976acb58a8e61eb50fcad6>`__

 

static void 

`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a1ca76b2d4a5b22d0a2079e3889b12a9e>`__
(Tango::DevFailed &ex, const string &reason, const char \*desc, const
char \*origin, Tango::ErrSeverity sever=Tango::ERR)

 

| Re-throw a TANGO DevFailed exception with one more error.
`More... <#a1ca76b2d4a5b22d0a2079e3889b12a9e>`__

 

static void 

`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#aa28f7d876b6967235e854555fc2fe1ba>`__
(Tango::DevFailed &ex, const char \*reason, const string &desc, const
string &origin, Tango::ErrSeverity sever=Tango::ERR)

 

| Re-throw a TANGO DevFailed exception with one more error.
`More... <#aa28f7d876b6967235e854555fc2fe1ba>`__

 

static void 

`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a93e9e068103c707d2c4931f8c7804ef8>`__
(Tango::DevFailed &ex, const char \*reason, const string &desc, const
char \*origin, Tango::ErrSeverity sever=Tango::ERR)

 

| Re-throw a TANGO DevFailed exception with one more error.
`More... <#a93e9e068103c707d2c4931f8c7804ef8>`__

 

static void 

`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a1d0f06fa487f3506e49cad58d36e6ba0>`__
(Tango::DevFailed &ex, const char \*reason, const char \*desc, const
string &origin, Tango::ErrSeverity sever=Tango::ERR)

 

| Re-throw a TANGO DevFailed exception with one more error.
`More... <#a1d0f06fa487f3506e49cad58d36e6ba0>`__

 

static void 

`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a73f743dfaac89212eeb994bb40e79577>`__
(Tango::DevFailed &ex, const string &reason, const string &desc, char
\*origin, Tango::ErrSeverity sever=Tango::ERR)

 

| Re-throw a TANGO DevFailed exception with one more error.
`More... <#a73f743dfaac89212eeb994bb40e79577>`__

 

static void 

`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a1a0b86d7563895673901bbfb9e862b9b>`__
(Tango::DevFailed &ex, const string &reason, char \*desc, const string
&origin, Tango::ErrSeverity sever=Tango::ERR)

 

| Re-throw a TANGO DevFailed exception with one more error.
`More... <#a1a0b86d7563895673901bbfb9e862b9b>`__

 

static void 

`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#ab919ac526ab5cc7912d98df37989a96d>`__
(Tango::DevFailed &ex, const string &reason, char \*desc, char \*origin,
Tango::ErrSeverity sever=Tango::ERR)

 

| Re-throw a TANGO DevFailed exception with one more error.
`More... <#ab919ac526ab5cc7912d98df37989a96d>`__

 

static void 

`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#aa52f5b4614aaa58d60a2fc830ef23ba6>`__
(Tango::DevFailed &ex, char \*reason, const string &desc, const string
&origin, Tango::ErrSeverity sever=Tango::ERR)

 

| Re-throw a TANGO DevFailed exception with one more error.
`More... <#aa52f5b4614aaa58d60a2fc830ef23ba6>`__

 

static void 

`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a28f9a09de30e050f27d879e1120d3ad2>`__
(Tango::DevFailed &ex, char \*reason, const string &desc, char \*origin,
Tango::ErrSeverity sever=Tango::ERR)

 

| Re-throw a TANGO DevFailed exception with one more error.
`More... <#a28f9a09de30e050f27d879e1120d3ad2>`__

 

static void 

`re\_throw\_exception <../../df/d37/classTango_1_1Except.html#a42d1f2a98eb402a268e582128ddd61ab>`__
(Tango::DevFailed &ex, char \*reason, char \*desc, const string &origin,
Tango::ErrSeverity sever=Tango::ERR)

 

| Re-throw a TANGO DevFailed exception with one more error.
`More... <#a42d1f2a98eb402a268e582128ddd61ab>`__

 

Other throw exception methods

static void 

`throw\_exception <../../df/d37/classTango_1_1Except.html#a1b8717bff6543c006432b21f75bfbc91>`__
(const CORBA::SystemException &ex, const char \*origin)

 

| Generate and throw a TANGO DevFailed exception.
`More... <#a1b8717bff6543c006432b21f75bfbc91>`__

 

static void 

`throw\_exception <../../df/d37/classTango_1_1Except.html#af5e4556620778aafe5f4ac804d2487f3>`__
(const CORBA::SystemException &ex, char \*origin)

 

| Generate and throw a TANGO DevFailed exception.
`More... <#af5e4556620778aafe5f4ac804d2487f3>`__

 

static void 

`throw\_exception <../../df/d37/classTango_1_1Except.html#aa48033af1929e523868abce480161902>`__
(const CORBA::SystemException &ex, const string &origin)

 

| Generate and throw a TANGO DevFailed exception.
`More... <#aa48033af1929e523868abce480161902>`__

 

static void 

`throw\_named\_exception <../../df/d37/classTango_1_1Except.html#a79a7b2e44c9584e8795042c1ff7a92cc>`__
(const char \*att\_name, const char \*reason, const char \*desc, const
char \*origin, Tango::ErrSeverity sever=Tango::ERR)

 

| Throw a TANGO MultiDevFailed exception.
`More... <#a79a7b2e44c9584e8795042c1ff7a92cc>`__

 

static void 

`throw\_named\_exception <../../df/d37/classTango_1_1Except.html#a55ba95758fa392f750ad9b84d0a636f8>`__
(vector< string > &atts, const char \*reason, const char \*desc, const
char \*origin, Tango::ErrSeverity sever=Tango::ERR)

 

| Throw a TANGO MultiDevFailed exception.
`More... <#a55ba95758fa392f750ad9b84d0a636f8>`__

 

static void 

`throw\_named\_exception <../../df/d37/classTango_1_1Except.html#a8df2d695cd46b604cf136e5096a4514a>`__
(`Tango::DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*d,
long att\_idx, const char \*reason, const char \*desc, const char
\*origin, Tango::ErrSeverity sever=Tango::ERR)

 

| Throw a TANGO MultiDevFailed exception.
`More... <#a8df2d695cd46b604cf136e5096a4514a>`__

 

static void 

`throw\_named\_exception <../../df/d37/classTango_1_1Except.html#a3c79b097902506591430124f8db3341a>`__
(`Tango::DeviceImpl <../../d3/d62/classTango_1_1DeviceImpl.html>`__ \*d,
vector< long > &atts, const char \*reason, const char \*desc, const char
\*origin, Tango::ErrSeverity sever=Tango::ERR)

 

| Throw a TANGO MultiDevFailed exception.
`More... <#a3c79b097902506591430124f8db3341a>`__

 

static bool 

`compare\_exception <../../df/d37/classTango_1_1Except.html#ae6c9e03693b15d5645ce0e6515c09776>`__
(Tango::DevFailed &ex1, Tango::DevFailed &ex2)

 

| Compare two `Tango <../../de/ddf/namespaceTango.html>`__ DevFailed
exceptions for equality.
`More... <#ae6c9e03693b15d5645ce0e6515c09776>`__

 

Detailed Description
--------------------

Container class for all exception related methods.

Most of these methods are static methods

$Author$ $Revision$

Member Function Documentation
-----------------------------

+--------------------------------------+--------------------------------------+
| +----------------------------------- | static                               |
| --------------+-----+--------------- |                                      |
| --------+----------+                 |                                      |
| | static bool Tango::Except::compare |                                      |
| \_exception   | (   | Tango::DevFail |                                      |
| ed &    | *ex1*,   |                 |                                      |
| +----------------------------------- |                                      |
| --------------+-----+--------------- |                                      |
| --------+----------+                 |                                      |
| |                                    |                                      |
|               |     | Tango::DevFail |                                      |
| ed &    | *ex2*    |                 |                                      |
| +----------------------------------- |                                      |
| --------------+-----+--------------- |                                      |
| --------+----------+                 |                                      |
| |                                    |                                      |
|               | )   |                |                                      |
|         |          |                 |                                      |
| +----------------------------------- |                                      |
| --------------+-----+--------------- |                                      |
| --------+----------+                 |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Compare two `Tango <../../de/ddf/namespaceTango.html>`__ DevFailed
exceptions for equality.

The two DevFailed exceptions are verified by comparing the reason,
origin, description and severity of all exceptions in the error stack.
The strings reason, origin and description are compared literally. Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +-------+----------------------------------+
    | ex1   | The first DevFailed exception    |
    +-------+----------------------------------+
    | ex2   | The second DevFailed exception   |
    +-------+----------------------------------+

Returns
    A boolean set to true if the two exceptions are equal

+--------------------------------------+--------------------------------------+
| +----------------------------------- | static                               |
| ---------------+-----+-------------- |                                      |
| ------------------+--------+-----+-- |                                      |
| --+                                  |                                      |
| | static void Tango::Except::print\_ |                                      |
| error\_stack   | (   | const Tango:: |                                      |
| DevErrorList &    | *ex*   | )   |   |                                      |
|   |                                  |                                      |
| +----------------------------------- |                                      |
| ---------------+-----+-------------- |                                      |
| ------------------+--------+-----+-- |                                      |
| --+                                  |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Print a TANGO error stack.

Print all the details of a TANGO error stack.

Parameters
    +------+-----------------------------+
    | ex   | The error stack reference   |
    +------+-----------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | static                               |
| ------------+-----+----------------- |                                      |
| ------------+--------+-----+----+    |                                      |
| | static void Tango::Except::print\_ |                                      |
| exception   | (   | const CORBA::Exc |                                      |
| eption &    | *ex*   | )   |    |    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------------+--------+-----+----+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Print a TANGO exception.

Print all the details of a TANGO exception.

Parameters
    +------+----------------------------------+
    | ex   | The exception object reference   |
    +------+----------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| | static void Tango::Except::re\_thr |                                      |
| ow\_exception   | (   | Tango::DevFa |                                      |
| iled &    | *ex*,                    |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const char \ |                                      |
| *         | *reason*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const char \ |                                      |
| *         | *desc*,                  |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const char \ |                                      |
| *         | *origin*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | Tango::ErrSe |                                      |
| verity    | *sever* = ``Tango::ERR`` |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 | )   |              |                                      |
|           |                          |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Re-throw a TANGO DevFailed exception with one more error.

The exception is re-thrown with one more DevError object. A default
value "Tango::ERR" is defined for the new DevError severity field. Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | ex       | The DevFailed exception                        |
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| | static void Tango::Except::re\_thr |                                      |
| ow\_exception   | (   | Tango::DevFa |                                      |
| iled &    | *ex*,                    |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const char \ |                                      |
| *         | *reason*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const char \ |                                      |
| *         | *desc*,                  |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | char \*      |                                      |
|           | *origin*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | Tango::ErrSe |                                      |
| verity    | *sever* = ``Tango::ERR`` |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 | )   |              |                                      |
|           |                          |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Re-throw a TANGO DevFailed exception with one more error.

The exception is re-thrown with one more DevError object. A default
value "Tango::ERR" is defined for the new DevError severity field. The
memory used by the origin parameter will be freed by this method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | ex       | The DevFailed exception                        |
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| | static void Tango::Except::re\_thr |                                      |
| ow\_exception   | (   | Tango::DevFa |                                      |
| iled &    | *ex*,                    |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const char \ |                                      |
| *         | *reason*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | char \*      |                                      |
|           | *desc*,                  |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const char \ |                                      |
| *         | *origin*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | Tango::ErrSe |                                      |
| verity    | *sever* = ``Tango::ERR`` |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 | )   |              |                                      |
|           |                          |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Re-throw a TANGO DevFailed exception with one more error.

The exception is re-thrown with one more DevError object. A default
value "Tango::ERR" is defined for the new DevError severity field. The
memory used by the desc parameter will be freed by this method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | ex       | The DevFailed exception                        |
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| | static void Tango::Except::re\_thr |                                      |
| ow\_exception   | (   | Tango::DevFa |                                      |
| iled &    | *ex*,                    |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const char \ |                                      |
| *         | *reason*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | char \*      |                                      |
|           | *desc*,                  |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | char \*      |                                      |
|           | *origin*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | Tango::ErrSe |                                      |
| verity    | *sever* = ``Tango::ERR`` |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 | )   |              |                                      |
|           |                          |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Re-throw a TANGO DevFailed exception with one more error.

The exception is re-thrown with one more DevError object. A default
value "Tango::ERR" is defined for the new DevError severity field. The
memory used by the origin and desc parameters will be freed by this
method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | ex       | The DevFailed exception                        |
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| | static void Tango::Except::re\_thr |                                      |
| ow\_exception   | (   | Tango::DevFa |                                      |
| iled &    | *ex*,                    |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | char \*      |                                      |
|           | *reason*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const char \ |                                      |
| *         | *desc*,                  |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const char \ |                                      |
| *         | *origin*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | Tango::ErrSe |                                      |
| verity    | *sever* = ``Tango::ERR`` |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 | )   |              |                                      |
|           |                          |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Re-throw a TANGO DevFailed exception with one more error.

The exception is re-thrown with one more DevError object. A default
value "Tango::ERR" is defined for the new DevError severity field. The
memory used by the reason parameter will be freed by this method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | ex       | The DevFailed exception                        |
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| | static void Tango::Except::re\_thr |                                      |
| ow\_exception   | (   | Tango::DevFa |                                      |
| iled &    | *ex*,                    |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | char \*      |                                      |
|           | *reason*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const char \ |                                      |
| *         | *desc*,                  |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | char \*      |                                      |
|           | *origin*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | Tango::ErrSe |                                      |
| verity    | *sever* = ``Tango::ERR`` |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 | )   |              |                                      |
|           |                          |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Re-throw a TANGO DevFailed exception with one more error.

The exception is re-thrown with one more DevError object. A default
value "Tango::ERR" is defined for the new DevError severity field. The
memory used by the reason and origin parameters will be freed by this
method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | ex       | The DevFailed exception                        |
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| | static void Tango::Except::re\_thr |                                      |
| ow\_exception   | (   | Tango::DevFa |                                      |
| iled &    | *ex*,                    |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | char \*      |                                      |
|           | *reason*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | char \*      |                                      |
|           | *desc*,                  |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const char \ |                                      |
| *         | *origin*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | Tango::ErrSe |                                      |
| verity    | *sever* = ``Tango::ERR`` |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 | )   |              |                                      |
|           |                          |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Re-throw a TANGO DevFailed exception with one more error.

The exception is re-thrown with one more DevError object. A default
value "Tango::ERR" is defined for the new DevError severity field. The
memory used by the reason and desc parameters will be freed by this
method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | ex       | The DevFailed exception                        |
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| | static void Tango::Except::re\_thr |                                      |
| ow\_exception   | (   | Tango::DevFa |                                      |
| iled &    | *ex*,                    |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | char \*      |                                      |
|           | *reason*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | char \*      |                                      |
|           | *desc*,                  |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | char \*      |                                      |
|           | *origin*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | Tango::ErrSe |                                      |
| verity    | *sever* = ``Tango::ERR`` |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 | )   |              |                                      |
|           |                          |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Re-throw a TANGO DevFailed exception with one more error.

The exception is re-thrown with one more DevError object. A default
value "Tango::ERR" is defined for the new DevError severity field. The
memory used by the origin, reason and desc parameters will be freed by
this method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | ex       | The DevFailed exception                        |
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| | static void Tango::Except::re\_thr |                                      |
| ow\_exception   | (   | Tango::DevFa |                                      |
| iled &    | *ex*,                    |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const string |                                      |
|  &        | *reason*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const string |                                      |
|  &        | *desc*,                  |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const string |                                      |
|  &        | *origin*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | Tango::ErrSe |                                      |
| verity    | *sever* = ``Tango::ERR`` |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 | )   |              |                                      |
|           |                          |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Re-throw a TANGO DevFailed exception with one more error.

The exception is re-thrown with one more DevError object. A default
value "Tango::ERR" is defined for the new DevError severity field. Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | ex       | The DevFailed exception                        |
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| | static void Tango::Except::re\_thr |                                      |
| ow\_exception   | (   | Tango::DevFa |                                      |
| iled &    | *ex*,                    |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const string |                                      |
|  &        | *reason*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const string |                                      |
|  &        | *desc*,                  |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const char \ |                                      |
| *         | *origin*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | Tango::ErrSe |                                      |
| verity    | *sever* = ``Tango::ERR`` |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 | )   |              |                                      |
|           |                          |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Re-throw a TANGO DevFailed exception with one more error.

The exception is re-thrown with one more DevError object. A default
value "Tango::ERR" is defined for the new DevError severity field. Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | ex       | The DevFailed exception                        |
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| | static void Tango::Except::re\_thr |                                      |
| ow\_exception   | (   | Tango::DevFa |                                      |
| iled &    | *ex*,                    |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const string |                                      |
|  &        | *reason*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const char \ |                                      |
| *         | *desc*,                  |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const string |                                      |
|  &        | *origin*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | Tango::ErrSe |                                      |
| verity    | *sever* = ``Tango::ERR`` |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 | )   |              |                                      |
|           |                          |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Re-throw a TANGO DevFailed exception with one more error.

The exception is re-thrown with one more DevError object. A default
value "Tango::ERR" is defined for the new DevError severity field. Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | ex       | The DevFailed exception                        |
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| | static void Tango::Except::re\_thr |                                      |
| ow\_exception   | (   | Tango::DevFa |                                      |
| iled &    | *ex*,                    |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const string |                                      |
|  &        | *reason*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const char \ |                                      |
| *         | *desc*,                  |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const char \ |                                      |
| *         | *origin*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | Tango::ErrSe |                                      |
| verity    | *sever* = ``Tango::ERR`` |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 | )   |              |                                      |
|           |                          |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Re-throw a TANGO DevFailed exception with one more error.

The exception is re-thrown with one more DevError object. A default
value "Tango::ERR" is defined for the new DevError severity field. Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | ex       | The DevFailed exception                        |
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| | static void Tango::Except::re\_thr |                                      |
| ow\_exception   | (   | Tango::DevFa |                                      |
| iled &    | *ex*,                    |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const char \ |                                      |
| *         | *reason*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const string |                                      |
|  &        | *desc*,                  |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const string |                                      |
|  &        | *origin*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | Tango::ErrSe |                                      |
| verity    | *sever* = ``Tango::ERR`` |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 | )   |              |                                      |
|           |                          |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Re-throw a TANGO DevFailed exception with one more error.

The exception is re-thrown with one more DevError object. A default
value "Tango::ERR" is defined for the new DevError severity field. Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | ex       | The DevFailed exception                        |
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| | static void Tango::Except::re\_thr |                                      |
| ow\_exception   | (   | Tango::DevFa |                                      |
| iled &    | *ex*,                    |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const char \ |                                      |
| *         | *reason*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const string |                                      |
|  &        | *desc*,                  |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const char \ |                                      |
| *         | *origin*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | Tango::ErrSe |                                      |
| verity    | *sever* = ``Tango::ERR`` |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 | )   |              |                                      |
|           |                          |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Re-throw a TANGO DevFailed exception with one more error.

The exception is re-thrown with one more DevError object. A default
value "Tango::ERR" is defined for the new DevError severity field. Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | ex       | The DevFailed exception                        |
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| | static void Tango::Except::re\_thr |                                      |
| ow\_exception   | (   | Tango::DevFa |                                      |
| iled &    | *ex*,                    |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const char \ |                                      |
| *         | *reason*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const char \ |                                      |
| *         | *desc*,                  |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const string |                                      |
|  &        | *origin*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | Tango::ErrSe |                                      |
| verity    | *sever* = ``Tango::ERR`` |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 | )   |              |                                      |
|           |                          |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Re-throw a TANGO DevFailed exception with one more error.

The exception is re-thrown with one more DevError object. A default
value "Tango::ERR" is defined for the new DevError severity field. Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | ex       | The DevFailed exception                        |
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| | static void Tango::Except::re\_thr |                                      |
| ow\_exception   | (   | Tango::DevFa |                                      |
| iled &    | *ex*,                    |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const string |                                      |
|  &        | *reason*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const string |                                      |
|  &        | *desc*,                  |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | char \*      |                                      |
|           | *origin*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | Tango::ErrSe |                                      |
| verity    | *sever* = ``Tango::ERR`` |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 | )   |              |                                      |
|           |                          |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Re-throw a TANGO DevFailed exception with one more error.

The exception is re-thrown with one more DevError object. A default
value "Tango::ERR" is defined for the new DevError severity field. The
memory used by the origin parameter will be freed by this method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | ex       | The DevFailed exception                        |
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| | static void Tango::Except::re\_thr |                                      |
| ow\_exception   | (   | Tango::DevFa |                                      |
| iled &    | *ex*,                    |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const string |                                      |
|  &        | *reason*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | char \*      |                                      |
|           | *desc*,                  |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const string |                                      |
|  &        | *origin*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | Tango::ErrSe |                                      |
| verity    | *sever* = ``Tango::ERR`` |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 | )   |              |                                      |
|           |                          |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Re-throw a TANGO DevFailed exception with one more error.

The exception is re-thrown with one more DevError object. A default
value "Tango::ERR" is defined for the new DevError severity field. The
memory used by the desc parameter will be freed by this method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | ex       | The DevFailed exception                        |
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| | static void Tango::Except::re\_thr |                                      |
| ow\_exception   | (   | Tango::DevFa |                                      |
| iled &    | *ex*,                    |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const string |                                      |
|  &        | *reason*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | char \*      |                                      |
|           | *desc*,                  |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | char \*      |                                      |
|           | *origin*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | Tango::ErrSe |                                      |
| verity    | *sever* = ``Tango::ERR`` |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 | )   |              |                                      |
|           |                          |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Re-throw a TANGO DevFailed exception with one more error.

The exception is re-thrown with one more DevError object. A default
value "Tango::ERR" is defined for the new DevError severity field. The
memory used by the origin and desc parameters will be freed by this
method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | ex       | The DevFailed exception                        |
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| | static void Tango::Except::re\_thr |                                      |
| ow\_exception   | (   | Tango::DevFa |                                      |
| iled &    | *ex*,                    |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | char \*      |                                      |
|           | *reason*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const string |                                      |
|  &        | *desc*,                  |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const string |                                      |
|  &        | *origin*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | Tango::ErrSe |                                      |
| verity    | *sever* = ``Tango::ERR`` |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 | )   |              |                                      |
|           |                          |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Re-throw a TANGO DevFailed exception with one more error.

The exception is re-thrown with one more DevError object. A default
value "Tango::ERR" is defined for the new DevError severity field. The
memory used by the reason parameter will be freed by this method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | ex       | The DevFailed exception                        |
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| | static void Tango::Except::re\_thr |                                      |
| ow\_exception   | (   | Tango::DevFa |                                      |
| iled &    | *ex*,                    |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | char \*      |                                      |
|           | *reason*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const string |                                      |
|  &        | *desc*,                  |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | char \*      |                                      |
|           | *origin*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | Tango::ErrSe |                                      |
| verity    | *sever* = ``Tango::ERR`` |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 | )   |              |                                      |
|           |                          |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Re-throw a TANGO DevFailed exception with one more error.

The exception is re-thrown with one more DevError object. A default
value "Tango::ERR" is defined for the new DevError severity field. The
memory used by the reason and origin parameters will be freed by this
method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | ex       | The DevFailed exception                        |
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| | static void Tango::Except::re\_thr |                                      |
| ow\_exception   | (   | Tango::DevFa |                                      |
| iled &    | *ex*,                    |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | char \*      |                                      |
|           | *reason*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | char \*      |                                      |
|           | *desc*,                  |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | const string |                                      |
|  &        | *origin*,                |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 |     | Tango::ErrSe |                                      |
| verity    | *sever* = ``Tango::ERR`` |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
| |                                    |                                      |
|                 | )   |              |                                      |
|           |                          |                                      |
|     |                                |                                      |
| +----------------------------------- |                                      |
| ----------------+-----+------------- |                                      |
| ----------+------------------------- |                                      |
| ----+                                |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Re-throw a TANGO DevFailed exception with one more error.

The exception is re-thrown with one more DevError object. A default
value "Tango::ERR" is defined for the new DevError severity field. The
memory used by the reason and desc parameter will be freed by this
method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | ex       | The DevFailed exception                        |
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| | static void Tango::Except::throw\_ |                                      |
| exception   | (   | const char \*    |                                      |
|       | *reason*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const char \*    |                                      |
|       | *desc*,                      |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const char \*    |                                      |
|       | *origin*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | Tango::ErrSeveri |                                      |
| ty    | *sever* = ``Tango::ERR``     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             | )   |                  |                                      |
|       |                              |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Generate and throw a TANGO DevFailed exception.

The exception is created with a single DevError object. A default value
"Tango::ERR" is defined for the DevError severity field. Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

Referenced by
`Tango::DeviceImpl::get\_db\_device() <../../d3/d62/classTango_1_1DeviceImpl.html#a6a5e05c240b76db97a357703bdd30552>`__,
`Tango::AttrProp< DevLong
>::get\_val() <../../d8/d68/classTango_1_1AttrProp.html#a0c80445d1ce52c04813778057ee1bc22>`__,
`Tango::DoubleAttrProp< DevDouble
>::get\_val() <../../d5/da9/classTango_1_1DoubleAttrProp.html#a377133f8bb35b0c6609fd0fe024d84c6>`__,
and
`Tango::return\_empty\_any() <../../de/ddf/namespaceTango.html#a3b3bd64ad7f36f411ad17050d314a460>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| | static void Tango::Except::throw\_ |                                      |
| exception   | (   | const char \*    |                                      |
|       | *reason*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const char \*    |                                      |
|       | *desc*,                      |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | char \*          |                                      |
|       | *origin*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | Tango::ErrSeveri |                                      |
| ty    | *sever* = ``Tango::ERR``     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             | )   |                  |                                      |
|       |                              |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Generate and throw a TANGO DevFailed exception.

The exception is created with a single DevError object. A default value
"Tango::ERR" is defined for the DevError severity field. The memory used
by the origin parameter will be freed by this method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| | static void Tango::Except::throw\_ |                                      |
| exception   | (   | const char \*    |                                      |
|       | *reason*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | char \*          |                                      |
|       | *desc*,                      |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const char \*    |                                      |
|       | *origin*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | Tango::ErrSeveri |                                      |
| ty    | *sever* = ``Tango::ERR``     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             | )   |                  |                                      |
|       |                              |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Generate and throw a TANGO DevFailed exception.

The exception is created with a single DevError object. A default value
"Tango::ERR" is defined for the DevError severity field. The memory used
by the desc parameter will be freed by this method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| | static void Tango::Except::throw\_ |                                      |
| exception   | (   | const char \*    |                                      |
|       | *reason*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | char \*          |                                      |
|       | *desc*,                      |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | char \*          |                                      |
|       | *origin*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | Tango::ErrSeveri |                                      |
| ty    | *sever* = ``Tango::ERR``     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             | )   |                  |                                      |
|       |                              |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Generate and throw a TANGO DevFailed exception.

The exception is created with a single DevError object. A default value
"Tango::ERR" is defined for the DevError severity field. The memory used
by the origin and desc parameters will be freed by this method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| | static void Tango::Except::throw\_ |                                      |
| exception   | (   | char \*          |                                      |
|       | *reason*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const char \*    |                                      |
|       | *desc*,                      |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const char \*    |                                      |
|       | *origin*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | Tango::ErrSeveri |                                      |
| ty    | *sever* = ``Tango::ERR``     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             | )   |                  |                                      |
|       |                              |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Generate and throw a TANGO DevFailed exception.

The exception is created with a single DevError object. A default value
"Tango::ERR" is defined for the DevError severity field. The memory used
by the reason parameter will be freed by this method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| | static void Tango::Except::throw\_ |                                      |
| exception   | (   | char \*          |                                      |
|       | *reason*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const char \*    |                                      |
|       | *desc*,                      |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | char \*          |                                      |
|       | *origin*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | Tango::ErrSeveri |                                      |
| ty    | *sever* = ``Tango::ERR``     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             | )   |                  |                                      |
|       |                              |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Generate and throw a TANGO DevFailed exception.

The exception is created with a single DevError object. A default value
"Tango::ERR" is defined for the DevError severity field. The memory used
by the reason and origin parameters will be freed by this method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| | static void Tango::Except::throw\_ |                                      |
| exception   | (   | char \*          |                                      |
|       | *reason*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | char \*          |                                      |
|       | *desc*,                      |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const char \*    |                                      |
|       | *origin*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | Tango::ErrSeveri |                                      |
| ty    | *sever* = ``Tango::ERR``     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             | )   |                  |                                      |
|       |                              |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Generate and throw a TANGO DevFailed exception.

The exception is created with a single DevError object. A default value
"Tango::ERR" is defined for the DevError severity field. The memory used
by the reason and desc parameters will be freed by this method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| | static void Tango::Except::throw\_ |                                      |
| exception   | (   | char \*          |                                      |
|       | *reason*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | char \*          |                                      |
|       | *desc*,                      |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | char \*          |                                      |
|       | *origin*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | Tango::ErrSeveri |                                      |
| ty    | *sever* = ``Tango::ERR``     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             | )   |                  |                                      |
|       |                              |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Generate and throw a TANGO DevFailed exception.

The exception is created with a single DevError object. A default value
"Tango::ERR" is defined for the DevError severity field. The memory used
by the origin, reason and desc parameters will be freed by this method
Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__
to read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| | static void Tango::Except::throw\_ |                                      |
| exception   | (   | const string &   |                                      |
|       | *reason*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const string &   |                                      |
|       | *desc*,                      |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const string &   |                                      |
|       | *origin*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | Tango::ErrSeveri |                                      |
| ty    | *sever* = ``Tango::ERR``     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             | )   |                  |                                      |
|       |                              |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Generate and throw a TANGO DevFailed exception.

The exception is created with a single DevError object. A default value
"Tango::ERR" is defined for the DevError severity field. Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| | static void Tango::Except::throw\_ |                                      |
| exception   | (   | const string &   |                                      |
|       | *reason*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const string &   |                                      |
|       | *desc*,                      |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const char \*    |                                      |
|       | *origin*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | Tango::ErrSeveri |                                      |
| ty    | *sever* = ``Tango::ERR``     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             | )   |                  |                                      |
|       |                              |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Generate and throw a TANGO DevFailed exception.

The exception is created with a single DevError object. A default value
"Tango::ERR" is defined for the DevError severity field. Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| | static void Tango::Except::throw\_ |                                      |
| exception   | (   | const string &   |                                      |
|       | *reason*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const char \*    |                                      |
|       | *desc*,                      |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const string &   |                                      |
|       | *origin*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | Tango::ErrSeveri |                                      |
| ty    | *sever* = ``Tango::ERR``     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             | )   |                  |                                      |
|       |                              |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Generate and throw a TANGO DevFailed exception.

The exception is created with a single DevError object. A default value
"Tango::ERR" is defined for the DevError severity field. Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| | static void Tango::Except::throw\_ |                                      |
| exception   | (   | const string &   |                                      |
|       | *reason*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const char \*    |                                      |
|       | *desc*,                      |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const char \*    |                                      |
|       | *origin*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | Tango::ErrSeveri |                                      |
| ty    | *sever* = ``Tango::ERR``     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             | )   |                  |                                      |
|       |                              |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Generate and throw a TANGO DevFailed exception.

The exception is created with a single DevError object. A default value
"Tango::ERR" is defined for the DevError severity field. Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| | static void Tango::Except::throw\_ |                                      |
| exception   | (   | const char \*    |                                      |
|       | *reason*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const string &   |                                      |
|       | *desc*,                      |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const string &   |                                      |
|       | *origin*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | Tango::ErrSeveri |                                      |
| ty    | *sever* = ``Tango::ERR``     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             | )   |                  |                                      |
|       |                              |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Generate and throw a TANGO DevFailed exception.

The exception is created with a single DevError object. A default value
"Tango::ERR" is defined for the DevError severity field. Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| | static void Tango::Except::throw\_ |                                      |
| exception   | (   | const char \*    |                                      |
|       | *reason*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const string &   |                                      |
|       | *desc*,                      |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const char \*    |                                      |
|       | *origin*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | Tango::ErrSeveri |                                      |
| ty    | *sever* = ``Tango::ERR``     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             | )   |                  |                                      |
|       |                              |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Generate and throw a TANGO DevFailed exception.

The exception is created with a single DevError object. A default value
"Tango::ERR" is defined for the DevError severity field. Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| | static void Tango::Except::throw\_ |                                      |
| exception   | (   | const char \*    |                                      |
|       | *reason*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const char \*    |                                      |
|       | *desc*,                      |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const string &   |                                      |
|       | *origin*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | Tango::ErrSeveri |                                      |
| ty    | *sever* = ``Tango::ERR``     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             | )   |                  |                                      |
|       |                              |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Generate and throw a TANGO DevFailed exception.

The exception is created with a single DevError object. A default value
"Tango::ERR" is defined for the DevError severity field. Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| | static void Tango::Except::throw\_ |                                      |
| exception   | (   | const string &   |                                      |
|       | *reason*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const string &   |                                      |
|       | *desc*,                      |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | char \*          |                                      |
|       | *origin*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | Tango::ErrSeveri |                                      |
| ty    | *sever* = ``Tango::ERR``     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             | )   |                  |                                      |
|       |                              |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Generate and throw a TANGO DevFailed exception.

The exception is created with a single DevError object. A default value
"Tango::ERR" is defined for the DevError severity field. The memory used
by the origin parameter will be freed by this method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| | static void Tango::Except::throw\_ |                                      |
| exception   | (   | const string &   |                                      |
|       | *reason*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | char \*          |                                      |
|       | *desc*,                      |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const string &   |                                      |
|       | *origin*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | Tango::ErrSeveri |                                      |
| ty    | *sever* = ``Tango::ERR``     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             | )   |                  |                                      |
|       |                              |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Generate and throw a TANGO DevFailed exception.

The exception is created with a single DevError object. A default value
"Tango::ERR" is defined for the DevError severity field. The memory used
by the desc parameter will be freed by this method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| | static void Tango::Except::throw\_ |                                      |
| exception   | (   | const string &   |                                      |
|       | *reason*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | char \*          |                                      |
|       | *desc*,                      |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | char \*          |                                      |
|       | *origin*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | Tango::ErrSeveri |                                      |
| ty    | *sever* = ``Tango::ERR``     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             | )   |                  |                                      |
|       |                              |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Generate and throw a TANGO DevFailed exception.

The exception is created with a single DevError object. A default value
"Tango::ERR" is defined for the DevError severity field. The memory used
by the origin and desc parameters will be freed by this method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| | static void Tango::Except::throw\_ |                                      |
| exception   | (   | char \*          |                                      |
|       | *reason*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const string &   |                                      |
|       | *desc*,                      |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const string &   |                                      |
|       | *origin*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | Tango::ErrSeveri |                                      |
| ty    | *sever* = ``Tango::ERR``     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             | )   |                  |                                      |
|       |                              |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Generate and throw a TANGO DevFailed exception.

The exception is created with a single DevError object. A default value
"Tango::ERR" is defined for the DevError severity field. The memory used
by the reason parameter will be freed by this method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| | static void Tango::Except::throw\_ |                                      |
| exception   | (   | char \*          |                                      |
|       | *reason*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const string &   |                                      |
|       | *desc*,                      |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | char \*          |                                      |
|       | *origin*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | Tango::ErrSeveri |                                      |
| ty    | *sever* = ``Tango::ERR``     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             | )   |                  |                                      |
|       |                              |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Generate and throw a TANGO DevFailed exception.

The exception is created with a single DevError object. A default value
"Tango::ERR" is defined for the DevError severity field. The memory used
by the reason and origin parameters will be freed by this method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| | static void Tango::Except::throw\_ |                                      |
| exception   | (   | char \*          |                                      |
|       | *reason*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | char \*          |                                      |
|       | *desc*,                      |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | const string &   |                                      |
|       | *origin*,                    |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             |     | Tango::ErrSeveri |                                      |
| ty    | *sever* = ``Tango::ERR``     |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
| |                                    |                                      |
|             | )   |                  |                                      |
|       |                              |                                      |
| |                                    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------+----------------------------- |                                      |
| +                                    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Generate and throw a TANGO DevFailed exception.

The exception is created with a single DevError object. A default value
"Tango::ERR" is defined for the DevError severity field. The memory used
by the reason and desc parameter will be freed by this method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | static                               |
| ------------+-----+----------------- |                                      |
| ------------------+-------------+    |                                      |
| | static void Tango::Except::throw\_ |                                      |
| exception   | (   | const CORBA::Sys |                                      |
| temException &    | *ex*,       |    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------------------+-------------+    |                                      |
| |                                    |                                      |
|             |     | const char \*    |                                      |
|                   | *origin*    |    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------------------+-------------+    |                                      |
| |                                    |                                      |
|             | )   |                  |                                      |
|                   |             |    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------------------+-------------+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Generate and throw a TANGO DevFailed exception.

The exception is created with a single DevError object. A value
"Tango::ERR" is defined for the DevError severity field. Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | ex       | A CORBA System Exception. The reason and desc fields of the DevError object will be set according to the data in this exception. The desc field is always set to API\_CorbaSysException and the reason flag is different depending on the exact type of the CORBA system exception.   |
    +----------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | origin   | The exception DevError object origin field                                                                                                                                                                                                                                            |
    +----------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | static                               |
| ------------+-----+----------------- |                                      |
| ------------------+-------------+    |                                      |
| | static void Tango::Except::throw\_ |                                      |
| exception   | (   | const CORBA::Sys |                                      |
| temException &    | *ex*,       |    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------------------+-------------+    |                                      |
| |                                    |                                      |
|             |     | char \*          |                                      |
|                   | *origin*    |    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------------------+-------------+    |                                      |
| |                                    |                                      |
|             | )   |                  |                                      |
|                   |             |    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------------------+-------------+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Generate and throw a TANGO DevFailed exception.

The exception is created with a single DevError object. A value
"Tango::ERR" is defined for the DevError severity field. Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | ex       | A CORBA System Exception. The reason and desc fields of the DevError object will be set according to the data in this exception. The desc field is always set to API\_CorbaSysException and the reason flag is different depending on the exact type of the CORBA system exception.   |
    +----------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | origin   | The exception DevError object origin field. The memory allocated for this parameter will be freed by this method.                                                                                                                                                                     |
    +----------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | static                               |
| ------------+-----+----------------- |                                      |
| ------------------+-------------+    |                                      |
| | static void Tango::Except::throw\_ |                                      |
| exception   | (   | const CORBA::Sys |                                      |
| temException &    | *ex*,       |    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------------------+-------------+    |                                      |
| |                                    |                                      |
|             |     | const string &   |                                      |
|                   | *origin*    |    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------------------+-------------+    |                                      |
| |                                    |                                      |
|             | )   |                  |                                      |
|                   |             |    |                                      |
| +----------------------------------- |                                      |
| ------------+-----+----------------- |                                      |
| ------------------+-------------+    |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Generate and throw a TANGO DevFailed exception.

The exception is created with a single DevError object. A value
"Tango::ERR" is defined for the DevError severity field. Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | ex       | A CORBA System Exception. The reason and desc fields of the DevError object will be set according to the data in this exception. The desc field is always set to API\_CorbaSysException and the reason flag is different depending on the exact type of the CORBA system exception.   |
    +----------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
    | origin   | The exception DevError object origin field. The memory allocated for this parameter will be freed by this method.                                                                                                                                                                     |
    +----------+---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+

Exceptions
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+
    | DevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **DevFailed** exception specification   |
    +-------------+------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| -------------------+-----+---------- |                                      |
| -------------+---------------------- |                                      |
| -------+                             |                                      |
| | static void Tango::Except::throw\_ |                                      |
| named\_exception   | (   | const cha |                                      |
| r \*         | *att\_name*,          |                                      |
|        |                             |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| -------------+---------------------- |                                      |
| -------+                             |                                      |
| |                                    |                                      |
|                    |     | const cha |                                      |
| r \*         | *reason*,             |                                      |
|        |                             |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| -------------+---------------------- |                                      |
| -------+                             |                                      |
| |                                    |                                      |
|                    |     | const cha |                                      |
| r \*         | *desc*,               |                                      |
|        |                             |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| -------------+---------------------- |                                      |
| -------+                             |                                      |
| |                                    |                                      |
|                    |     | const cha |                                      |
| r \*         | *origin*,             |                                      |
|        |                             |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| -------------+---------------------- |                                      |
| -------+                             |                                      |
| |                                    |                                      |
|                    |     | Tango::Er |                                      |
| rSeverity    | *sever* = ``Tango::ER |                                      |
| R``    |                             |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| -------------+---------------------- |                                      |
| -------+                             |                                      |
| |                                    |                                      |
|                    | )   |           |                                      |
|              |                       |                                      |
|        |                             |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| -------------+---------------------- |                                      |
| -------+                             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Throw a TANGO MultiDevFailed exception.

Throw a MultiDevFailed exception with one more DevError object for the
attribute with name given as first parameter. A default value
"Tango::ERR" is defined for the new DevError severity field. Note that
throwing MultiDevFailed exception is allowed only in attribute writing
methods. The memory used by the origin and desc parameters will be freed
by this method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +-------------+------------------------------------------------+
    | att\_name   | The attribute name                             |
    +-------------+------------------------------------------------+
    | reason      | The exception DevError object reason field     |
    +-------------+------------------------------------------------+
    | desc        | The exception DevError object desc field       |
    +-------------+------------------------------------------------+
    | origin      | The exception DevError object origin field     |
    +-------------+------------------------------------------------+
    | sever       | The exception DevError object severity field   |
    +-------------+------------------------------------------------+

Exceptions
    +------------------+-----------------------------------------------------------------------------------------------------------------------------------------------------+
    | MultiDevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **MultiDevFailed** exception specification   |
    +------------------+-----------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | inlinestatic                         |
| -------------------+-----+---------- |                                      |
| -------------+---------------------- |                                      |
| -------+                             |                                      |
| | static void Tango::Except::throw\_ |                                      |
| named\_exception   | (   | vector< s |                                      |
| tring > &    | *atts*,               |                                      |
|        |                             |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| -------------+---------------------- |                                      |
| -------+                             |                                      |
| |                                    |                                      |
|                    |     | const cha |                                      |
| r \*         | *reason*,             |                                      |
|        |                             |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| -------------+---------------------- |                                      |
| -------+                             |                                      |
| |                                    |                                      |
|                    |     | const cha |                                      |
| r \*         | *desc*,               |                                      |
|        |                             |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| -------------+---------------------- |                                      |
| -------+                             |                                      |
| |                                    |                                      |
|                    |     | const cha |                                      |
| r \*         | *origin*,             |                                      |
|        |                             |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| -------------+---------------------- |                                      |
| -------+                             |                                      |
| |                                    |                                      |
|                    |     | Tango::Er |                                      |
| rSeverity    | *sever* = ``Tango::ER |                                      |
| R``    |                             |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| -------------+---------------------- |                                      |
| -------+                             |                                      |
| |                                    |                                      |
|                    | )   |           |                                      |
|              |                       |                                      |
|        |                             |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| -------------+---------------------- |                                      |
| -------+                             |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Throw a TANGO MultiDevFailed exception.

Throw a MultiDevFailed exception with one more DevError object for the
attribute list with names given as first parameter. A default value
"Tango::ERR" is defined for the new DevError severity field. Note that
throwing MultiDevFailed exception is allowed only in attribute writing
methods. The memory used by the origin and desc parameters will be freed
by this method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | atts     | The attributes name vector                     |
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +------------------+-----------------------------------------------------------------------------------------------------------------------------------------------------+
    | MultiDevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **MultiDevFailed** exception specification   |
    +------------------+-----------------------------------------------------------------------------------------------------------------------------------------------------+

References
`Tango::string\_dup() <../../de/ddf/namespaceTango.html#aad612284f583ef74f309fa735c2ad5b0>`__.

+--------------------------------------+--------------------------------------+
| +----------------------------------- | static                               |
| -------------------+-----+---------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------+------- |                                      |
| ----------------------+              |                                      |
| | static void Tango::Except::throw\_ |                                      |
| named\_exception   | (   | `Tango::D |                                      |
| eviceImpl <../../d3/d62/classTango_1 |                                      |
| _1DeviceImpl.html>`__ \*    | *d*,   |                                      |
|                       |              |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------+------- |                                      |
| ----------------------+              |                                      |
| |                                    |                                      |
|                    |     | long      |                                      |
|                                      |                                      |
|                             | *att\_ |                                      |
| idx*,                 |              |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------+------- |                                      |
| ----------------------+              |                                      |
| |                                    |                                      |
|                    |     | const cha |                                      |
| r \*                                 |                                      |
|                             | *reaso |                                      |
| n*,                   |              |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------+------- |                                      |
| ----------------------+              |                                      |
| |                                    |                                      |
|                    |     | const cha |                                      |
| r \*                                 |                                      |
|                             | *desc* |                                      |
| ,                     |              |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------+------- |                                      |
| ----------------------+              |                                      |
| |                                    |                                      |
|                    |     | const cha |                                      |
| r \*                                 |                                      |
|                             | *origi |                                      |
| n*,                   |              |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------+------- |                                      |
| ----------------------+              |                                      |
| |                                    |                                      |
|                    |     | Tango::Er |                                      |
| rSeverity                            |                                      |
|                             | *sever |                                      |
| * = ``Tango::ERR``    |              |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------+------- |                                      |
| ----------------------+              |                                      |
| |                                    |                                      |
|                    | )   |           |                                      |
|                                      |                                      |
|                             |        |                                      |
|                       |              |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------+------- |                                      |
| ----------------------+              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Throw a TANGO MultiDevFailed exception.

Throw a MultiDevFailed exception with one more DevError object for one
attribute with index given as second parameter. The attributes index is
the index received by the write\_attr\_hardware() method. A default
value "Tango::ERR" is defined for the new DevError severity field. Note
that throwing MultiDevFailed exception is allowed only in attribute
writing methods.

The memory used by the origin and desc parameters will be freed by this
method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +------------+------------------------------------------------+
    | d          | The device pointer                             |
    +------------+------------------------------------------------+
    | att\_idx   | The attributes index                           |
    +------------+------------------------------------------------+
    | reason     | The exception DevError object reason field     |
    +------------+------------------------------------------------+
    | desc       | The exception DevError object desc field       |
    +------------+------------------------------------------------+
    | origin     | The exception DevError object origin field     |
    +------------+------------------------------------------------+
    | sever      | The exception DevError object severity field   |
    +------------+------------------------------------------------+

Exceptions
    +------------------+-----------------------------------------------------------------------------------------------------------------------------------------------------+
    | MultiDevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **MultiDevFailed** exception specification   |
    +------------------+-----------------------------------------------------------------------------------------------------------------------------------------------------+

+--------------------------------------+--------------------------------------+
| +----------------------------------- | static                               |
| -------------------+-----+---------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------+------- |                                      |
| ----------------------+              |                                      |
| | static void Tango::Except::throw\_ |                                      |
| named\_exception   | (   | `Tango::D |                                      |
| eviceImpl <../../d3/d62/classTango_1 |                                      |
| _1DeviceImpl.html>`__ \*    | *d*,   |                                      |
|                       |              |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------+------- |                                      |
| ----------------------+              |                                      |
| |                                    |                                      |
|                    |     | vector< l |                                      |
| ong > &                              |                                      |
|                             | *atts* |                                      |
| ,                     |              |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------+------- |                                      |
| ----------------------+              |                                      |
| |                                    |                                      |
|                    |     | const cha |                                      |
| r \*                                 |                                      |
|                             | *reaso |                                      |
| n*,                   |              |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------+------- |                                      |
| ----------------------+              |                                      |
| |                                    |                                      |
|                    |     | const cha |                                      |
| r \*                                 |                                      |
|                             | *desc* |                                      |
| ,                     |              |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------+------- |                                      |
| ----------------------+              |                                      |
| |                                    |                                      |
|                    |     | const cha |                                      |
| r \*                                 |                                      |
|                             | *origi |                                      |
| n*,                   |              |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------+------- |                                      |
| ----------------------+              |                                      |
| |                                    |                                      |
|                    |     | Tango::Er |                                      |
| rSeverity                            |                                      |
|                             | *sever |                                      |
| * = ``Tango::ERR``    |              |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------+------- |                                      |
| ----------------------+              |                                      |
| |                                    |                                      |
|                    | )   |           |                                      |
|                                      |                                      |
|                             |        |                                      |
|                       |              |                                      |
| +----------------------------------- |                                      |
| -------------------+-----+---------- |                                      |
| ------------------------------------ |                                      |
| ----------------------------+------- |                                      |
| ----------------------+              |                                      |
                                                                             
+--------------------------------------+--------------------------------------+

Throw a TANGO MultiDevFailed exception.

Throw a MultiDevFailed exception with one more DevError object for the
attribute list with indexes given as second parameter. The attributes
indexes are the index received by the write\_attr\_hardware() method. A
default value "Tango::ERR" is defined for the new DevError severity
field. Note that throwing MultiDevFailed exception is allowed only in
attribute writing methods.

The memory used by the origin and desc parameters will be freed by this
method Click
`here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to
read **DevFailed** exception specification

Parameters
    +----------+------------------------------------------------+
    | d        | The device pointer                             |
    +----------+------------------------------------------------+
    | atts     | The attributes indexes vector                  |
    +----------+------------------------------------------------+
    | reason   | The exception DevError object reason field     |
    +----------+------------------------------------------------+
    | desc     | The exception DevError object desc field       |
    +----------+------------------------------------------------+
    | origin   | The exception DevError object origin field     |
    +----------+------------------------------------------------+
    | sever    | The exception DevError object severity field   |
    +----------+------------------------------------------------+

Exceptions
    +------------------+-----------------------------------------------------------------------------------------------------------------------------------------------------+
    | MultiDevFailed   | The thrown exception. Click `here <../../../../../tango_idl/idl_html/_Tango.html#DevFailed>`__ to read **MultiDevFailed** exception specification   |
    +------------------+-----------------------------------------------------------------------------------------------------------------------------------------------------+

--------------

The documentation for this class was generated from the following file:

-  `except.h <../../dc/d65/except_8h_source.html>`__

-  `Tango <../../de/ddf/namespaceTango.html>`__
-  `Except <../../df/d37/classTango_1_1Except.html>`__
-  Generated on Fri Oct 7 2016 11:11:17 for Tango Core Classes Reference
   by |doxygen| 1.8.8

.. |Logo| image:: ../../logo.jpg
.. |doxygen| image:: ../../doxygen.png
   :target: http://www.doxygen.org/index.html
