HdbEventSubscriber Tango Cpp Class
==================================

**Contents:**

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

+--------------------------------------------------------------------+--------------------------------------------------------------------------------------------------+
|  **HdbEventSubscriber Class Identification:**                      |  **HdbEventSubscriber Class Inheritance:**                                                       |
+=======================+============================================+==================================================================================================+
|                       |                                            | -  `Tango::DeviceImpl <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/cpp_doc/>`__   |
|   Contact:            |   at elettra.eu - graziano.scalamera       |                                                                                                  |
+-----------------------+--------------------------------------------+    -  HdbEventSubscriber                                                                         |
|   Class Family:       |   Miscellaneous                            |                                                                                                  |
+-----------------------+--------------------------------------------+                                                                                                  |
|   Platform:           |   Unix Like                                |                                                                                                  |
+-----------------------+--------------------------------------------+                                                                                                  |
|   Bus:                |   Not Applicable                           |                                                                                                  |
+-----------------------+--------------------------------------------+                                                                                                  |
|   Manufacturer:       |   none                                     |                                                                                                  |
+-----------------------+--------------------------------------------+                                                                                                  |
|   Manufacturer ref.:  |                                            |                                                                                                  |
|                       |                                            |                                                                                                  |
+-----------------------+--------------------------------------------+--------------------------------------------------------------------------------------------------+

**HdbEventSubscriber Class Description:**

This class is able to subscribe on archive events and store value in Historical DB

| 
**HdbEventSubscriber Properties:**

+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| **Class Properties**                                                                                                                                                                |
+=============================+========================================================================================+=============+================================================+
| **Name**                    | **Description**                                                                        | **Type**    | **Default Value**                              |
+-----------------------------+----------------------------------------------------------------------------------------+-------------+------------------------------------------------+
| SubscribeRetryPeriod        | Subscribe event retrying period in seconds.                                            | int         | 60                                             |
+-----------------------------+----------------------------------------------------------------------------------------+-------------+------------------------------------------------+
| StatisticsTimeWindow        | Statistics time window in seconds                                                      | int         | 60                                             |
+-----------------------------+----------------------------------------------------------------------------------------+-------------+------------------------------------------------+
| CheckPeriodicTimeoutDelay   | Delay in seconds before timeout when checking periodic events                          | int         | 5                                              |
+-----------------------------+----------------------------------------------------------------------------------------+-------------+------------------------------------------------+
| PollingThreadPeriod         | Polling thread period in seconds.                                                      | int         | 3                                              |
+-----------------------------+----------------------------------------------------------------------------------------+-------------+------------------------------------------------+
| LibConfiguration            | Configuration for the library                                                          | String[]    | none                                           |
+-----------------------------+----------------------------------------------------------------------------------------+-------------+------------------------------------------------+
| ContextsList                | Possible contexts in the form label:description                                        | String[]    | ALWAYS:always stored                           |
|                             |                                                                                        |             | RUN:stored during run                          |
|                             |                                                                                        |             | SHUTDOWN:stored during shutdown                |
|                             |                                                                                        |             | SERVICE:stored during maintenance activities   |
+-----------------------------+----------------------------------------------------------------------------------------+-------------+------------------------------------------------+
| DefaultStrategy             | Default strategy to be used when not specified in the single attribute configuration   | String      | ALWAYS                                         |
+-----------------------------+----------------------------------------------------------------------------------------+-------------+------------------------------------------------+

+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| **Device Properties**                                                                                                                                                               |
+=============================+========================================================================================+=============+================================================+
| **Name**                    | **Description**                                                                        | **Type**    | **Default Value**                              |
+-----------------------------+----------------------------------------------------------------------------------------+-------------+------------------------------------------------+
| SubscribeRetryPeriod        | Subscribe event retrying period in seconds.                                            | int         | 60                                             |
+-----------------------------+----------------------------------------------------------------------------------------+-------------+------------------------------------------------+
| AttributeList               | List of configured attributes.                                                         | String[]    | none                                           |
+-----------------------------+----------------------------------------------------------------------------------------+-------------+------------------------------------------------+
| StatisticsTimeWindow        | Statistics time window in seconds                                                      | int         | 60                                             |
+-----------------------------+----------------------------------------------------------------------------------------+-------------+------------------------------------------------+
| CheckPeriodicTimeoutDelay   | Delay in seconds before timeout when checking periodic events                          | int         | 5                                              |
+-----------------------------+----------------------------------------------------------------------------------------+-------------+------------------------------------------------+
| PollingThreadPeriod         | Polling Thread period in seconds.                                                      | int         | 3                                              |
+-----------------------------+----------------------------------------------------------------------------------------+-------------+------------------------------------------------+
| LibConfiguration            | Configuration for the library                                                          | String[]    | none                                           |
+-----------------------------+----------------------------------------------------------------------------------------+-------------+------------------------------------------------+
| ContextsList                | Possible contexts in the form label:description                                        | String[]    | ALWAYS:always stored                           |
|                             |                                                                                        |             | RUN:stored during run                          |
|                             |                                                                                        |             | SHUTDOWN:stored during shutdown                |
|                             |                                                                                        |             | SERVICE:stored during maintenance activities   |
+-----------------------------+----------------------------------------------------------------------------------------+-------------+------------------------------------------------+
| DefaultStrategy             | Default strategy to be used when not specified in the single attribute configuration   | String      | ALWAYS                                         |
+-----------------------------+----------------------------------------------------------------------------------------+-------------+------------------------------------------------+

+--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| **HdbEventSubscriber Class Commands**                                                                                                                                                                                                      |
+===========================================================+=======================+======================+==============+==================================================================================================================+
| **Name**                                                  | **Input type**        | **Output type**      | **Level**    | **Description**                                                                                                  |
+-----------------------------------------------------------+-----------------------+----------------------+--------------+------------------------------------------------------------------------------------------------------------------+
| `State <CmdState.html>`__                                 | DEV_VOID              | DEV_STATE            | OPERATOR     | This command gets the device state (stored in its *device_state* data member) and returns it to the caller.      |
+-----------------------------------------------------------+-----------------------+----------------------+--------------+------------------------------------------------------------------------------------------------------------------+
| `Status <CmdStatus.html>`__                               | DEV_VOID              | CONST_DEV_STRING     | OPERATOR     | This command gets the device status (stored in its *device_status* data member) and returns it to the caller.    |
+-----------------------------------------------------------+-----------------------+----------------------+--------------+------------------------------------------------------------------------------------------------------------------+
| `AttributeAdd <CmdAttributeAdd.html>`__                   | DEVVAR_STRINGARRAY    | DEV_VOID             | OPERATOR     | Add a new attribute to archive in HDB.                                                                           |
+-----------------------------------------------------------+-----------------------+----------------------+--------------+------------------------------------------------------------------------------------------------------------------+
| `AttributeRemove <CmdAttributeRemove.html>`__             | DEV_STRING            | DEV_VOID             | OPERATOR     | Remove attribute from configuration.                                                                             |
+-----------------------------------------------------------+-----------------------+----------------------+--------------+------------------------------------------------------------------------------------------------------------------+
| `AttributeStatus <CmdAttributeStatus.html>`__             | DEV_STRING            | DEV_STRING           | OPERATOR     | Read a attribute status.                                                                                         |
+-----------------------------------------------------------+-----------------------+----------------------+--------------+------------------------------------------------------------------------------------------------------------------+
| `Start <CmdStart.html>`__                                 | DEV_VOID              | DEV_VOID             | OPERATOR     | Start archiving                                                                                                  |
+-----------------------------------------------------------+-----------------------+----------------------+--------------+------------------------------------------------------------------------------------------------------------------+
| `Stop <CmdStop.html>`__                                   | DEV_VOID              | DEV_VOID             | OPERATOR     | Stop archiving                                                                                                   |
+-----------------------------------------------------------+-----------------------+----------------------+--------------+------------------------------------------------------------------------------------------------------------------+
| `AttributeStart <CmdAttributeStart.html>`__               | DEV_STRING            | DEV_VOID             | OPERATOR     | Start archiving single attribute                                                                                 |
+-----------------------------------------------------------+-----------------------+----------------------+--------------+------------------------------------------------------------------------------------------------------------------+
| `AttributeStop <CmdAttributeStop.html>`__                 | DEV_STRING            | DEV_VOID             | OPERATOR     | Stop archiving single attribute                                                                                  |
+-----------------------------------------------------------+-----------------------+----------------------+--------------+------------------------------------------------------------------------------------------------------------------+
| `ResetStatistics <CmdResetStatistics.html>`__             | DEV_VOID              | DEV_VOID             | OPERATOR     | Reset statistic counters                                                                                         |
+-----------------------------------------------------------+-----------------------+----------------------+--------------+------------------------------------------------------------------------------------------------------------------+
| `Pause <CmdPause.html>`__                                 | DEV_VOID              | DEV_VOID             | OPERATOR     | Pause archiving                                                                                                  |
+-----------------------------------------------------------+-----------------------+----------------------+--------------+------------------------------------------------------------------------------------------------------------------+
| `AttributePause <CmdAttributePause.html>`__               | DEV_STRING            | DEV_VOID             | OPERATOR     | Pause archiving single attribute                                                                                 |
+-----------------------------------------------------------+-----------------------+----------------------+--------------+------------------------------------------------------------------------------------------------------------------+
| `SetAttributeStrategy <CmdSetAttributeStrategy.html>`__   | DEVVAR_STRINGARRAY    | DEV_VOID             | OPERATOR     | Update strategy associated to an already archived attribute.                                                     |
+-----------------------------------------------------------+-----------------------+----------------------+--------------+------------------------------------------------------------------------------------------------------------------+
| `GetAttributeStrategy <CmdGetAttributeStrategy.html>`__   | DEV_STRING            | DEV_STRING           | OPERATOR     | Read a attribute contexts.                                                                                       |
+-----------------------------------------------------------+-----------------------+----------------------+--------------+------------------------------------------------------------------------------------------------------------------+
| `StopFaulty <CmdStopFaulty.html>`__                       | DEV_VOID              | DEV_VOID             | OPERATOR     | Stop archiving faulty attributes                                                                                 |
+-----------------------------------------------------------+-----------------------+----------------------+--------------+------------------------------------------------------------------------------------------------------------------+
| `SetAttributeTTL <CmdSetAttributeTTL.html>`__             | DEVVAR_STRINGARRAY    | DEV_VOID             | OPERATOR     | Update TTL associated to an already archived attribute.                                                          |
+-----------------------------------------------------------+-----------------------+----------------------+--------------+------------------------------------------------------------------------------------------------------------------+
| `GetAttributeTTL <CmdGetAttributeTTL.html>`__             | DEV_STRING            | DEV_ULONG            | OPERATOR     | Read an attribute TTL.                                                                                           |
+-----------------------------------------------------------+-----------------------+----------------------+--------------+------------------------------------------------------------------------------------------------------------------+

