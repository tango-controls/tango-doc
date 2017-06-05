--------------

| 

**HdbEventSubscriber Tango Cpp Class**
--------------------------------------

| 

**Contents :**

-  `Description <FullDocument.html#description>`__
-  `Properties <FullDocument.html#properties>`__
-  `Commands <FullDocument.html#commands>`__

   -  `State <FullDocument.html#cmdState>`__
   -  `Status <FullDocument.html#cmdStatus>`__
   -  `AttributeAdd <FullDocument.html#cmdAttributeAdd>`__
   -  `AttributeRemove <FullDocument.html#cmdAttributeRemove>`__
   -  `AttributeStatus <FullDocument.html#cmdAttributeStatus>`__
   -  `Start <FullDocument.html#cmdStart>`__
   -  `Stop <FullDocument.html#cmdStop>`__
   -  `AttributeStart <FullDocument.html#cmdAttributeStart>`__
   -  `AttributeStop <FullDocument.html#cmdAttributeStop>`__
   -  `ResetStatistics <FullDocument.html#cmdResetStatistics>`__
   -  `Pause <FullDocument.html#cmdPause>`__
   -  `AttributePause <FullDocument.html#cmdAttributePause>`__
   -  `SetAttributeStrategy <FullDocument.html#cmdSetAttributeStrategy>`__
   -  `GetAttributeStrategy <FullDocument.html#cmdGetAttributeStrategy>`__
   -  `StopFaulty <FullDocument.html#cmdStopFaulty>`__
   -  `SetAttributeTTL <FullDocument.html#cmdSetAttributeTTL>`__
   -  `GetAttributeTTL <FullDocument.html#cmdGetAttributeTTL>`__

-  `Attributes <FullDocument.html#attributes>`__

   -  `AttributeOkNumber <FullDocument.html#attrAttributeOkNumber>`__
   -  `AttributeNokNumber <FullDocument.html#attrAttributeNokNumber>`__
   -  `AttributePendingNumber <FullDocument.html#attrAttributePendingNumber>`__
   -  `AttributeNumber <FullDocument.html#attrAttributeNumber>`__
   -  `AttributeMaxStoreTime <FullDocument.html#attrAttributeMaxStoreTime>`__
   -  `AttributeMinStoreTime <FullDocument.html#attrAttributeMinStoreTime>`__
   -  `AttributeMaxProcessingTime <FullDocument.html#attrAttributeMaxProcessingTime>`__
   -  `AttributeMinProcessingTime <FullDocument.html#attrAttributeMinProcessingTime>`__
   -  `AttributeRecordFreq <FullDocument.html#attrAttributeRecordFreq>`__
   -  `AttributeFailureFreq <FullDocument.html#attrAttributeFailureFreq>`__
   -  `AttributeStartedNumber <FullDocument.html#attrAttributeStartedNumber>`__
   -  `AttributeStoppedNumber <FullDocument.html#attrAttributeStoppedNumber>`__
   -  `AttributeMaxPendingNumber <FullDocument.html#attrAttributeMaxPendingNumber>`__
   -  `StatisticsResetTime <FullDocument.html#attrStatisticsResetTime>`__
   -  `AttributePausedNumber <FullDocument.html#attrAttributePausedNumber>`__
   -  `Context <FullDocument.html#attrContext>`__
   -  `AttributeList <FullDocument.html#attrAttributeList>`__
   -  `AttributeOkList <FullDocument.html#attrAttributeOkList>`__
   -  `AttributeNokList <FullDocument.html#attrAttributeNokList>`__
   -  `AttributePendingList <FullDocument.html#attrAttributePendingList>`__
   -  `AttributeRecordFreqList <FullDocument.html#attrAttributeRecordFreqList>`__
   -  `AttributeFailureFreqList <FullDocument.html#attrAttributeFailureFreqList>`__
   -  `AttributeStartedList <FullDocument.html#attrAttributeStartedList>`__
   -  `AttributeStoppedList <FullDocument.html#attrAttributeStoppedList>`__
   -  `AttributeEventNumberList <FullDocument.html#attrAttributeEventNumberList>`__
   -  `AttributeErrorList <FullDocument.html#attrAttributeErrorList>`__
   -  `AttributePausedList <FullDocument.html#attrAttributePausedList>`__
   -  `AttributeStrategyList <FullDocument.html#attrAttributeStrategyList>`__
   -  `ContextsList <FullDocument.html#attrContextsList>`__
   -  `AttributeTTLList <FullDocument.html#attrAttributeTTLList>`__

