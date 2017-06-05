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