| 
**Command State:**

This command gets the device state (stored in its *device_state*
data member) and returns it to the caller.

+--------------------------------------------------------------+
| **State Definition**                                         |
+=========================+=====================+==============+
| Input Argument          | Tango::DEV_VOID     | none.        |
+-------------------------+---------------------+--------------+
| Output Argument         | Tango::DEV_STATE    | State Code   |
+-------------------------+---------------------+--------------+
| DisplayLevel            | OPERATOR            | ..           |
+-------------------------+---------------------+--------------+
| Inherited               | true                | ..           |
+-------------------------+---------------------+--------------+
| Abstract                | true                | ..           |
+-------------------------+---------------------+--------------+
| Polling Period          | Not polled          | ..           |
+-------------------------+---------------------+--------------+
|                         |                     |              |
+-------------------------+---------------------+--------------+
| Command allowed for     | All states          | ..           |
+-------------------------+---------------------+--------------+

| 
**Command Status:**

This command gets the device status (stored in its *device_status*
data member) and returns it to the caller.

+-------------------------------------------------------------------------------+
| **Status Definition**                                                         |
+==========================+=============================+======================+
| Input Argument           | Tango::DEV_VOID             | none.                |
+--------------------------+-----------------------------+----------------------+
| Output Argument          | Tango::CONST_DEV_STRING     | Status description   |
+--------------------------+-----------------------------+----------------------+
| DisplayLevel             | OPERATOR                    | ..                   |
+--------------------------+-----------------------------+----------------------+
| Inherited                | true                        | ..                   |
+--------------------------+-----------------------------+----------------------+
| Abstract                 | true                        | ..                   |
+--------------------------+-----------------------------+----------------------+
| Polling Period           | Not polled                  | ..                   |
+--------------------------+-----------------------------+----------------------+
|                          |                             |                      |
+--------------------------+-----------------------------+----------------------+
| Command allowed for      | All states                  | ..                   |
+--------------------------+-----------------------------+----------------------+

| 
**Command AttributeAdd:**

Add a new attribute to archive in HDB.

+--------------------------------------------------------------------------------------------+
| **AttributeAdd Definition**                                                                |
+================================+==============================+============================+
| Input Argument                 | Tango::DEVVAR_STRINGARRAY    | Attribute name, strategy   |
+--------------------------------+------------------------------+----------------------------+
| Output Argument                | Tango::DEV_VOID              |                            |
+--------------------------------+------------------------------+----------------------------+
| DisplayLevel                   | OPERATOR                     | ..                         |
+--------------------------------+------------------------------+----------------------------+
| Inherited                      | false                        | ..                         |
+--------------------------------+------------------------------+----------------------------+
| Abstract                       | false                        | ..                         |
+--------------------------------+------------------------------+----------------------------+
| Polling Period                 | Not polled                   | ..                         |
+--------------------------------+------------------------------+----------------------------+
|                                |                              |                            |
+--------------------------------+------------------------------+----------------------------+
| Command allowed for            | All states                   | ..                         |
+--------------------------------+------------------------------+----------------------------+

| 
**Command AttributeRemove:**

Remove attribute from configuration.

+-----------------------------------------------------------------------------+
| **AttributeRemove Definition**                                              |
+===================================+======================+==================+
| Input Argument                    | Tango::DEV_STRING    | Attribute name   |
+-----------------------------------+----------------------+------------------+
| Output Argument                   | Tango::DEV_VOID      |                  |
+-----------------------------------+----------------------+------------------+
| DisplayLevel                      | OPERATOR             | ..               |
+-----------------------------------+----------------------+------------------+
| Inherited                         | false                | ..               |
+-----------------------------------+----------------------+------------------+
| Abstract                          | false                | ..               |
+-----------------------------------+----------------------+------------------+
| Polling Period                    | Not polled           | ..               |
+-----------------------------------+----------------------+------------------+
|                                   |                      |                  |
+-----------------------------------+----------------------+------------------+
| Command allowed for               | All states           | ..               |
+-----------------------------------+----------------------+------------------+

| 
**Command AttributeStatus:**

Read a attribute status.

+------------------------------------------------------------------------------------+
| **AttributeStatus Definition**                                                     |
+===================================+======================+=========================+
| Input Argument                    | Tango::DEV_STRING    | The attribute name      |
+-----------------------------------+----------------------+-------------------------+
| Output Argument                   | Tango::DEV_STRING    | The attribute status.   |
+-----------------------------------+----------------------+-------------------------+
| DisplayLevel                      | OPERATOR             | ..                      |
+-----------------------------------+----------------------+-------------------------+
| Inherited                         | false                | ..                      |
+-----------------------------------+----------------------+-------------------------+
| Abstract                          | false                | ..                      |
+-----------------------------------+----------------------+-------------------------+
| Polling Period                    | Not polled           | ..                      |
+-----------------------------------+----------------------+-------------------------+
|                                   |                      |                         |
+-----------------------------------+----------------------+-------------------------+
| Command allowed for               | All states           | ..                      |
+-----------------------------------+----------------------+-------------------------+

| 
**Command Start:**

Start archiving

+-----------------------------------------------------+
| **Start Definition**                                |
+=========================+====================+======+
| Input Argument          | Tango::DEV_VOID    |      |
+-------------------------+--------------------+------+
| Output Argument         | Tango::DEV_VOID    |      |
+-------------------------+--------------------+------+
| DisplayLevel            | OPERATOR           | ..   |
+-------------------------+--------------------+------+
| Inherited               | false              | ..   |
+-------------------------+--------------------+------+
| Abstract                | false              | ..   |
+-------------------------+--------------------+------+
| Polling Period          | Not polled         | ..   |
+-------------------------+--------------------+------+
|                         |                    |      |
+-------------------------+--------------------+------+
| Command allowed for     | All states         | ..   |
+-------------------------+--------------------+------+

| 
**Command Stop:**

Stop archiving

+----------------------------------------------------+
| **Stop Definition**                                |
+========================+====================+======+
| Input Argument         | Tango::DEV_VOID    |      |
+------------------------+--------------------+------+
| Output Argument        | Tango::DEV_VOID    |      |
+------------------------+--------------------+------+
| DisplayLevel           | OPERATOR           | ..   |
+------------------------+--------------------+------+
| Inherited              | false              | ..   |
+------------------------+--------------------+------+
| Abstract               | false              | ..   |
+------------------------+--------------------+------+
| Polling Period         | Not polled         | ..   |
+------------------------+--------------------+------+
|                        |                    |      |
+------------------------+--------------------+------+
| Command allowed for    | All states         | ..   |
+------------------------+--------------------+------+

| 
**Command AttributeStart:**

Start archiving single attribute

+----------------------------------------------------------------------------+
| **AttributeStart Definition**                                              |
+==================================+======================+==================+
| Input Argument                   | Tango::DEV_STRING    | Attribute name   |
+----------------------------------+----------------------+------------------+
| Output Argument                  | Tango::DEV_VOID      |                  |
+----------------------------------+----------------------+------------------+
| DisplayLevel                     | OPERATOR             | ..               |
+----------------------------------+----------------------+------------------+
| Inherited                        | false                | ..               |
+----------------------------------+----------------------+------------------+
| Abstract                         | false                | ..               |
+----------------------------------+----------------------+------------------+
| Polling Period                   | Not polled           | ..               |
+----------------------------------+----------------------+------------------+
|                                  |                      |                  |
+----------------------------------+----------------------+------------------+
| Command allowed for              | All states           | ..               |
+----------------------------------+----------------------+------------------+

| 
**Command AttributeStop:**

Stop archiving single attribute

+---------------------------------------------------------------------------+
| **AttributeStop Definition**                                              |
+=================================+======================+==================+
| Input Argument                  | Tango::DEV_STRING    | Attribute name   |
+---------------------------------+----------------------+------------------+
| Output Argument                 | Tango::DEV_VOID      |                  |
+---------------------------------+----------------------+------------------+
| DisplayLevel                    | OPERATOR             | ..               |
+---------------------------------+----------------------+------------------+
| Inherited                       | false                | ..               |
+---------------------------------+----------------------+------------------+
| Abstract                        | false                | ..               |
+---------------------------------+----------------------+------------------+
| Polling Period                  | Not polled           | ..               |
+---------------------------------+----------------------+------------------+
|                                 |                      |                  |
+---------------------------------+----------------------+------------------+
| Command allowed for             | All states           | ..               |
+---------------------------------+----------------------+------------------+

| 
**Command ResetStatistics:**

Reset statistic counters