-  `States <FullDocument.html#states>`__

--------------

| 
| ` <>`__

| 

**HdbEventSubscriber Class Identification :**

**HdbEventSubscriber Class Inheritance :**

`Tango::DeviceImpl <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/cpp_doc/>`__

HdbEventSubscriber

| 

| 
| **HdbEventSubscriber Class Description :**

| 

--------------

| ` <>`__
| **HdbEventSubscriber Properties :**

**Class Properties**

**Name**

**Description**

**Type**

**Default Value**

SubscribeRetryPeriod

Subscribe event retrying period in seconds.

int

| 60

StatisticsTimeWindow

Statistics time window in seconds

int

| 60

CheckPeriodicTimeoutDelay

Delay in seconds before timeout when checking periodic events

int

| 5

PollingThreadPeriod

Polling thread period in seconds.

int

| 3

LibConfiguration

Configuration for the library

String[]

none

ContextsList

Possible contexts in the form label:description

String[]

| ALWAYS:always stored
| RUN:stored during run
| SHUTDOWN:stored during shutdown
| SERVICE:stored during maintenance activities

DefaultStrategy

Default strategy to be used when not specified in the single attribute
configuration

String

| ALWAYS

| 

**Device Properties**

**Name**

**Description**

**Type**

**Default Value**

SubscribeRetryPeriod

Subscribe event retrying period in seconds.

int

| 60

AttributeList

List of configured attributes.

String[]

none

StatisticsTimeWindow

Statistics time window in seconds

int

| 60

CheckPeriodicTimeoutDelay

Delay in seconds before timeout when checking periodic events

int

| 5

PollingThreadPeriod

Polling Thread period in seconds.

int

| 3

LibConfiguration

Configuration for the library

String[]

none

ContextsList

Possible contexts in the form label:description

String[]

| ALWAYS:always stored
| RUN:stored during run
| SHUTDOWN:stored during shutdown
| SERVICE:stored during maintenance activities

DefaultStrategy

Default strategy to be used when not specified in the single attribute
configuration

String

| ALWAYS

| 

--------------

| ` <>`__

**HdbEventSubscriber Class Commands**

**Name**

**Input type**

**Output type**

**Level**

**Description**

`State <CmdState.html>`__

DEV\_VOID

DEV\_STATE

OPERATOR

This command gets the device state (stored in its *device\_state* data
member) and returns it to the caller.

`Status <CmdStatus.html>`__

DEV\_VOID

CONST\_DEV\_STRING

OPERATOR

This command gets the device status (stored in its *device\_status* data
member) and returns it to the caller.

`AttributeAdd <CmdAttributeAdd.html>`__

DEVVAR\_STRINGARRAY

DEV\_VOID

OPERATOR

Add a new attribute to archive in HDB.

`AttributeRemove <CmdAttributeRemove.html>`__

DEV\_STRING

DEV\_VOID

OPERATOR

Remove attribute from configuration.

`AttributeStatus <CmdAttributeStatus.html>`__

DEV\_STRING

DEV\_STRING

OPERATOR

Read a attribute status.

`Start <CmdStart.html>`__

DEV\_VOID

DEV\_VOID

OPERATOR

Start archiving

`Stop <CmdStop.html>`__

DEV\_VOID