+---------------------------------------------------------------+
| **ResetStatistics Definition**                                |
+===================================+====================+======+
| Input Argument                    | Tango::DEV_VOID    |      |
+-----------------------------------+--------------------+------+
| Output Argument                   | Tango::DEV_VOID    |      |
+-----------------------------------+--------------------+------+
| DisplayLevel                      | OPERATOR           | ..   |
+-----------------------------------+--------------------+------+
| Inherited                         | false              | ..   |
+-----------------------------------+--------------------+------+
| Abstract                          | false              | ..   |
+-----------------------------------+--------------------+------+
| Polling Period                    | Not polled         | ..   |
+-----------------------------------+--------------------+------+
|                                   |                    |      |
+-----------------------------------+--------------------+------+
| Command allowed for               | All states         | ..   |
+-----------------------------------+--------------------+------+

| 
**Command Pause:**

Pause archiving

+-----------------------------------------------------+
| **Pause Definition**                                |
+=========================+====================+======+
| Input Argument          | Tango::DEV_VOID    |      |
+-------------------------+--------------------+------+
| Output Argument         | Tango::DEV_VOID    |      |
+-------------------------+--------------------+------+
| DisplayLevel            | OPERATOR           | ..   |
+-------------------------+--------------------+------+
| Inherited               | false              | ..   |
+-------------------------+--------------------+------+
| Abstract                | false              | ..   |
+-------------------------+--------------------+------+
| Polling Period          | Not polled         | ..   |
+-------------------------+--------------------+------+
|                         |                    |      |
+-------------------------+--------------------+------+
| Command allowed for     | All states         | ..   |
+-------------------------+--------------------+------+

| 
**Command AttributePause:**

Pause archiving single attribute

+----------------------------------------------------------------------------+
| **AttributePause Definition**                                              |
+==================================+======================+==================+
| Input Argument                   | Tango::DEV_STRING    | Attribute name   |
+----------------------------------+----------------------+------------------+
| Output Argument                  | Tango::DEV_VOID      |                  |
+----------------------------------+----------------------+------------------+
| DisplayLevel                     | OPERATOR             | ..               |
+----------------------------------+----------------------+------------------+
| Inherited                        | false                | ..               |
+----------------------------------+----------------------+------------------+
| Abstract                         | false                | ..               |
+----------------------------------+----------------------+------------------+
| Polling Period                   | Not polled           | ..               |
+----------------------------------+----------------------+------------------+
|                                  |                      |                  |
+----------------------------------+----------------------+------------------+
| Command allowed for              | All states           | ..               |
+----------------------------------+----------------------+------------------+

| 
**Command SetAttributeStrategy:**

Update strategy associated to an already archived attribute.

+----------------------------------------------------------------------------------------------------+
| **SetAttributeStrategy Definition**                                                                |
+========================================+==============================+============================+
| Input Argument                         | Tango::DEVVAR_STRINGARRAY    | Attribute name, strategy   |
+----------------------------------------+------------------------------+----------------------------+
| Output Argument                        | Tango::DEV_VOID              |                            |
+----------------------------------------+------------------------------+----------------------------+
| DisplayLevel                           | OPERATOR                     | ..                         |
+----------------------------------------+------------------------------+----------------------------+
| Inherited                              | false                        | ..                         |
+----------------------------------------+------------------------------+----------------------------+
| Abstract                               | false                        | ..                         |
+----------------------------------------+------------------------------+----------------------------+
| Polling Period                         | Not polled                   | ..                         |
+----------------------------------------+------------------------------+----------------------------+
|                                        |                              |                            |
+----------------------------------------+------------------------------+----------------------------+
| Command allowed for                    | All states                   | ..                         |
+----------------------------------------+------------------------------+----------------------------+

| 
**Command GetAttributeStrategy:**

Read a attribute contexts.

+-------------------------------------------------------------------------------------------+
| **GetAttributeStrategy Definition**                                                       |
+========================================+======================+===========================+
| Input Argument                         | Tango::DEV_STRING    | The attribute name        |
+----------------------------------------+----------------------+---------------------------+
| Output Argument                        | Tango::DEV_STRING    | The attribute contexts.   |
+----------------------------------------+----------------------+---------------------------+
| DisplayLevel                           | OPERATOR             | ..                        |
+----------------------------------------+----------------------+---------------------------+
| Inherited                              | false                | ..                        |
+----------------------------------------+----------------------+---------------------------+
| Abstract                               | false                | ..                        |
+----------------------------------------+----------------------+---------------------------+
| Polling Period                         | Not polled           | ..                        |
+----------------------------------------+----------------------+---------------------------+
|                                        |                      |                           |
+----------------------------------------+----------------------+---------------------------+
| Command allowed for                    | All states           | ..                        |
+----------------------------------------+----------------------+---------------------------+

| 
**Command StopFaulty:**

Stop archiving faulty attributes

+----------------------------------------------------------+
| **StopFaulty Definition**                                |
+==============================+====================+======+
| Input Argument               | Tango::DEV_VOID    |      |
+------------------------------+--------------------+------+
| Output Argument              | Tango::DEV_VOID    |      |
+------------------------------+--------------------+------+
| DisplayLevel                 | OPERATOR           | ..   |
+------------------------------+--------------------+------+
| Inherited                    | false              | ..   |
+------------------------------+--------------------+------+
| Abstract                     | false              | ..   |
+------------------------------+--------------------+------+
| Polling Period               | Not polled         | ..   |
+------------------------------+--------------------+------+
|                              |                    |      |
+------------------------------+--------------------+------+
| Command allowed for          | All states         | ..   |
+------------------------------+--------------------+------+

| 
**Command SetAttributeTTL:**

Update TTL associated to an already archived attribute.

+------------------------------------------------------------------------------------------+
| **SetAttributeTTL Definition**                                                           |
+===================================+==============================+=======================+
| Input Argument                    | Tango::DEVVAR_STRINGARRAY    | Attribute name, TTL   |
+-----------------------------------+------------------------------+-----------------------+
| Output Argument                   | Tango::DEV_VOID              |                       |
+-----------------------------------+------------------------------+-----------------------+
| DisplayLevel                      | OPERATOR                     | ..                    |
+-----------------------------------+------------------------------+-----------------------+
| Inherited                         | false                        | ..                    |
+-----------------------------------+------------------------------+-----------------------+
| Abstract                          | false                        | ..                    |
+-----------------------------------+------------------------------+-----------------------+
| Polling Period                    | Not polled                   | ..                    |
+-----------------------------------+------------------------------+-----------------------+
|                                   |                              |                       |
+-----------------------------------+------------------------------+-----------------------+
| Command allowed for               | All states                   | ..                    |
+-----------------------------------+------------------------------+-----------------------+

| 
**Command GetAttributeTTL:**

Read an attribute TTL.

+---------------------------------------------------------------------------------+
| **GetAttributeTTL Definition**                                                  |
+===================================+======================+======================+
| Input Argument                    | Tango::DEV_STRING    | The attribute name   |
+-----------------------------------+----------------------+----------------------+
| Output Argument                   | Tango::DEV_ULONG     | The attribute TTL.   |
+-----------------------------------+----------------------+----------------------+
| DisplayLevel                      | OPERATOR             | ..                   |
+-----------------------------------+----------------------+----------------------+
| Inherited                         | false                | ..                   |
+-----------------------------------+----------------------+----------------------+
| Abstract                          | false                | ..                   |
+-----------------------------------+----------------------+----------------------+
| Polling Period                    | Not polled           | ..                   |
+-----------------------------------+----------------------+----------------------+
|                                   |                      |                      |
+-----------------------------------+----------------------+----------------------+
| Command allowed for               | All states           | ..                   |
+-----------------------------------+----------------------+----------------------+