DEV\_VOID

OPERATOR

Stop archiving

`AttributeStart <CmdAttributeStart.html>`__

DEV\_STRING

DEV\_VOID

OPERATOR

Start archiving single attribute

`AttributeStop <CmdAttributeStop.html>`__

DEV\_STRING

DEV\_VOID

OPERATOR

Stop archiving single attribute

`ResetStatistics <CmdResetStatistics.html>`__

DEV\_VOID

DEV\_VOID

OPERATOR

Reset statistic counters

`Pause <CmdPause.html>`__

DEV\_VOID

DEV\_VOID

OPERATOR

Pause archiving

`AttributePause <CmdAttributePause.html>`__

DEV\_STRING

DEV\_VOID

OPERATOR

Pause archiving single attribute

`SetAttributeStrategy <CmdSetAttributeStrategy.html>`__

DEVVAR\_STRINGARRAY

DEV\_VOID

OPERATOR

Update strategy associated to an already archived attribute.

`GetAttributeStrategy <CmdGetAttributeStrategy.html>`__

DEV\_STRING

DEV\_STRING

OPERATOR

Read a attribute contexts.

`StopFaulty <CmdStopFaulty.html>`__

DEV\_VOID

DEV\_VOID

OPERATOR

Stop archiving faulty attributes

`SetAttributeTTL <CmdSetAttributeTTL.html>`__

DEVVAR\_STRINGARRAY

DEV\_VOID

OPERATOR

Update TTL associated to an already archived attribute.

`GetAttributeTTL <CmdGetAttributeTTL.html>`__

DEV\_STRING

DEV\_ULONG

OPERATOR

Read an attribute TTL.

| 

--------------

| ` <>`__
| **Command State :**

| 

**State Definition**

Input Argument

Tango::DEV\_VOID

none.

Output Argument

Tango::DEV\_STATE

State Code

DisplayLevel

OPERATOR

..

Inherited

true

..

Abstract

true

..

Polling Period

Not polled

..

--------------

--------------

--------------

Command allowed for

All states

..

| 

--------------

| ` <>`__
| **Command Status :**

| 

**Status Definition**

Input Argument

Tango::DEV\_VOID

none.

Output Argument

Tango::CONST\_DEV\_STRING

Status description

DisplayLevel

OPERATOR

..

Inherited

true

..

Abstract

true

..

Polling Period

Not polled

..

--------------

--------------

--------------

Command allowed for

All states

..

| 

--------------

| ` <>`__
| **Command AttributeAdd :**

| 

**AttributeAdd Definition**

Input Argument

Tango::DEVVAR\_STRINGARRAY

Attribute name, strategy

Output Argument

Tango::DEV\_VOID

DisplayLevel

OPERATOR

..

Inherited

false

..

Abstract

false

..

Polling Period

Not polled

..

--------------

--------------

--------------

Command allowed for

All states

..

| 

--------------

| ` <>`__
| **Command AttributeRemove :**

| 

**AttributeRemove Definition**

Input Argument

Tango::DEV\_STRING

Attribute name

Output Argument

Tango::DEV\_VOID

DisplayLevel

OPERATOR

..

Inherited

false

..

Abstract

false

..

Polling Period

Not polled

..

--------------

--------------

--------------

Command allowed for

All states

..

| 

--------------

| ` <>`__
| **Command AttributeStatus :**

| 

**AttributeStatus Definition**

Input Argument

Tango::DEV\_STRING

The attribute name

Output Argument

Tango::DEV\_STRING

The attribute status.

DisplayLevel

OPERATOR

..

Inherited

false

..

Abstract

false

..

Polling Period

Not polled

..

--------------

--------------

--------------

Command allowed for

All states

..

| 

--------------

| ` <>`__
| **Command Start :**

| 

**Start Definition**

Input Argument

Tango::DEV\_VOID

Output Argument

Tango::DEV\_VOID

DisplayLevel