+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| **HdbEventSubscriber Class Attributes**                                                                                                                                                                                                               |
+========================================================================+==================+=================+===================+=================+======================+==============+=============================================================+
| **Name**                                                               | **Inherited**    | **Abstract**    | **Attr. type**    | **R/W type**    | **Data type**        | **Level**    | **Description**                                             |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributeOkNumber <AttrAttributeOkNumber.html>`__                     | false            | false           | Scalar            | READ            | Tango::DEV_LONG      | OPERATOR     | Number of archived attributes not in error                  |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributeNokNumber <AttrAttributeNokNumber.html>`__                   | false            | false           | Scalar            | READ            | Tango::DEV_LONG      | OPERATOR     | Number of archived attributes in error                      |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributePendingNumber <AttrAttributePendingNumber.html>`__           | false            | false           | Scalar            | READ            | Tango::DEV_LONG      | OPERATOR     | Number of attributes waiting to be archived                 |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributeNumber <AttrAttributeNumber.html>`__                         | false            | false           | Scalar            | READ            | Tango::DEV_LONG      | OPERATOR     | Number of configured attributes                             |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributeMaxStoreTime <AttrAttributeMaxStoreTime.html>`__             | false            | false           | Scalar            | READ            | Tango::DEV_DOUBLE    | OPERATOR     | Maximum storing time                                        |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributeMinStoreTime <AttrAttributeMinStoreTime.html>`__             | false            | false           | Scalar            | READ            | Tango::DEV_DOUBLE    | OPERATOR     | Minimum storing time                                        |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributeMaxProcessingTime <AttrAttributeMaxProcessingTime.html>`__   | false            | false           | Scalar            | READ            | Tango::DEV_DOUBLE    | OPERATOR     | Maximum processing (from event reception to storage) time   |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributeMinProcessingTime <AttrAttributeMinProcessingTime.html>`__   | false            | false           | Scalar            | READ            | Tango::DEV_DOUBLE    | OPERATOR     | Minimum processing (from event reception to storage) time   |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributeRecordFreq <AttrAttributeRecordFreq.html>`__                 | false            | false           | Scalar            | READ            | Tango::DEV_DOUBLE    | OPERATOR     | Record frequency                                            |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributeFailureFreq <AttrAttributeFailureFreq.html>`__               | false            | false           | Scalar            | READ            | Tango::DEV_DOUBLE    | OPERATOR     | Failure frequency                                           |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributeStartedNumber <AttrAttributeStartedNumber.html>`__           | false            | false           | Scalar            | READ            | Tango::DEV_LONG      | OPERATOR     | Number of archived attributes started                       |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributeStoppedNumber <AttrAttributeStoppedNumber.html>`__           | false            | false           | Scalar            | READ            | Tango::DEV_LONG      | OPERATOR     | Number of archived attributes stopped                       |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributeMaxPendingNumber <AttrAttributeMaxPendingNumber.html>`__     | false            | false           | Scalar            | READ            | Tango::DEV_LONG      | OPERATOR     | Max number of attributes waiting to be archived             |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `StatisticsResetTime <AttrStatisticsResetTime.html>`__                 | false            | false           | Scalar            | READ            | Tango::DEV_DOUBLE    | OPERATOR     | Seconds elapsed since the last statistics reset             |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributePausedNumber <AttrAttributePausedNumber.html>`__             | false            | false           | Scalar            | READ            | Tango::DEV_LONG      | OPERATOR     | Number of archived attributes paused                        |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `Context <AttrContext.html>`__                                         | false            | false           | Scalar            | READ_WRITE      | Tango::DEV_STRING    | OPERATOR     |                                                             |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributeList <AttrAttributeList.html>`__                             | false            | false           | Spectrum          | READ            | Tango::DEV_STRING    | OPERATOR     | Returns the configured attribute list                       |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributeOkList <AttrAttributeOkList.html>`__                         | false            | false           | Spectrum          | READ            | Tango::DEV_STRING    | OPERATOR     | Returns the attributes not on error list                    |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributeNokList <AttrAttributeNokList.html>`__                       | false            | false           | Spectrum          | READ            | Tango::DEV_STRING    | OPERATOR     | Returns the attributes on error list                        |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributePendingList <AttrAttributePendingList.html>`__               | false            | false           | Spectrum          | READ            | Tango::DEV_STRING    | OPERATOR     | Returns the list attributes waiting to be archived          |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributeRecordFreqList <AttrAttributeRecordFreqList.html>`__         | false            | false           | Spectrum          | READ            | Tango::DEV_DOUBLE    | OPERATOR     | Returns the list of record frequencies                      |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributeFailureFreqList <AttrAttributeFailureFreqList.html>`__       | false            | false           | Spectrum          | READ            | Tango::DEV_DOUBLE    | OPERATOR     | Returns the list of failure frequencies                     |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributeStartedList <AttrAttributeStartedList.html>`__               | false            | false           | Spectrum          | READ            | Tango::DEV_STRING    | OPERATOR     | Returns the attributes started list                         |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributeStoppedList <AttrAttributeStoppedList.html>`__               | false            | false           | Spectrum          | READ            | Tango::DEV_STRING    | OPERATOR     | Returns the attributes stopped list                         |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributeEventNumberList <AttrAttributeEventNumberList.html>`__       | false            | false           | Spectrum          | READ            | Tango::DEV_LONG      | OPERATOR     | Returns the list of numbers of events received              |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributeErrorList <AttrAttributeErrorList.html>`__                   | false            | false           | Spectrum          | READ            | Tango::DEV_STRING    | OPERATOR     | Returns the list of attribute errors                        |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributePausedList <AttrAttributePausedList.html>`__                 | false            | false           | Spectrum          | READ            | Tango::DEV_STRING    | OPERATOR     | Returns the attributes stopped list                         |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributeStrategyList <AttrAttributeStrategyList.html>`__             | false            | false           | Spectrum          | READ            | Tango::DEV_STRING    | OPERATOR     | Returns the list of attribute strategy                      |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `ContextsList <AttrContextsList.html>`__                               | false            | false           | Spectrum          | READ            | Tango::DEV_STRING    | OPERATOR     |                                                             |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+
| `AttributeTTLList <AttrAttributeTTLList.html>`__                       | false            | false           | Spectrum          | READ            | Tango::DEV_ULONG     | OPERATOR     | Returns the list of attribute strategy                      |
+------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+----------------------+--------------+-------------------------------------------------------------+

**There is no dynamic attribute defined.**

| 
**Attribute AttributeOkNumber:**

Number of archived attributes not in error

+--------------------------------------------------------+----------------------------------------+-------------------------------------------------------+
| +--------------------------------------------------+   | +----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                         |   | | **Attribute Properties**         |   | | **Attribute Event Criteria**                    |   |
| +=============================+====================+   | +=============================+====+   | +=====================================+===========+   |
| | Attribute Type              | Scalar             |   | | label                       |    |   | | Periodic                            | Not set   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ               |   | | unit                        |    |   | | Relative Change                     | Not set   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_LONG    |   | | standard unit               |    |   | | Absolute Change                     | 1         |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR           |   | | display unit                |    |   | |                                     |           |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false              |   | | format                      |    |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false              |   | | max_value                   |    |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled         |   | | min_value                   |    |   | | Archive Absolute Change             | 1         |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set            |   | | max_alarm                   |    |   | |                                     |           |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| |                             |                    |   | | min_alarm                   |    |   | | Push Change event by user code      | true      |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states         |   | | max_warning                 |    |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        | | min_warning                 |    |   | |                                     |           |   |
|                                                        | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        | | delta_time                  |    |   | | Push Archive event by user code     | true      |   |
|                                                        | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        | | delta_val                   |    |   | |     Criteria checked by TANGO       | true      |   |
|                                                        | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        |                                        | |                                     |           |   |
|                                                        |                                        | +-------------------------------------+-----------+   |
|                                                        |                                        | | Push DataReady event by user code   | false     |   |
|                                                        |                                        | +-------------------------------------+-----------+   |
+========================================================+========================================+=======================================================+
+--------------------------------------------------------+----------------------------------------+-------------------------------------------------------+

| 
**Attribute AttributeNokNumber:**

Number of archived attributes in error

+--------------------------------------------------------+-----------------------------------------+-------------------------------------------------------+
| +--------------------------------------------------+   | +-----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                         |   | | **Attribute Properties**          |   | | **Attribute Event Criteria**                    |   |
| +=============================+====================+   | +=============================+=====+   | +=====================================+===========+   |
| | Attribute Type              | Scalar             |   | | label                       |     |   | | Periodic                            | Not set   |   |
| +-----------------------------+--------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ               |   | | unit                        |     |   | | Relative Change                     | Not set   |   |
| +-----------------------------+--------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_LONG    |   | | standard unit               |     |   | | Absolute Change                     | 1         |   |
| +-----------------------------+--------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR           |   | | display unit                |     |   | |                                     |           |   |
| +-----------------------------+--------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false              |   | | format                      |     |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+--------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false              |   | | max_value                   |     |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+--------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled         |   | | min_value                   |     |   | | Archive Absolute Change             | 1         |   |
| +-----------------------------+--------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set            |   | | max_alarm                   | 1   |   | |                                     |           |   |
| +-----------------------------+--------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| |                             |                    |   | | min_alarm                   |     |   | | Push Change event by user code      | true      |   |
| +-----------------------------+--------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states         |   | | max_warning                 |     |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+--------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
|                                                        | | min_warning                 |     |   | |                                     |           |   |
|                                                        | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
|                                                        | | delta_time                  |     |   | | Push Archive event by user code     | true      |   |
|                                                        | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
|                                                        | | delta_val                   |     |   | |     Criteria checked by TANGO       | true      |   |
|                                                        | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
|                                                        |                                         | |                                     |           |   |
|                                                        |                                         | +-------------------------------------+-----------+   |
|                                                        |                                         | | Push DataReady event by user code   | false     |   |
|                                                        |                                         | +-------------------------------------+-----------+   |
+========================================================+=========================================+=======================================================+
+--------------------------------------------------------+-----------------------------------------+-------------------------------------------------------+

| 
**Attribute AttributePendingNumber:**

Number of attributes waiting to be archived

+--------------------------------------------------------+----------------------------------------+-------------------------------------------------------+
| +--------------------------------------------------+   | +----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                         |   | | **Attribute Properties**         |   | | **Attribute Event Criteria**                    |   |
| +=============================+====================+   | +=============================+====+   | +=====================================+===========+   |
| | Attribute Type              | Scalar             |   | | label                       |    |   | | Periodic                            | Not set   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ               |   | | unit                        |    |   | | Relative Change                     | Not set   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_LONG    |   | | standard unit               |    |   | | Absolute Change                     | 2         |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR           |   | | display unit                |    |   | |                                     |           |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false              |   | | format                      |    |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false              |   | | max_value                   |    |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled         |   | | min_value                   |    |   | | Archive Absolute Change             | 2         |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set            |   | | max_alarm                   |    |   | |                                     |           |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| |                             |                    |   | | min_alarm                   |    |   | | Push Change event by user code      | true      |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states         |   | | max_warning                 |    |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        | | min_warning                 |    |   | |                                     |           |   |
|                                                        | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        | | delta_time                  |    |   | | Push Archive event by user code     | true      |   |
|                                                        | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        | | delta_val                   |    |   | |     Criteria checked by TANGO       | true      |   |
|                                                        | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        |                                        | |                                     |           |   |
|                                                        |                                        | +-------------------------------------+-----------+   |
|                                                        |                                        | | Push DataReady event by user code   | false     |   |
|                                                        |                                        | +-------------------------------------+-----------+   |
+========================================================+========================================+=======================================================+
+--------------------------------------------------------+----------------------------------------+-------------------------------------------------------+

| 
**Attribute AttributeNumber:**

Number of configured attributes