OPERATOR

..

Inherited

false

..

Abstract

false

..

Polling Period

Not polled

..

--------------

--------------

--------------

Command allowed for

All states

..

| 

--------------

| ` <>`__
| **Command Stop :**

| 

**Stop Definition**

Input Argument

Tango::DEV\_VOID

Output Argument

Tango::DEV\_VOID

DisplayLevel

OPERATOR

..

Inherited

false

..

Abstract

false

..

Polling Period

Not polled

..

--------------

--------------

--------------

Command allowed for

All states

..

| 

--------------

| ` <>`__
| **Command AttributeStart :**

| 

**AttributeStart Definition**

Input Argument

Tango::DEV\_STRING

Attribute name

Output Argument

Tango::DEV\_VOID

DisplayLevel

OPERATOR

..

Inherited

false

..

Abstract

false

..

Polling Period

Not polled

..

--------------

--------------

--------------

Command allowed for

All states

..

| 

--------------

| ` <>`__
| **Command AttributeStop :**

| 

**AttributeStop Definition**

Input Argument

Tango::DEV\_STRING

Attribute name

Output Argument

Tango::DEV\_VOID

DisplayLevel

OPERATOR

..

Inherited

false

..

Abstract

false

..

Polling Period

Not polled

..

--------------

--------------

--------------

Command allowed for

All states

..

| 

--------------

| ` <>`__
| **Command ResetStatistics :**

| 

**ResetStatistics Definition**

Input Argument

Tango::DEV\_VOID

Output Argument

Tango::DEV\_VOID

DisplayLevel

OPERATOR

..

Inherited

false

..

Abstract

false

..

Polling Period

Not polled

..

--------------

--------------

--------------

Command allowed for

All states

..

| 

--------------

| ` <>`__
| **Command Pause :**

| 

**Pause Definition**

Input Argument

Tango::DEV\_VOID

Output Argument

Tango::DEV\_VOID

DisplayLevel

OPERATOR

..

Inherited

false

..

Abstract

false

..

Polling Period

Not polled

..

--------------

--------------

--------------

Command allowed for

All states

..

| 

--------------

| ` <>`__
| **Command AttributePause :**

| 

**AttributePause Definition**

Input Argument

Tango::DEV\_STRING

Attribute name

Output Argument

Tango::DEV\_VOID

DisplayLevel

OPERATOR

..

Inherited

false

..

Abstract

false

..

Polling Period

Not polled

..

--------------

--------------

--------------

Command allowed for

All states

..

| 

--------------

| ` <>`__
| **Command SetAttributeStrategy :**

| 

**SetAttributeStrategy Definition**

Input Argument

Tango::DEVVAR\_STRINGARRAY

Attribute name, strategy

Output Argument

Tango::DEV\_VOID

DisplayLevel

OPERATOR

..

Inherited

false

..

Abstract

false

..

Polling Period

Not polled

..

--------------

--------------

--------------

Command allowed for

All states

..

| 

--------------

| ` <>`__
| **Command GetAttributeStrategy :**

| 

**GetAttributeStrategy Definition**

Input Argument

Tango::DEV\_STRING

The attribute name

Output Argument

Tango::DEV\_STRING

The attribute contexts.

DisplayLevel

OPERATOR

..

Inherited

false

..

Abstract

false

..

Polling Period

Not polled

..

--------------

--------------

--------------

Command allowed for

All states

..

| 

--------------

| ` <>`__
| **Command StopFaulty :**

| 

**StopFaulty Definition**

Input Argument

Tango::DEV\_VOID

Output Argument

Tango::DEV\_VOID

DisplayLevel

OPERATOR

..

Inherited

false

..

Abstract

false

..

Polling Period

Not polled

..

--------------

--------------

--------------

Command allowed for

All states

..

| 

--------------

| ` <>`__
| **Command SetAttributeTTL :**

| 

**SetAttributeTTL Definition**

Input Argument

Tango::DEVVAR\_STRINGARRAY

Attribute name, TTL

Output Argument

Tango::DEV\_VOID

DisplayLevel

OPERATOR

..

Inherited

false

..

Abstract

false

..

Polling Period

Not polled

..

--------------

--------------

--------------

Command allowed for

All states

..

| 

--------------

| ` <>`__
| **Command GetAttributeTTL :**

| 

**GetAttributeTTL Definition**

Input Argument

Tango::DEV\_STRING

The attribute name

Output Argument

Tango::DEV\_ULONG

The attribute TTL.

DisplayLevel

OPERATOR

..

Inherited

false

..

Abstract

false

..

Polling Period

Not polled

..

--------------

--------------

--------------

Command allowed for

All states

..

| 

--------------

| ` <>`__

**HdbEventSubscriber Class Attributes**

**Name**

**Inherited**

**Abstract**

**Attr. type**

**R/W type**

**Data type**

**Level**

**Description**

`AttributeOkNumber <AttrAttributeOkNumber.html>`__

false

false

Scalar

READ

Tango::DEV\_LONG

OPERATOR

Number of archived attributes not in error

`AttributeNokNumber <AttrAttributeNokNumber.html>`__

false

false

Scalar

READ

Tango::DEV\_LONG

OPERATOR

Number of archived attributes in error

`AttributePendingNumber <AttrAttributePendingNumber.html>`__

false

false

Scalar

READ

Tango::DEV\_LONG

OPERATOR

Number of attributes waiting to be archived

`AttributeNumber <AttrAttributeNumber.html>`__

false

false

Scalar

READ

Tango::DEV\_LONG

OPERATOR

Number of configured attributes

`AttributeMaxStoreTime <AttrAttributeMaxStoreTime.html>`__

false

false

Scalar

READ

Tango::DEV\_DOUBLE

OPERATOR

Maximum storing time

`AttributeMinStoreTime <AttrAttributeMinStoreTime.html>`__

false

false

Scalar

READ

Tango::DEV\_DOUBLE

OPERATOR

Minimum storing time

`AttributeMaxProcessingTime <AttrAttributeMaxProcessingTime.html>`__

false

false

Scalar

READ

Tango::DEV\_DOUBLE

OPERATOR

Maximum processing (from event reception to storage) time

`AttributeMinProcessingTime <AttrAttributeMinProcessingTime.html>`__

false

false

Scalar

READ

Tango::DEV\_DOUBLE

OPERATOR

Minimum processing (from event reception to storage) time

`AttributeRecordFreq <AttrAttributeRecordFreq.html>`__

false

false

Scalar

READ

Tango::DEV\_DOUBLE

OPERATOR

Record frequency

`AttributeFailureFreq <AttrAttributeFailureFreq.html>`__

false

false

Scalar

READ

Tango::DEV\_DOUBLE

OPERATOR

Failure frequency

`AttributeStartedNumber <AttrAttributeStartedNumber.html>`__

false

false

Scalar

READ

Tango::DEV\_LONG

OPERATOR

Number of archived attributes started

`AttributeStoppedNumber <AttrAttributeStoppedNumber.html>`__

false

false

Scalar

READ

Tango::DEV\_LONG

OPERATOR

Number of archived attributes stopped

`AttributeMaxPendingNumber <AttrAttributeMaxPendingNumber.html>`__

false

false

Scalar

READ

Tango::DEV\_LONG

OPERATOR

Max number of attributes waiting to be archived

`StatisticsResetTime <AttrStatisticsResetTime.html>`__

false

false

Scalar

READ

Tango::DEV\_DOUBLE

OPERATOR

Seconds elapsed since the last statistics reset

`AttributePausedNumber <AttrAttributePausedNumber.html>`__

false

false

Scalar

READ

Tango::DEV\_LONG

OPERATOR

Number of archived attributes paused