+--------------------------------------------------------+----------------------------------------+-------------------------------------------------------+
| +--------------------------------------------------+   | +----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                         |   | | **Attribute Properties**         |   | | **Attribute Event Criteria**                    |   |
| +=============================+====================+   | +=============================+====+   | +=====================================+===========+   |
| | Attribute Type              | Scalar             |   | | label                       |    |   | | Periodic                            | Not set   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ               |   | | unit                        |    |   | | Relative Change                     | Not set   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_LONG    |   | | standard unit               |    |   | | Absolute Change                     | 1         |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR           |   | | display unit                |    |   | |                                     |           |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false              |   | | format                      |    |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false              |   | | max_value                   |    |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled         |   | | min_value                   |    |   | | Archive Absolute Change             | 1         |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set            |   | | max_alarm                   |    |   | |                                     |           |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| |                             |                    |   | | min_alarm                   |    |   | | Push Change event by user code      | true      |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states         |   | | max_warning                 |    |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        | | min_warning                 |    |   | |                                     |           |   |
|                                                        | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        | | delta_time                  |    |   | | Push Archive event by user code     | true      |   |
|                                                        | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        | | delta_val                   |    |   | |     Criteria checked by TANGO       | true      |   |
|                                                        | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        |                                        | |                                     |           |   |
|                                                        |                                        | +-------------------------------------+-----------+   |
|                                                        |                                        | | Push DataReady event by user code   | false     |   |
|                                                        |                                        | +-------------------------------------+-----------+   |
+========================================================+========================================+=======================================================+
+--------------------------------------------------------+----------------------------------------+-------------------------------------------------------+

| 
**Attribute AttributeMaxStoreTime:**

Maximum storing time

+----------------------------------------------------------+-----------------------------------------+-------------------------------------------------------+
| +----------------------------------------------------+   | +-----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                           |   | | **Attribute Properties**          |   | | **Attribute Event Criteria**                    |   |
| +=============================+======================+   | +=============================+=====+   | +=====================================+===========+   |
| | Attribute Type              | Scalar               |   | | label                       |     |   | | Periodic                            | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ                 |   | | unit                        | s   |   | | Relative Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_DOUBLE    |   | | standard unit               | 1   |   | | Absolute Change                     | 0.001     |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR             |   | | display unit                | s   |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false                |   | | format                      |     |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false                |   | | max_value                   |     |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled           |   | | min_value                   |     |   | | Archive Absolute Change             | 0.001     |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set              |   | | max_alarm                   |     |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| |                             |                      |   | | min_alarm                   |     |   | | Push Change event by user code      | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states           |   | | max_warning                 |     |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
|                                                          | | min_warning                 |     |   | |                                     |           |   |
|                                                          | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_time                  |     |   | | Push Archive event by user code     | true      |   |
|                                                          | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_val                   |     |   | |     Criteria checked by TANGO       | true      |   |
|                                                          | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
|                                                          |                                         | |                                     |           |   |
|                                                          |                                         | +-------------------------------------+-----------+   |
|                                                          |                                         | | Push DataReady event by user code   | false     |   |
|                                                          |                                         | +-------------------------------------+-----------+   |
+==========================================================+=========================================+=======================================================+
+----------------------------------------------------------+-----------------------------------------+-------------------------------------------------------+

| 
**Attribute AttributeMinStoreTime:**

Minimum storing time

+----------------------------------------------------------+-----------------------------------------+-------------------------------------------------------+
| +----------------------------------------------------+   | +-----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                           |   | | **Attribute Properties**          |   | | **Attribute Event Criteria**                    |   |
| +=============================+======================+   | +=============================+=====+   | +=====================================+===========+   |
| | Attribute Type              | Scalar               |   | | label                       |     |   | | Periodic                            | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ                 |   | | unit                        | s   |   | | Relative Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_DOUBLE    |   | | standard unit               | 1   |   | | Absolute Change                     | 0.00001   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR             |   | | display unit                | s   |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false                |   | | format                      |     |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false                |   | | max_value                   |     |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled           |   | | min_value                   |     |   | | Archive Absolute Change             | 0.00001   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set              |   | | max_alarm                   |     |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| |                             |                      |   | | min_alarm                   |     |   | | Push Change event by user code      | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states           |   | | max_warning                 |     |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
|                                                          | | min_warning                 |     |   | |                                     |           |   |
|                                                          | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_time                  |     |   | | Push Archive event by user code     | true      |   |
|                                                          | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_val                   |     |   | |     Criteria checked by TANGO       | true      |   |
|                                                          | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
|                                                          |                                         | |                                     |           |   |
|                                                          |                                         | +-------------------------------------+-----------+   |
|                                                          |                                         | | Push DataReady event by user code   | false     |   |
|                                                          |                                         | +-------------------------------------+-----------+   |
+==========================================================+=========================================+=======================================================+
+----------------------------------------------------------+-----------------------------------------+-------------------------------------------------------+

| 
**Attribute AttributeMaxProcessingTime:**

Maximum processing (from event reception to storage) time

+----------------------------------------------------------+-----------------------------------------+-------------------------------------------------------+
| +----------------------------------------------------+   | +-----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                           |   | | **Attribute Properties**          |   | | **Attribute Event Criteria**                    |   |
| +=============================+======================+   | +=============================+=====+   | +=====================================+===========+   |
| | Attribute Type              | Scalar               |   | | label                       |     |   | | Periodic                            | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ                 |   | | unit                        | s   |   | | Relative Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_DOUBLE    |   | | standard unit               | 1   |   | | Absolute Change                     | 0.001     |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR             |   | | display unit                | s   |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false                |   | | format                      |     |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false                |   | | max_value                   |     |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled           |   | | min_value                   |     |   | | Archive Absolute Change             | 0.001     |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set              |   | | max_alarm                   |     |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| |                             |                      |   | | min_alarm                   |     |   | | Push Change event by user code      | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states           |   | | max_warning                 |     |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
|                                                          | | min_warning                 |     |   | |                                     |           |   |
|                                                          | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_time                  |     |   | | Push Archive event by user code     | true      |   |
|                                                          | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_val                   |     |   | |     Criteria checked by TANGO       | true      |   |
|                                                          | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
|                                                          |                                         | |                                     |           |   |
|                                                          |                                         | +-------------------------------------+-----------+   |
|                                                          |                                         | | Push DataReady event by user code   | false     |   |
|                                                          |                                         | +-------------------------------------+-----------+   |
+==========================================================+=========================================+=======================================================+
+----------------------------------------------------------+-----------------------------------------+-------------------------------------------------------+

| 
**Attribute AttributeMinProcessingTime:**

Minimum processing (from event reception to storage) time

+----------------------------------------------------------+-----------------------------------------+-------------------------------------------------------+
| +----------------------------------------------------+   | +-----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                           |   | | **Attribute Properties**          |   | | **Attribute Event Criteria**                    |   |
| +=============================+======================+   | +=============================+=====+   | +=====================================+===========+   |
| | Attribute Type              | Scalar               |   | | label                       |     |   | | Periodic                            | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ                 |   | | unit                        | s   |   | | Relative Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_DOUBLE    |   | | standard unit               | 1   |   | | Absolute Change                     | 0.00001   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR             |   | | display unit                | s   |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false                |   | | format                      |     |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false                |   | | max_value                   |     |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled           |   | | min_value                   |     |   | | Archive Absolute Change             | 0.00001   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set              |   | | max_alarm                   |     |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| |                             |                      |   | | min_alarm                   |     |   | | Push Change event by user code      | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states           |   | | max_warning                 |     |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
|                                                          | | min_warning                 |     |   | |                                     |           |   |
|                                                          | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_time                  |     |   | | Push Archive event by user code     | true      |   |
|                                                          | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_val                   |     |   | |     Criteria checked by TANGO       | true      |   |
|                                                          | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
|                                                          |                                         | |                                     |           |   |
|                                                          |                                         | +-------------------------------------+-----------+   |
|                                                          |                                         | | Push DataReady event by user code   | false     |   |
|                                                          |                                         | +-------------------------------------+-----------+   |
+==========================================================+=========================================+=======================================================+
+----------------------------------------------------------+-----------------------------------------+-------------------------------------------------------+

| 
**Attribute AttributeRecordFreq:**

Record frequency

+----------------------------------------------------------+-------------------------------------------------+-------------------------------------------------------+
| +----------------------------------------------------+   | +-------------------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                           |   | | **Attribute Properties**                  |   | | **Attribute Event Criteria**                    |   |
| +=============================+======================+   | +=============================+=============+   | +=====================================+===========+   |
| | Attribute Type              | Scalar               |   | | label                       |             |   | | Periodic                            | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-------------+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ                 |   | | unit                        | ev/period   |   | | Relative Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-------------+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_DOUBLE    |   | | standard unit               | 1           |   | | Absolute Change                     | 1         |   |
| +-----------------------------+----------------------+   | +-----------------------------+-------------+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR             |   | | display unit                | ev/period   |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+-------------+   | +-------------------------------------+-----------+   |
| | Inherited                   | false                |   | | format                      |             |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-------------+   | +-------------------------------------+-----------+   |
| | Abstract                    | false                |   | | max_value                   |             |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-------------+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled           |   | | min_value                   |             |   | | Archive Absolute Change             | 1         |   |
| +-----------------------------+----------------------+   | +-----------------------------+-------------+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set              |   | | max_alarm                   |             |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+-------------+   | +-------------------------------------+-----------+   |
| |                             |                      |   | | min_alarm                   |             |   | | Push Change event by user code      | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+-------------+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states           |   | | max_warning                 |             |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+-------------+   | +-------------------------------------+-----------+   |
|                                                          | | min_warning                 |             |   | |                                     |           |   |
|                                                          | +-----------------------------+-------------+   | +-------------------------------------+-----------+   |
|                                                          | | delta_time                  |             |   | | Push Archive event by user code     | true      |   |
|                                                          | +-----------------------------+-------------+   | +-------------------------------------+-----------+   |
|                                                          | | delta_val                   |             |   | |     Criteria checked by TANGO       | true      |   |
|                                                          | +-----------------------------+-------------+   | +-------------------------------------+-----------+   |
|                                                          |                                                 | |                                     |           |   |
|                                                          |                                                 | +-------------------------------------+-----------+   |
|                                                          |                                                 | | Push DataReady event by user code   | false     |   |
|                                                          |                                                 | +-------------------------------------+-----------+   |
+==========================================================+=================================================+=======================================================+
+----------------------------------------------------------+-------------------------------------------------+-------------------------------------------------------+