`Context <AttrContext.html>`__

false

false

Scalar

READ\_WRITE

Tango::DEV\_STRING

OPERATOR

`AttributeList <AttrAttributeList.html>`__

false

false

Spectrum

READ

Tango::DEV\_STRING

OPERATOR

Returns the configured attribute list

`AttributeOkList <AttrAttributeOkList.html>`__

false

false

Spectrum

READ

Tango::DEV\_STRING

OPERATOR

Returns the attributes not on error list

`AttributeNokList <AttrAttributeNokList.html>`__

false

false

Spectrum

READ

Tango::DEV\_STRING

OPERATOR

Returns the attributes on error list

`AttributePendingList <AttrAttributePendingList.html>`__

false

false

Spectrum

READ

Tango::DEV\_STRING

OPERATOR

Returns the list attributes waiting to be archived

`AttributeRecordFreqList <AttrAttributeRecordFreqList.html>`__

false

false

Spectrum

READ

Tango::DEV\_DOUBLE

OPERATOR

Returns the list of record frequencies

`AttributeFailureFreqList <AttrAttributeFailureFreqList.html>`__

false

false

Spectrum

READ

Tango::DEV\_DOUBLE

OPERATOR

Returns the list of failure frequencies

`AttributeStartedList <AttrAttributeStartedList.html>`__

false

false

Spectrum

READ

Tango::DEV\_STRING

OPERATOR

Returns the attributes started list

`AttributeStoppedList <AttrAttributeStoppedList.html>`__

false

false

Spectrum

READ

Tango::DEV\_STRING

OPERATOR

Returns the attributes stopped list

`AttributeEventNumberList <AttrAttributeEventNumberList.html>`__

false

false

Spectrum

READ

Tango::DEV\_LONG

OPERATOR

Returns the list of numbers of events received

`AttributeErrorList <AttrAttributeErrorList.html>`__

false

false

Spectrum

READ

Tango::DEV\_STRING

OPERATOR

Returns the list of attribute errors

`AttributePausedList <AttrAttributePausedList.html>`__

false

false

Spectrum

READ

Tango::DEV\_STRING

OPERATOR

Returns the attributes stopped list

`AttributeStrategyList <AttrAttributeStrategyList.html>`__

false

false

Spectrum

READ

Tango::DEV\_STRING

OPERATOR

Returns the list of attribute strategy

`ContextsList <AttrContextsList.html>`__

false

false

Spectrum

READ

Tango::DEV\_STRING

OPERATOR

`AttributeTTLList <AttrAttributeTTLList.html>`__

false

false

Spectrum

READ

Tango::DEV\_ULONG

OPERATOR

Returns the list of attribute strategy

| 

--------------

| 
| **There is no dynamic attribute defined.**

--------------

| ` <>`__
| **Attribute AttributeOkNumber :**

| 

**Attribute Definition**

Attribute Type

Scalar

R/W Type

READ

Data Type

Tango::DEV\_LONG

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

standard unit

display unit

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

1

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

1

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute AttributeNokNumber :**

| 

**Attribute Definition**

Attribute Type

Scalar

R/W Type

READ

Data Type

Tango::DEV\_LONG

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

standard unit

display unit

format

max\_value

min\_value

max\_alarm

1

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

1

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

1

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute AttributePendingNumber :**

| 

**Attribute Definition**

Attribute Type

Scalar

R/W Type

READ

Data Type

Tango::DEV\_LONG

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

standard unit

display unit

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

2

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

2

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute AttributeNumber :**

| 

**Attribute Definition**

Attribute Type

Scalar

R/W Type

READ

Data Type

Tango::DEV\_LONG

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

standard unit

display unit

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

1

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

1

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute AttributeMaxStoreTime :**

| 

**Attribute Definition**

Attribute Type

Scalar

R/W Type

READ

Data Type

Tango::DEV\_DOUBLE

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

s

standard unit

1

display unit

s

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

0.001

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

0.001

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute AttributeMinStoreTime :**

| 

**Attribute Definition**

Attribute Type

Scalar

R/W Type

READ

Data Type

Tango::DEV\_DOUBLE

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

s

standard unit

1

display unit

s

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

0.00001

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

0.00001

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute AttributeMaxProcessingTime :**

| 

**Attribute Definition**

Attribute Type

Scalar

R/W Type

READ

Data Type

Tango::DEV\_DOUBLE

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

s

standard unit

1

display unit

s

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

0.001

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

0.001

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute AttributeMinProcessingTime :**

| 

**Attribute Definition**

Attribute Type

Scalar

R/W Type

READ

Data Type

Tango::DEV\_DOUBLE

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

s

standard unit

1

display unit

s

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

0.00001

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

0.00001

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute AttributeRecordFreq :**

| 

**Attribute Definition**

Attribute Type

Scalar

R/W Type

READ

Data Type

Tango::DEV\_DOUBLE

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

ev/period

standard unit

1

display unit

ev/period

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

1

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

1

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute AttributeFailureFreq :**

| 

**Attribute Definition**

Attribute Type

Scalar

R/W Type

READ

Data Type

Tango::DEV\_DOUBLE

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

ev/period

standard unit

1

display unit

ev/period

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

1

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

1

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute AttributeStartedNumber :**

| 

**Attribute Definition**

Attribute Type

Scalar

R/W Type

READ

Data Type

Tango::DEV\_LONG

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

standard unit

display unit

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

1

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

1

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute AttributeStoppedNumber :**

| 

**Attribute Definition**

Attribute Type

Scalar

R/W Type

READ

Data Type

Tango::DEV\_LONG

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

standard unit

display unit

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

1

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

1

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute AttributeMaxPendingNumber :**

| 

**Attribute Definition**

Attribute Type

Scalar

R/W Type

READ

Data Type

Tango::DEV\_LONG

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

standard unit

display unit

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

1

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

1

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute StatisticsResetTime :**

| 

**Attribute Definition**

Attribute Type

Scalar

R/W Type

READ

Data Type

Tango::DEV\_DOUBLE

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

s

standard unit

1

display unit

s

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

Not set

--------------

--------------

Archive Periodic

Not set

Archive Relative Change

Not set

Archive Absolute Change

Not set

--------------

--------------

Push Change event by user code

false

Push Archive event by user code

false

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute AttributePausedNumber :**

| 

**Attribute Definition**

Attribute Type

Scalar

R/W Type

READ

Data Type

Tango::DEV\_LONG

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

standard unit

display unit

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

1

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

1

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute Context :**

| 

**Attribute Definition**

Attribute Type

Scalar

R/W Type

READ\_WRITE

Data Type

Tango::DEV\_STRING

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

true

Write hardware at init.

true

--------------

--------------

Read allowed for

All states

Write allowed for

All states

**Attribute Properties**

label

unit

standard unit

display unit

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

Not set

--------------

--------------

Archive Periodic

Not set

Archive Relative Change

Not set

Archive Absolute Change

Not set

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute AttributeList :**

| 

**Attribute Definition**

Attribute Type

Spectrum ( 10000 )

R/W Type

READ

Data Type

Tango::DEV\_STRING

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

standard unit

display unit

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

Not set

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

Not set

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute AttributeOkList :**

| 

**Attribute Definition**

Attribute Type

Spectrum ( 10000 )

R/W Type

READ

Data Type

Tango::DEV\_STRING

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

standard unit

display unit

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

Not set

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

Not set

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute AttributeNokList :**

| 

**Attribute Definition**

Attribute Type

Spectrum ( 10000 )

R/W Type

READ

Data Type

Tango::DEV\_STRING

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

standard unit

display unit

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

Not set

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

Not set

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute AttributePendingList :**

| 