| 
**Attribute AttributeFailureFreq:**

Failure frequency

+----------------------------------------------------------+-------------------------------------------------+-------------------------------------------------------+
| +----------------------------------------------------+   | +-------------------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                           |   | | **Attribute Properties**                  |   | | **Attribute Event Criteria**                    |   |
| +=============================+======================+   | +=============================+=============+   | +=====================================+===========+   |
| | Attribute Type              | Scalar               |   | | label                       |             |   | | Periodic                            | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-------------+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ                 |   | | unit                        | ev/period   |   | | Relative Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-------------+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_DOUBLE    |   | | standard unit               | 1           |   | | Absolute Change                     | 1         |   |
| +-----------------------------+----------------------+   | +-----------------------------+-------------+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR             |   | | display unit                | ev/period   |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+-------------+   | +-------------------------------------+-----------+   |
| | Inherited                   | false                |   | | format                      |             |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-------------+   | +-------------------------------------+-----------+   |
| | Abstract                    | false                |   | | max_value                   |             |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-------------+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled           |   | | min_value                   |             |   | | Archive Absolute Change             | 1         |   |
| +-----------------------------+----------------------+   | +-----------------------------+-------------+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set              |   | | max_alarm                   |             |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+-------------+   | +-------------------------------------+-----------+   |
| |                             |                      |   | | min_alarm                   |             |   | | Push Change event by user code      | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+-------------+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states           |   | | max_warning                 |             |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+-------------+   | +-------------------------------------+-----------+   |
|                                                          | | min_warning                 |             |   | |                                     |           |   |
|                                                          | +-----------------------------+-------------+   | +-------------------------------------+-----------+   |
|                                                          | | delta_time                  |             |   | | Push Archive event by user code     | true      |   |
|                                                          | +-----------------------------+-------------+   | +-------------------------------------+-----------+   |
|                                                          | | delta_val                   |             |   | |     Criteria checked by TANGO       | true      |   |
|                                                          | +-----------------------------+-------------+   | +-------------------------------------+-----------+   |
|                                                          |                                                 | |                                     |           |   |
|                                                          |                                                 | +-------------------------------------+-----------+   |
|                                                          |                                                 | | Push DataReady event by user code   | false     |   |
|                                                          |                                                 | +-------------------------------------+-----------+   |
+==========================================================+=================================================+=======================================================+
+----------------------------------------------------------+-------------------------------------------------+-------------------------------------------------------+

| 
**Attribute AttributeStartedNumber:**

Number of archived attributes started

+--------------------------------------------------------+----------------------------------------+-------------------------------------------------------+
| +--------------------------------------------------+   | +----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                         |   | | **Attribute Properties**         |   | | **Attribute Event Criteria**                    |   |
| +=============================+====================+   | +=============================+====+   | +=====================================+===========+   |
| | Attribute Type              | Scalar             |   | | label                       |    |   | | Periodic                            | Not set   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ               |   | | unit                        |    |   | | Relative Change                     | Not set   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_LONG    |   | | standard unit               |    |   | | Absolute Change                     | 1         |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR           |   | | display unit                |    |   | |                                     |           |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false              |   | | format                      |    |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false              |   | | max_value                   |    |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled         |   | | min_value                   |    |   | | Archive Absolute Change             | 1         |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set            |   | | max_alarm                   |    |   | |                                     |           |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| |                             |                    |   | | min_alarm                   |    |   | | Push Change event by user code      | true      |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states         |   | | max_warning                 |    |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        | | min_warning                 |    |   | |                                     |           |   |
|                                                        | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        | | delta_time                  |    |   | | Push Archive event by user code     | true      |   |
|                                                        | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        | | delta_val                   |    |   | |     Criteria checked by TANGO       | true      |   |
|                                                        | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        |                                        | |                                     |           |   |
|                                                        |                                        | +-------------------------------------+-----------+   |
|                                                        |                                        | | Push DataReady event by user code   | false     |   |
|                                                        |                                        | +-------------------------------------+-----------+   |
+========================================================+========================================+=======================================================+
+--------------------------------------------------------+----------------------------------------+-------------------------------------------------------+

| 
**Attribute AttributeStoppedNumber:**

Number of archived attributes stopped

+--------------------------------------------------------+----------------------------------------+-------------------------------------------------------+
| +--------------------------------------------------+   | +----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                         |   | | **Attribute Properties**         |   | | **Attribute Event Criteria**                    |   |
| +=============================+====================+   | +=============================+====+   | +=====================================+===========+   |
| | Attribute Type              | Scalar             |   | | label                       |    |   | | Periodic                            | Not set   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ               |   | | unit                        |    |   | | Relative Change                     | Not set   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_LONG    |   | | standard unit               |    |   | | Absolute Change                     | 1         |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR           |   | | display unit                |    |   | |                                     |           |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false              |   | | format                      |    |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false              |   | | max_value                   |    |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled         |   | | min_value                   |    |   | | Archive Absolute Change             | 1         |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set            |   | | max_alarm                   |    |   | |                                     |           |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| |                             |                    |   | | min_alarm                   |    |   | | Push Change event by user code      | true      |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states         |   | | max_warning                 |    |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        | | min_warning                 |    |   | |                                     |           |   |
|                                                        | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        | | delta_time                  |    |   | | Push Archive event by user code     | true      |   |
|                                                        | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        | | delta_val                   |    |   | |     Criteria checked by TANGO       | true      |   |
|                                                        | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        |                                        | |                                     |           |   |
|                                                        |                                        | +-------------------------------------+-----------+   |
|                                                        |                                        | | Push DataReady event by user code   | false     |   |
|                                                        |                                        | +-------------------------------------+-----------+   |
+========================================================+========================================+=======================================================+
+--------------------------------------------------------+----------------------------------------+-------------------------------------------------------+

| 
**Attribute AttributeMaxPendingNumber:**

Max number of attributes waiting to be archived

+--------------------------------------------------------+----------------------------------------+-------------------------------------------------------+
| +--------------------------------------------------+   | +----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                         |   | | **Attribute Properties**         |   | | **Attribute Event Criteria**                    |   |
| +=============================+====================+   | +=============================+====+   | +=====================================+===========+   |
| | Attribute Type              | Scalar             |   | | label                       |    |   | | Periodic                            | Not set   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ               |   | | unit                        |    |   | | Relative Change                     | Not set   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_LONG    |   | | standard unit               |    |   | | Absolute Change                     | 1         |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR           |   | | display unit                |    |   | |                                     |           |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false              |   | | format                      |    |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false              |   | | max_value                   |    |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled         |   | | min_value                   |    |   | | Archive Absolute Change             | 1         |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set            |   | | max_alarm                   |    |   | |                                     |           |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| |                             |                    |   | | min_alarm                   |    |   | | Push Change event by user code      | true      |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states         |   | | max_warning                 |    |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        | | min_warning                 |    |   | |                                     |           |   |
|                                                        | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        | | delta_time                  |    |   | | Push Archive event by user code     | true      |   |
|                                                        | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        | | delta_val                   |    |   | |     Criteria checked by TANGO       | true      |   |
|                                                        | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        |                                        | |                                     |           |   |
|                                                        |                                        | +-------------------------------------+-----------+   |
|                                                        |                                        | | Push DataReady event by user code   | false     |   |
|                                                        |                                        | +-------------------------------------+-----------+   |
+========================================================+========================================+=======================================================+
+--------------------------------------------------------+----------------------------------------+-------------------------------------------------------+

| 
**Attribute StatisticsResetTime:**

Seconds elapsed since the last statistics reset

+----------------------------------------------------------+-----------------------------------------+-------------------------------------------------------+
| +----------------------------------------------------+   | +-----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                           |   | | **Attribute Properties**          |   | | **Attribute Event Criteria**                    |   |
| +=============================+======================+   | +=============================+=====+   | +=====================================+===========+   |
| | Attribute Type              | Scalar               |   | | label                       |     |   | | Periodic                            | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ                 |   | | unit                        | s   |   | | Relative Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_DOUBLE    |   | | standard unit               | 1   |   | | Absolute Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR             |   | | display unit                | s   |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false                |   | | format                      |     |   | | Archive Periodic                    | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false                |   | | max_value                   |     |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled           |   | | min_value                   |     |   | | Archive Absolute Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set              |   | | max_alarm                   |     |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| |                             |                      |   | | min_alarm                   |     |   | | Push Change event by user code      | false     |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states           |   | | max_warning                 |     |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
|                                                          | | min_warning                 |     |   | | Push Archive event by user code     | false     |   |
|                                                          | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_time                  |     |   | |                                     |           |   |
|                                                          | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_val                   |     |   | | Push DataReady event by user code   | false     |   |
|                                                          | +-----------------------------+-----+   | +-------------------------------------+-----------+   |
+==========================================================+=========================================+=======================================================+
+----------------------------------------------------------+-----------------------------------------+-------------------------------------------------------+

| 
**Attribute AttributePausedNumber:**

Number of archived attributes paused

+--------------------------------------------------------+----------------------------------------+-------------------------------------------------------+
| +--------------------------------------------------+   | +----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                         |   | | **Attribute Properties**         |   | | **Attribute Event Criteria**                    |   |
| +=============================+====================+   | +=============================+====+   | +=====================================+===========+   |
| | Attribute Type              | Scalar             |   | | label                       |    |   | | Periodic                            | Not set   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ               |   | | unit                        |    |   | | Relative Change                     | Not set   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_LONG    |   | | standard unit               |    |   | | Absolute Change                     | 1         |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR           |   | | display unit                |    |   | |                                     |           |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false              |   | | format                      |    |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false              |   | | max_value                   |    |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled         |   | | min_value                   |    |   | | Archive Absolute Change             | 1         |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set            |   | | max_alarm                   |    |   | |                                     |           |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| |                             |                    |   | | min_alarm                   |    |   | | Push Change event by user code      | true      |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states         |   | | max_warning                 |    |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+--------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        | | min_warning                 |    |   | |                                     |           |   |
|                                                        | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        | | delta_time                  |    |   | | Push Archive event by user code     | true      |   |
|                                                        | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        | | delta_val                   |    |   | |     Criteria checked by TANGO       | true      |   |
|                                                        | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                        |                                        | |                                     |           |   |
|                                                        |                                        | +-------------------------------------+-----------+   |
|                                                        |                                        | | Push DataReady event by user code   | false     |   |
|                                                        |                                        | +-------------------------------------+-----------+   |
+========================================================+========================================+=======================================================+
+--------------------------------------------------------+----------------------------------------+-------------------------------------------------------+

| 
**Attribute Context:**

+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+
| +----------------------------------------------------+   | +----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                           |   | | **Attribute Properties**         |   | | **Attribute Event Criteria**                    |   |
| +=============================+======================+   | +=============================+====+   | +=====================================+===========+   |
| | Attribute Type              | Scalar               |   | | label                       |    |   | | Periodic                            | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ_WRITE           |   | | unit                        |    |   | | Relative Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_STRING    |   | | standard unit               |    |   | | Absolute Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR             |   | | display unit                |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false                |   | | format                      |    |   | | Archive Periodic                    | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false                |   | | max_value                   |    |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled           |   | | min_value                   |    |   | | Archive Absolute Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Memorized                   | true                 |   | | max_alarm                   |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Write hardware at init.     | true                 |   | | min_alarm                   |    |   | | Push Change event by user code      | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| |                             |                      |   | | max_warning                 |    |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states           |   | | min_warning                 |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Write allowed for           | All states           |   | | delta_time                  |    |   | | Push Archive event by user code     | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_val                   |    |   | |     Criteria checked by TANGO       | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          |                                        | |                                     |           |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
|                                                          |                                        | | Push DataReady event by user code   | false     |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
+==========================================================+========================================+=======================================================+
+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+

| 
**Attribute AttributeList:**

Returns the configured attribute list

+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+
| +----------------------------------------------------+   | +----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                           |   | | **Attribute Properties**         |   | | **Attribute Event Criteria**                    |   |
| +=============================+======================+   | +=============================+====+   | +=====================================+===========+   |
| | Attribute Type              | Spectrum ( 10000 )   |   | | label                       |    |   | | Periodic                            | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ                 |   | | unit                        |    |   | | Relative Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_STRING    |   | | standard unit               |    |   | | Absolute Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR             |   | | display unit                |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false                |   | | format                      |    |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false                |   | | max_value                   |    |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled           |   | | min_value                   |    |   | | Archive Absolute Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set              |   | | max_alarm                   |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| |                             |                      |   | | min_alarm                   |    |   | | Push Change event by user code      | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states           |   | | max_warning                 |    |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | min_warning                 |    |   | |                                     |           |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_time                  |    |   | | Push Archive event by user code     | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_val                   |    |   | |     Criteria checked by TANGO       | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          |                                        | |                                     |           |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
|                                                          |                                        | | Push DataReady event by user code   | false     |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
+==========================================================+========================================+=======================================================+
+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+

| 
**Attribute AttributeOkList:**

Returns the attributes not on error list

+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+
| +----------------------------------------------------+   | +----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                           |   | | **Attribute Properties**         |   | | **Attribute Event Criteria**                    |   |
| +=============================+======================+   | +=============================+====+   | +=====================================+===========+   |
| | Attribute Type              | Spectrum ( 10000 )   |   | | label                       |    |   | | Periodic                            | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ                 |   | | unit                        |    |   | | Relative Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_STRING    |   | | standard unit               |    |   | | Absolute Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR             |   | | display unit                |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false                |   | | format                      |    |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false                |   | | max_value                   |    |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled           |   | | min_value                   |    |   | | Archive Absolute Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set              |   | | max_alarm                   |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| |                             |                      |   | | min_alarm                   |    |   | | Push Change event by user code      | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states           |   | | max_warning                 |    |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | min_warning                 |    |   | |                                     |           |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_time                  |    |   | | Push Archive event by user code     | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_val                   |    |   | |     Criteria checked by TANGO       | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          |                                        | |                                     |           |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
|                                                          |                                        | | Push DataReady event by user code   | false     |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
+==========================================================+========================================+=======================================================+
+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+

| 
**Attribute AttributeNokList:**

Returns the attributes on error list

+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+
| +----------------------------------------------------+   | +----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                           |   | | **Attribute Properties**         |   | | **Attribute Event Criteria**                    |   |
| +=============================+======================+   | +=============================+====+   | +=====================================+===========+   |
| | Attribute Type              | Spectrum ( 10000 )   |   | | label                       |    |   | | Periodic                            | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ                 |   | | unit                        |    |   | | Relative Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_STRING    |   | | standard unit               |    |   | | Absolute Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR             |   | | display unit                |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false                |   | | format                      |    |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false                |   | | max_value                   |    |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled           |   | | min_value                   |    |   | | Archive Absolute Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set              |   | | max_alarm                   |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| |                             |                      |   | | min_alarm                   |    |   | | Push Change event by user code      | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states           |   | | max_warning                 |    |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | min_warning                 |    |   | |                                     |           |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_time                  |    |   | | Push Archive event by user code     | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_val                   |    |   | |     Criteria checked by TANGO       | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          |                                        | |                                     |           |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
|                                                          |                                        | | Push DataReady event by user code   | false     |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
+==========================================================+========================================+=======================================================+
+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+

| 
**Attribute AttributePendingList:**

Returns the list attributes waiting to be archived

+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+
| +----------------------------------------------------+   | +----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                           |   | | **Attribute Properties**         |   | | **Attribute Event Criteria**                    |   |
| +=============================+======================+   | +=============================+====+   | +=====================================+===========+   |
| | Attribute Type              | Spectrum ( 10000 )   |   | | label                       |    |   | | Periodic                            | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ                 |   | | unit                        |    |   | | Relative Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_STRING    |   | | standard unit               |    |   | | Absolute Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR             |   | | display unit                |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false                |   | | format                      |    |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false                |   | | max_value                   |    |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled           |   | | min_value                   |    |   | | Archive Absolute Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set              |   | | max_alarm                   |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| |                             |                      |   | | min_alarm                   |    |   | | Push Change event by user code      | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states           |   | | max_warning                 |    |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | min_warning                 |    |   | |                                     |           |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_time                  |    |   | | Push Archive event by user code     | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_val                   |    |   | |     Criteria checked by TANGO       | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          |                                        | |                                     |           |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
|                                                          |                                        | | Push DataReady event by user code   | false     |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
+==========================================================+========================================+=======================================================+
+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+

| 
**Attribute AttributeRecordFreqList:**

Returns the list of record frequencies

+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+
| +----------------------------------------------------+   | +----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                           |   | | **Attribute Properties**         |   | | **Attribute Event Criteria**                    |   |
| +=============================+======================+   | +=============================+====+   | +=====================================+===========+   |
| | Attribute Type              | Spectrum ( 10000 )   |   | | label                       |    |   | | Periodic                            | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ                 |   | | unit                        |    |   | | Relative Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_DOUBLE    |   | | standard unit               |    |   | | Absolute Change                     | 1         |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR             |   | | display unit                |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false                |   | | format                      |    |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false                |   | | max_value                   |    |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled           |   | | min_value                   |    |   | | Archive Absolute Change             | 1         |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set              |   | | max_alarm                   |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| |                             |                      |   | | min_alarm                   |    |   | | Push Change event by user code      | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states           |   | | max_warning                 |    |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | min_warning                 |    |   | |                                     |           |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_time                  |    |   | | Push Archive event by user code     | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_val                   |    |   | |     Criteria checked by TANGO       | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          |                                        | |                                     |           |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
|                                                          |                                        | | Push DataReady event by user code   | false     |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
+==========================================================+========================================+=======================================================+
+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+

| 
**Attribute AttributeFailureFreqList:**

Returns the list of failure frequencies

+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+
| +----------------------------------------------------+   | +----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                           |   | | **Attribute Properties**         |   | | **Attribute Event Criteria**                    |   |
| +=============================+======================+   | +=============================+====+   | +=====================================+===========+   |
| | Attribute Type              | Spectrum ( 10000 )   |   | | label                       |    |   | | Periodic                            | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ                 |   | | unit                        |    |   | | Relative Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_DOUBLE    |   | | standard unit               |    |   | | Absolute Change                     | 1         |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR             |   | | display unit                |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false                |   | | format                      |    |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false                |   | | max_value                   |    |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled           |   | | min_value                   |    |   | | Archive Absolute Change             | 1         |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set              |   | | max_alarm                   |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| |                             |                      |   | | min_alarm                   |    |   | | Push Change event by user code      | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states           |   | | max_warning                 |    |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | min_warning                 |    |   | |                                     |           |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_time                  |    |   | | Push Archive event by user code     | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_val                   |    |   | |     Criteria checked by TANGO       | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          |                                        | |                                     |           |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
|                                                          |                                        | | Push DataReady event by user code   | false     |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
+==========================================================+========================================+=======================================================+
+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+

| 
**Attribute AttributeStartedList:**

Returns the attributes started list

+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+
| +----------------------------------------------------+   | +----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                           |   | | **Attribute Properties**         |   | | **Attribute Event Criteria**                    |   |
| +=============================+======================+   | +=============================+====+   | +=====================================+===========+   |
| | Attribute Type              | Spectrum ( 10000 )   |   | | label                       |    |   | | Periodic                            | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ                 |   | | unit                        |    |   | | Relative Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_STRING    |   | | standard unit               |    |   | | Absolute Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR             |   | | display unit                |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false                |   | | format                      |    |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false                |   | | max_value                   |    |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled           |   | | min_value                   |    |   | | Archive Absolute Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set              |   | | max_alarm                   |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| |                             |                      |   | | min_alarm                   |    |   | | Push Change event by user code      | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states           |   | | max_warning                 |    |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | min_warning                 |    |   | |                                     |           |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_time                  |    |   | | Push Archive event by user code     | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_val                   |    |   | |     Criteria checked by TANGO       | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          |                                        | |                                     |           |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
|                                                          |                                        | | Push DataReady event by user code   | false     |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
+==========================================================+========================================+=======================================================+
+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+