**Attribute Definition**

Attribute Type

Spectrum ( 10000 )

R/W Type

READ

Data Type

Tango::DEV\_STRING

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

standard unit

display unit

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

Not set

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

Not set

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute AttributeRecordFreqList :**

| 

**Attribute Definition**

Attribute Type

Spectrum ( 10000 )

R/W Type

READ

Data Type

Tango::DEV\_DOUBLE

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

standard unit

display unit

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

1

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

1

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute AttributeFailureFreqList :**

| 

**Attribute Definition**

Attribute Type

Spectrum ( 10000 )

R/W Type

READ

Data Type

Tango::DEV\_DOUBLE

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

standard unit

display unit

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

1

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

1

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute AttributeStartedList :**

| 

**Attribute Definition**

Attribute Type

Spectrum ( 10000 )

R/W Type

READ

Data Type

Tango::DEV\_STRING

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

standard unit

display unit

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

Not set

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

Not set

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute AttributeStoppedList :**

| 

**Attribute Definition**

Attribute Type

Spectrum ( 10000 )

R/W Type

READ

Data Type

Tango::DEV\_STRING

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

standard unit

display unit

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

Not set

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

Not set

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute AttributeEventNumberList :**

| 

**Attribute Definition**

Attribute Type

Spectrum ( 10000 )

R/W Type

READ

Data Type

Tango::DEV\_LONG

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

standard unit

display unit

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

1

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

1

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute AttributeErrorList :**

| 

**Attribute Definition**

Attribute Type

Spectrum ( 10000 )

R/W Type

READ

Data Type

Tango::DEV\_STRING

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

standard unit

display unit

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

Not set

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

Not set

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute AttributePausedList :**

| 

**Attribute Definition**

Attribute Type

Spectrum ( 10000 )

R/W Type

READ

Data Type

Tango::DEV\_STRING

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

standard unit

display unit

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

Not set

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

Not set

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute AttributeStrategyList :**

| 

**Attribute Definition**

Attribute Type

Spectrum ( 10000 )

R/W Type

READ

Data Type

Tango::DEV\_STRING

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

standard unit

display unit

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

Not set

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

Not set

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute ContextsList :**

| 

**Attribute Definition**

Attribute Type

Spectrum ( 1000 )

R/W Type

READ

Data Type

Tango::DEV\_STRING

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

standard unit

display unit

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

Not set

--------------

--------------

Archive Periodic

Not set

Archive Relative Change

Not set

Archive Absolute Change

Not set

--------------

--------------

Push Change event by user code

false

Push Archive event by user code

false

Push DataReady event by user code

false

| 

--------------

| ` <>`__
| **Attribute AttributeTTLList :**

| 

**Attribute Definition**

Attribute Type

Spectrum ( 10000 )

R/W Type

READ

Data Type

Tango::DEV\_ULONG

Display Level

OPERATOR

Inherited

false

Abstract

false

Polling Period

Not polled

Memorized

Not set

--------------

--------------

Read allowed for

All states

**Attribute Properties**

label

unit

standard unit

display unit

format

max\_value

min\_value

max\_alarm

min\_alarm

max\_warning

min\_warning

delta\_time

delta\_val

**Attribute Event Criteria**

Periodic

Not set

Relative Change

Not set

Absolute Change

Not set

--------------

--------------

Archive Periodic

3600000

Archive Relative Change

Not set

Archive Absolute Change

Not set

--------------

--------------

Push Change event by user code

true

Criteria checked by TANGO

true

Push Archive event by user code

true

Criteria checked by TANGO

true

Push DataReady event by user code

false

| 

--------------

| 

--------------

| ` <>`__

**HdbEventSubscriber Class States**

**Name**

**Description**

ON

Archiving running and everything is OK.

ALARM

One or more attributes faulty or FIFO size above threshold

OFF

Archiving stopped

FAULT

All attributes faulty