| 
**Attribute AttributeStoppedList:**

Returns the attributes stopped list

+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+
| +----------------------------------------------------+   | +----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                           |   | | **Attribute Properties**         |   | | **Attribute Event Criteria**                    |   |
| +=============================+======================+   | +=============================+====+   | +=====================================+===========+   |
| | Attribute Type              | Spectrum ( 10000 )   |   | | label                       |    |   | | Periodic                            | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ                 |   | | unit                        |    |   | | Relative Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_STRING    |   | | standard unit               |    |   | | Absolute Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR             |   | | display unit                |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false                |   | | format                      |    |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false                |   | | max_value                   |    |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled           |   | | min_value                   |    |   | | Archive Absolute Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set              |   | | max_alarm                   |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| |                             |                      |   | | min_alarm                   |    |   | | Push Change event by user code      | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states           |   | | max_warning                 |    |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | min_warning                 |    |   | |                                     |           |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_time                  |    |   | | Push Archive event by user code     | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_val                   |    |   | |     Criteria checked by TANGO       | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          |                                        | |                                     |           |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
|                                                          |                                        | | Push DataReady event by user code   | false     |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
+==========================================================+========================================+=======================================================+
+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+

| 
**Attribute AttributeEventNumberList:**

Returns the list of numbers of events received

+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+
| +----------------------------------------------------+   | +----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                           |   | | **Attribute Properties**         |   | | **Attribute Event Criteria**                    |   |
| +=============================+======================+   | +=============================+====+   | +=====================================+===========+   |
| | Attribute Type              | Spectrum ( 10000 )   |   | | label                       |    |   | | Periodic                            | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ                 |   | | unit                        |    |   | | Relative Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_LONG      |   | | standard unit               |    |   | | Absolute Change                     | 1         |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR             |   | | display unit                |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false                |   | | format                      |    |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false                |   | | max_value                   |    |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled           |   | | min_value                   |    |   | | Archive Absolute Change             | 1         |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set              |   | | max_alarm                   |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| |                             |                      |   | | min_alarm                   |    |   | | Push Change event by user code      | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states           |   | | max_warning                 |    |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | min_warning                 |    |   | |                                     |           |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_time                  |    |   | | Push Archive event by user code     | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_val                   |    |   | |     Criteria checked by TANGO       | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          |                                        | |                                     |           |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
|                                                          |                                        | | Push DataReady event by user code   | false     |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
+==========================================================+========================================+=======================================================+
+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+

| 
**Attribute AttributeErrorList:**

Returns the list of attribute errors

+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+
| +----------------------------------------------------+   | +----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                           |   | | **Attribute Properties**         |   | | **Attribute Event Criteria**                    |   |
| +=============================+======================+   | +=============================+====+   | +=====================================+===========+   |
| | Attribute Type              | Spectrum ( 10000 )   |   | | label                       |    |   | | Periodic                            | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ                 |   | | unit                        |    |   | | Relative Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_STRING    |   | | standard unit               |    |   | | Absolute Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR             |   | | display unit                |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false                |   | | format                      |    |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false                |   | | max_value                   |    |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled           |   | | min_value                   |    |   | | Archive Absolute Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set              |   | | max_alarm                   |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| |                             |                      |   | | min_alarm                   |    |   | | Push Change event by user code      | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states           |   | | max_warning                 |    |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | min_warning                 |    |   | |                                     |           |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_time                  |    |   | | Push Archive event by user code     | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_val                   |    |   | |     Criteria checked by TANGO       | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          |                                        | |                                     |           |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
|                                                          |                                        | | Push DataReady event by user code   | false     |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
+==========================================================+========================================+=======================================================+
+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+

| 
**Attribute AttributePausedList:**

Returns the attributes stopped list

+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+
| +----------------------------------------------------+   | +----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                           |   | | **Attribute Properties**         |   | | **Attribute Event Criteria**                    |   |
| +=============================+======================+   | +=============================+====+   | +=====================================+===========+   |
| | Attribute Type              | Spectrum ( 10000 )   |   | | label                       |    |   | | Periodic                            | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ                 |   | | unit                        |    |   | | Relative Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_STRING    |   | | standard unit               |    |   | | Absolute Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR             |   | | display unit                |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false                |   | | format                      |    |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false                |   | | max_value                   |    |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled           |   | | min_value                   |    |   | | Archive Absolute Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set              |   | | max_alarm                   |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| |                             |                      |   | | min_alarm                   |    |   | | Push Change event by user code      | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states           |   | | max_warning                 |    |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | min_warning                 |    |   | |                                     |           |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_time                  |    |   | | Push Archive event by user code     | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_val                   |    |   | |     Criteria checked by TANGO       | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          |                                        | |                                     |           |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
|                                                          |                                        | | Push DataReady event by user code   | false     |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
+==========================================================+========================================+=======================================================+
+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+

| 
**Attribute AttributeStrategyList:**

Returns the list of attribute strategy

+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+
| +----------------------------------------------------+   | +----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                           |   | | **Attribute Properties**         |   | | **Attribute Event Criteria**                    |   |
| +=============================+======================+   | +=============================+====+   | +=====================================+===========+   |
| | Attribute Type              | Spectrum ( 10000 )   |   | | label                       |    |   | | Periodic                            | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ                 |   | | unit                        |    |   | | Relative Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_STRING    |   | | standard unit               |    |   | | Absolute Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR             |   | | display unit                |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false                |   | | format                      |    |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false                |   | | max_value                   |    |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled           |   | | min_value                   |    |   | | Archive Absolute Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set              |   | | max_alarm                   |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| |                             |                      |   | | min_alarm                   |    |   | | Push Change event by user code      | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states           |   | | max_warning                 |    |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | min_warning                 |    |   | |                                     |           |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_time                  |    |   | | Push Archive event by user code     | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_val                   |    |   | |     Criteria checked by TANGO       | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          |                                        | |                                     |           |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
|                                                          |                                        | | Push DataReady event by user code   | false     |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
+==========================================================+========================================+=======================================================+
+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+

| 
**Attribute ContextsList:**

+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+
| +----------------------------------------------------+   | +----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                           |   | | **Attribute Properties**         |   | | **Attribute Event Criteria**                    |   |
| +=============================+======================+   | +=============================+====+   | +=====================================+===========+   |
| | Attribute Type              | Spectrum ( 1000 )    |   | | label                       |    |   | | Periodic                            | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ                 |   | | unit                        |    |   | | Relative Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_STRING    |   | | standard unit               |    |   | | Absolute Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR             |   | | display unit                |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false                |   | | format                      |    |   | | Archive Periodic                    | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false                |   | | max_value                   |    |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled           |   | | min_value                   |    |   | | Archive Absolute Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set              |   | | max_alarm                   |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| |                             |                      |   | | min_alarm                   |    |   | | Push Change event by user code      | false     |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states           |   | | max_warning                 |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | min_warning                 |    |   | | Push Archive event by user code     | false     |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_time                  |    |   | |                                     |           |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_val                   |    |   | | Push DataReady event by user code   | false     |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
+==========================================================+========================================+=======================================================+
+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+

| 
**Attribute AttributeTTLList:**

Returns the list of attribute strategy

+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+
| +----------------------------------------------------+   | +----------------------------------+   | +-------------------------------------------------+   |
| | **Attribute Definition**                           |   | | **Attribute Properties**         |   | | **Attribute Event Criteria**                    |   |
| +=============================+======================+   | +=============================+====+   | +=====================================+===========+   |
| | Attribute Type              | Spectrum ( 10000 )   |   | | label                       |    |   | | Periodic                            | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | R/W Type                    | READ                 |   | | unit                        |    |   | | Relative Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Data Type                   | Tango::DEV_ULONG     |   | | standard unit               |    |   | | Absolute Change                     | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Display Level               | OPERATOR             |   | | display unit                |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Inherited                   | false                |   | | format                      |    |   | | Archive Periodic                    | 3600000   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Abstract                    | false                |   | | max_value                   |    |   | | Archive Relative Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Polling Period              | Not polled           |   | | min_value                   |    |   | | Archive Absolute Change             | Not set   |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Memorized                   | Not set              |   | | max_alarm                   |    |   | |                                     |           |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| |                             |                      |   | | min_alarm                   |    |   | | Push Change event by user code      | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
| | Read allowed for            | All states           |   | | max_warning                 |    |   | |     Criteria checked by TANGO       | true      |   |
| +-----------------------------+----------------------+   | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | min_warning                 |    |   | |                                     |           |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_time                  |    |   | | Push Archive event by user code     | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          | | delta_val                   |    |   | |     Criteria checked by TANGO       | true      |   |
|                                                          | +-----------------------------+----+   | +-------------------------------------+-----------+   |
|                                                          |                                        | |                                     |           |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
|                                                          |                                        | | Push DataReady event by user code   | false     |   |
|                                                          |                                        | +-------------------------------------+-----------+   |
+==========================================================+========================================+=======================================================+
+----------------------------------------------------------+----------------------------------------+-------------------------------------------------------+

+-------------------------------------------------------------------------------------------------------+
| **HdbEventSubscriber Class States**                                                                   |
+========================================+==============================================================+
| **Name**                               | **Description**                                              |
+----------------------------------------+--------------------------------------------------------------+
| ON                                     | Archiving running and everything is OK.                      |
+----------------------------------------+--------------------------------------------------------------+
| ALARM                                  | One or more attributes faulty or FIFO size above threshold   |
+----------------------------------------+--------------------------------------------------------------+
| OFF                                    | Archiving stopped                                            |
+----------------------------------------+--------------------------------------------------------------+
| FAULT                                  | All attributes faulty                                        |
+----------------------------------------+--------------------------------------------------------------+
