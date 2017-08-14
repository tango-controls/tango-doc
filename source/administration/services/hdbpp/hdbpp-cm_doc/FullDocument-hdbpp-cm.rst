HdbConfigurationManager Tango Cpp Class
=======================================

**Contents:**   

-  `Description <FullDocument.html#description>`__

-  `Properties <FullDocument.html#properties>`__

-  `Commands <FullDocument.html#commands>`__

   -  `State <FullDocument.html#cmdState>`__

   -  `Status <FullDocument.html#cmdStatus>`__

   -  `AttributeAdd <FullDocument.html#cmdAttributeAdd>`__

   -  `AttributeRemove <FullDocument.html#cmdAttributeRemove>`__

   -  `AttributeStart <FullDocument.html#cmdAttributeStart>`__

   -  `AttributeStop <FullDocument.html#cmdAttributeStop>`__

   -  `ArchiverAdd <FullDocument.html#cmdArchiverAdd>`__

   -  `AttributeAssign <FullDocument.html#cmdAttributeAssign>`__

   -  `AttributeStatus <FullDocument.html#cmdAttributeStatus>`__

   -  `AttributeGetArchiver <FullDocument.html#cmdAttributeGetArchiver>`__

   -  `AttributeSearch <FullDocument.html#cmdAttributeSearch>`__

   -  `ArchiverRemove <FullDocument.html#cmdArchiverRemove>`__

   -  `ResetStatistics <FullDocument.html#cmdResetStatistics>`__

   -  `AttributePause <FullDocument.html#cmdAttributePause>`__

   -  `SetAttributeStrategy <FullDocument.html#cmdSetAttributeStrategy>`__

   -  `GetAttributeStrategy <FullDocument.html#cmdGetAttributeStrategy>`__

   -  `SetAttributeTTL <FullDocument.html#cmdSetAttributeTTL>`__

   -  `GetAttributeTTL <FullDocument.html#cmdGetAttributeTTL>`__

-  `Attributes <FullDocument.html#attributes>`__

   -  `AttributeOKNumber <FullDocument.html#attrAttributeOKNumber>`__

   -  `AttributeNokNumber <FullDocument.html#attrAttributeNokNumber>`__

   -  `AttributePendingNumber <FullDocument.html#attrAttributePendingNumber>`__

   -  `AttributeNumber <FullDocument.html#attrAttributeNumber>`__

   -  `SetAttributeName <FullDocument.html#attrSetAttributeName>`__

   -  `SetPollingPeriod <FullDocument.html#attrSetPollingPeriod>`__

   -  `SetAbsoluteEvent <FullDocument.html#attrSetAbsoluteEvent>`__

   -  `SetRelativeEvent <FullDocument.html#attrSetRelativeEvent>`__

   -  `SetPeriodEvent <FullDocument.html#attrSetPeriodEvent>`__

   -  `SetCodePushedEvent <FullDocument.html#attrSetCodePushedEvent>`__

   -  `SetArchiver <FullDocument.html#attrSetArchiver>`__

   -  `AttributeMaxStoreTime <FullDocument.html#attrAttributeMaxStoreTime>`__

   -  `AttributeMinStoreTime <FullDocument.html#attrAttributeMinStoreTime>`__

   -  `AttributeMaxProcessingTime <FullDocument.html#attrAttributeMaxProcessingTime>`__

   -  `AttributeMinProcessingTime <FullDocument.html#attrAttributeMinProcessingTime>`__

   -  `AttributeRecordFreq <FullDocument.html#attrAttributeRecordFreq>`__

   -  `AttributeFailureFreq <FullDocument.html#attrAttributeFailureFreq>`__

   -  `AttributeStartedNumber <FullDocument.html#attrAttributeStartedNumber>`__

   -  `AttributeStoppedNumber <FullDocument.html#attrAttributeStoppedNumber>`__

   -  `AttributeMaxPendingNumber <FullDocument.html#attrAttributeMaxPendingNumber>`__

   -  `AttributePausedNumber <FullDocument.html#attrAttributePausedNumber>`__

   -  `SetTTL <FullDocument.html#attrSetTTL>`__

   -  `SetStrategy <FullDocument.html#attrSetStrategy>`__

   -  `Context <FullDocument.html#attrContext>`__

   -  `ArchiverList <FullDocument.html#attrArchiverList>`__

   -  `ArchiverStatus <FullDocument.html#attrArchiverStatus>`__

   -  `ArchiverStatisticsResetTime <FullDocument.html#attrArchiverStatisticsResetTime>`__

   -  `ArchiverContext <FullDocument.html#attrArchiverContext>`__

   -  `ContextsList <FullDocument.html#attrContextsList>`__

-  `States <FullDocument.html#states>`__

+-------------------------------------------------------------------------------------------------+
|  **HdbConfigurationManager Class Identification:**                                              |
+========================================================+========================================+
| Contact                                                |   at elettra.eu - graziano.scalamera   |
+--------------------------------------------------------+----------------------------------------+
| Class Family                                           |   Miscellaneous                        |
+--------------------------------------------------------+----------------------------------------+
| Platform                                               |   Unix Like                            |
+--------------------------------------------------------+----------------------------------------+
| Bus                                                    |   Not Applicable                       |
+--------------------------------------------------------+----------------------------------------+
| Manufacturer                                           |   none                                 |
+--------------------------------------------------------+----------------------------------------+
| Manufacturer ref.                                      |                                        |
+--------------------------------------------------------+----------------------------------------+

+--------------------------------------------------------------------------------------------------+
|  **HdbConfigurationManager Class Inheritance:**                                                  |
+==================================================================================================+
| -  `Tango::DeviceImpl <http://www.esrf.eu/computing/cs/tango/tango_doc/kernel_doc/cpp_doc/>`__   |
|                                                                                                  |
|    -  HdbConfigurationManager                                                                    |
+--------------------------------------------------------------------------------------------------+

**HdbConfigurationManager Class Description:**   

**HdbConfigurationManager Properties:**  

+------------------------------------------------------------------------------------------------+
| **Class Properties**                                                                           |
+=========================+=================================+=============+======================+
| **Name**                | **Description**                 | **Type**    | **Default Value**    |
+-------------------------+---------------------------------+-------------+----------------------+
| MaxSearchSize           |                                 | int         | none                 |
+-------------------------+---------------------------------+-------------+----------------------+
| LibConfiguration        | Configuration for the library   | String[]    | none                 |
+-------------------------+---------------------------------+-------------+----------------------+

+-------------------------------------------------------------------------------------------------+
| **Device Properties**                                                                           |
+==========================+=================================+=============+======================+
| **Name**                 | **Description**                 | **Type**    | **Default Value**    |
+--------------------------+---------------------------------+-------------+----------------------+
| ArchiverList             |                                 | String[]    | none                 |
+--------------------------+---------------------------------+-------------+----------------------+
| MaxSearchSize            | Max size of search result       | int         | 1000                 |
+--------------------------+---------------------------------+-------------+----------------------+
| LibConfiguration         | Configuration for the library   | String[]    | none                 |
+--------------------------+---------------------------------+-------------+----------------------+

+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| **HdbConfigurationManager Class Commands**                                                                                                                                                                                                |
+===========================================================+=======================+=======================+==============+================================================================================================================+
| **Name**                                                  | **Input type**        | **Output type**       | **Level**    | **Description**                                                                                                |
+-----------------------------------------------------------+-----------------------+-----------------------+--------------+----------------------------------------------------------------------------------------------------------------+
| `State <CmdState.html>`__                                 | DEV_VOID              | DEV_STATE             | OPERATOR     | This command gets the device state (stored in its device_state  data member) and returns it to the caller.     |
+-----------------------------------------------------------+-----------------------+-----------------------+--------------+----------------------------------------------------------------------------------------------------------------+
| `Status <CmdStatus.html>`__                               | DEV_VOID              | CONST_DEV_STRING      | OPERATOR     | This command gets the device status (stored in its device_status  data member) and returns it to the caller.   |
+-----------------------------------------------------------+-----------------------+-----------------------+--------------+----------------------------------------------------------------------------------------------------------------+
| `AttributeAdd <CmdAttributeAdd.html>`__                   | DEV_VOID              | DEV_VOID              | OPERATOR     | Add a new attribute to archive in HDB.                                                                         |
+-----------------------------------------------------------+-----------------------+-----------------------+--------------+----------------------------------------------------------------------------------------------------------------+
| `AttributeRemove <CmdAttributeRemove.html>`__             | DEV_STRING            | DEV_VOID              | OPERATOR     | Remove attribute from configuration.                                                                           |
+-----------------------------------------------------------+-----------------------+-----------------------+--------------+----------------------------------------------------------------------------------------------------------------+
| `AttributeStart <CmdAttributeStart.html>`__               | DEV_STRING            | DEV_VOID              | OPERATOR     | Start archiving single attribute                                                                               |
+-----------------------------------------------------------+-----------------------+-----------------------+--------------+----------------------------------------------------------------------------------------------------------------+
| `AttributeStop <CmdAttributeStop.html>`__                 | DEV_STRING            | DEV_VOID              | OPERATOR     | Stop archiving single attribute                                                                                |
+-----------------------------------------------------------+-----------------------+-----------------------+--------------+----------------------------------------------------------------------------------------------------------------+
| `ArchiverAdd <CmdArchiverAdd.html>`__                     | DEV_STRING            | DEV_VOID              | OPERATOR     | Add a new archiver to archive in HDB.                                                                          |
+-----------------------------------------------------------+-----------------------+-----------------------+--------------+----------------------------------------------------------------------------------------------------------------+
| `AttributeAssign <CmdAttributeAssign.html>`__             | DEVVAR_STRINGARRAY    | DEV_VOID              | OPERATOR     | Assigne attribute to archiver.                                                                                 |
|                                                           |                       |                       |              | If Strategy is not specified use DefaultStrategy of the target archiver.                                       |
+-----------------------------------------------------------+-----------------------+-----------------------+--------------+----------------------------------------------------------------------------------------------------------------+
| `AttributeStatus <CmdAttributeStatus.html>`__             | DEV_STRING            | DEV_STRING            | OPERATOR     | Read an attribute status                                                                                       |
+-----------------------------------------------------------+-----------------------+-----------------------+--------------+----------------------------------------------------------------------------------------------------------------+
| `AttributeGetArchiver <CmdAttributeGetArchiver.html>`__   | DEV_STRING            | DEV_STRING            | OPERATOR     | Return archiver associated to attribute.                                                                       |
+-----------------------------------------------------------+-----------------------+-----------------------+--------------+----------------------------------------------------------------------------------------------------------------+
| `AttributeSearch <CmdAttributeSearch.html>`__             | DEV_STRING            | DEVVAR_STRINGARRAY    | OPERATOR     | Return list of attributes containing input argument                                                            |
+-----------------------------------------------------------+-----------------------+-----------------------+--------------+----------------------------------------------------------------------------------------------------------------+
| `ArchiverRemove <CmdArchiverRemove.html>`__               | DEV_STRING            | DEV_VOID              | OPERATOR     | Remove archiver instance.                                                                                      |
+-----------------------------------------------------------+-----------------------+-----------------------+--------------+----------------------------------------------------------------------------------------------------------------+
| `ResetStatistics <CmdResetStatistics.html>`__             | DEV_VOID              | DEV_VOID              | OPERATOR     | Reset statistic counters                                                                                       |
+-----------------------------------------------------------+-----------------------+-----------------------+--------------+----------------------------------------------------------------------------------------------------------------+
| `AttributePause <CmdAttributePause.html>`__               | DEV_STRING            | DEV_VOID              | OPERATOR     | Pause archiving single attribute                                                                               |
+-----------------------------------------------------------+-----------------------+-----------------------+--------------+----------------------------------------------------------------------------------------------------------------+
| `SetAttributeStrategy <CmdSetAttributeStrategy.html>`__   | DEVVAR_STRINGARRAY    | DEV_VOID              | OPERATOR     | Update strategies for an already archived attribute.                                                           |
+-----------------------------------------------------------+-----------------------+-----------------------+--------------+----------------------------------------------------------------------------------------------------------------+
| `GetAttributeStrategy <CmdGetAttributeStrategy.html>`__   | DEV_STRING            | DEV_STRING            | OPERATOR     | None.                                                                                                          |
+-----------------------------------------------------------+-----------------------+-----------------------+--------------+----------------------------------------------------------------------------------------------------------------+
| `SetAttributeTTL <CmdSetAttributeTTL.html>`__             | DEVVAR_STRINGARRAY    | DEV_VOID              | OPERATOR     | Update ttl for an already archived attribute.                                                                  |
+-----------------------------------------------------------+-----------------------+-----------------------+--------------+----------------------------------------------------------------------------------------------------------------+
| `GetAttributeTTL <CmdGetAttributeTTL.html>`__             | DEV_STRING            | DEV_ULONG             | OPERATOR     | None.                                                                                                          |
+-----------------------------------------------------------+-----------------------+-----------------------+--------------+----------------------------------------------------------------------------------------------------------------+

**Command State:**   

This command gets the device state (stored in its device_state  data
member) and returns it to the caller.

+----------------------------------------------------------------+
| **State Definition**                                           |
+=========================+=====================+================+
| Input Argument          | Tango::DEV_VOID     | none           |
+-------------------------+---------------------+----------------+
| Output Argument         | Tango::DEV_STATE    | Device state   |
+-------------------------+---------------------+----------------+
| DisplayLevel            | OPERATOR            | ..             |
+-------------------------+---------------------+----------------+
| Inherited               | true                | ..             |
+-------------------------+---------------------+----------------+
| Abstract                | true                | ..             |
+-------------------------+---------------------+----------------+
| Polling Period          | Not polled          | ..             |
+-------------------------+---------------------+----------------+
|                         |                     |                |
+-------------------------+---------------------+----------------+
| Command allowed for     | All states          | ..             |
+-------------------------+---------------------+----------------+

**Command Status:**   

This command gets the device status (stored in its device_status
data member) and returns it to the caller.

+--------------------------------------------------------------------------+
| **Status Definition**                                                    |
+==========================+=============================+=================+
| Input Argument           | Tango::DEV_VOID             | none            |
+--------------------------+-----------------------------+-----------------+
| Output Argument          | Tango::CONST_DEV_STRING     | Device status   |
+--------------------------+-----------------------------+-----------------+
| DisplayLevel             | OPERATOR                    | ..              |
+--------------------------+-----------------------------+-----------------+
| Inherited                | true                        | ..              |
+--------------------------+-----------------------------+-----------------+
| Abstract                 | true                        | ..              |
+--------------------------+-----------------------------+-----------------+
| Polling Period           | Not polled                  | ..              |
+--------------------------+-----------------------------+-----------------+
|                          |                             |                 |
+--------------------------+-----------------------------+-----------------+
| Command allowed for      | All states                  | ..              |
+--------------------------+-----------------------------+-----------------+

**Command AttributeAdd:**   

    Add a new attribute to archive in HDB.

+------------------------------------------------------------+
| **AttributeAdd Definition**                                |
+================================+====================+======+
| Input Argument                 | Tango::DEV_VOID    |      |
+--------------------------------+--------------------+------+
| Output Argument                | Tango::DEV_VOID    |      |
+--------------------------------+--------------------+------+
| DisplayLevel                   | OPERATOR           | ..   |
+--------------------------------+--------------------+------+
| Inherited                      | false              | ..   |
+--------------------------------+--------------------+------+
| Abstract                       | false              | ..   |
+--------------------------------+--------------------+------+
| Polling Period                 | Not polled         | ..   |
+--------------------------------+--------------------+------+
|                                |                    |      |
+--------------------------------+--------------------+------+
| Command allowed for            | All states         | ..   |
+--------------------------------+--------------------+------+

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

**Command ArchiverAdd:**   

Add a new archiver to archive in HDB.

+------------------------------------------------------------------------+
| **ArchiverAdd Definition**                                             |
+===============================+======================+=================+
| Input Argument                | Tango::DEV_STRING    | Archiver name   |
+-------------------------------+----------------------+-----------------+
| Output Argument               | Tango::DEV_VOID      |                 |
+-------------------------------+----------------------+-----------------+
| DisplayLevel                  | OPERATOR             | ..              |
+-------------------------------+----------------------+-----------------+
| Inherited                     | false                | ..              |
+-------------------------------+----------------------+-----------------+
| Abstract                      | false                | ..              |
+-------------------------------+----------------------+-----------------+
| Polling Period                | Not polled           | ..              |
+-------------------------------+----------------------+-----------------+
|                               |                      |                 |
+-------------------------------+----------------------+-----------------+
| Command allowed for           | All states           | ..              |
+-------------------------------+----------------------+-----------------+

**Command AttributeAssign:**   

Assigne attribute to archiver.
If Strategy is not specified use DefaultStrategy of the target archiver.

+----------------------------------------------------------------------------------------------+
| **AttributeAssign Definition**                                                               |
+===================================+==============================+===========================+
| Input Argument                    | Tango::DEVVAR_STRINGARRAY    | [0]: Attribute name       |
|                                   |                              | [1]: Archiver name        |
|                                   |                              | [2]: Attribute Strategy   |
+-----------------------------------+------------------------------+---------------------------+
| Output Argument                   | Tango::DEV_VOID              |                           |
+-----------------------------------+------------------------------+---------------------------+
| DisplayLevel                      | OPERATOR                     | ..                        |
+-----------------------------------+------------------------------+---------------------------+
| Inherited                         | false                        | ..                        |
+-----------------------------------+------------------------------+---------------------------+
| Abstract                          | false                        | ..                        |
+-----------------------------------+------------------------------+---------------------------+
| Polling Period                    | Not polled                   | ..                        |
+-----------------------------------+------------------------------+---------------------------+
|                                   |                              |                           |
+-----------------------------------+------------------------------+---------------------------+
| Command allowed for               | All states                   | ..                        |
+-----------------------------------+------------------------------+---------------------------+

**Command AttributeStatus:**   

Read an attribute status

+--------------------------------------------------------------------------------------------------------+
| **AttributeStatus Definition**                                                                         |
+===================================+======================+=============================================+
| Input Argument                    | Tango::DEV_STRING    | The attribute name                          |
+-----------------------------------+----------------------+---------------------------------------------+
| Output Argument                   | Tango::DEV_STRING    | The attribute status. TODO: DevString OK?   |
+-----------------------------------+----------------------+---------------------------------------------+
| DisplayLevel                      | OPERATOR             | ..                                          |
+-----------------------------------+----------------------+---------------------------------------------+
| Inherited                         | false                | ..                                          |
+-----------------------------------+----------------------+---------------------------------------------+
| Abstract                          | false                | ..                                          |
+-----------------------------------+----------------------+---------------------------------------------+
| Polling Period                    | Not polled           | ..                                          |
+-----------------------------------+----------------------+---------------------------------------------+
|                                   |                      |                                             |
+-----------------------------------+----------------------+---------------------------------------------+
| Command allowed for               | All states           | ..                                          |
+-----------------------------------+----------------------+---------------------------------------------+

**Command AttributeGetArchiver:**   

Return archiver associated to attribute.

+----------------------------------------------------------------------------------+
| **AttributeGetArchiver Definition**                                              |
+========================================+======================+==================+
| Input Argument                         | Tango::DEV_STRING    | Attribute name   |
+----------------------------------------+----------------------+------------------+
| Output Argument                        | Tango::DEV_STRING    | Archiver name    |
+----------------------------------------+----------------------+------------------+
| DisplayLevel                           | OPERATOR             | ..               |
+----------------------------------------+----------------------+------------------+
| Inherited                              | false                | ..               |
+----------------------------------------+----------------------+------------------+
| Abstract                               | false                | ..               |
+----------------------------------------+----------------------+------------------+
| Polling Period                         | Not polled           | ..               |
+----------------------------------------+----------------------+------------------+
|                                        |                      |                  |
+----------------------------------------+----------------------+------------------+
| Command allowed for                    | All states           | ..               |
+----------------------------------------+----------------------+------------------+

**Command AttributeSearch:**   

Return list of attributes containing input argument

+---------------------------------------------------------------------------------------------------+
| **AttributeSearch Definition**                                                                    |
+===================================+==============================+================================+
| Input Argument                    | Tango::DEV_STRING            | Attribute name or part of it   |
+-----------------------------------+------------------------------+--------------------------------+
| Output Argument                   | Tango::DEVVAR_STRINGARRAY    | Attribute list                 |
+-----------------------------------+------------------------------+--------------------------------+
| DisplayLevel                      | OPERATOR                     | ..                             |
+-----------------------------------+------------------------------+--------------------------------+
| Inherited                         | false                        | ..                             |
+-----------------------------------+------------------------------+--------------------------------+
| Abstract                          | false                        | ..                             |
+-----------------------------------+------------------------------+--------------------------------+
| Polling Period                    | Not polled                   | ..                             |
+-----------------------------------+------------------------------+--------------------------------+
|                                   |                              |                                |
+-----------------------------------+------------------------------+--------------------------------+
| Command allowed for               | All states                   | ..                             |
+-----------------------------------+------------------------------+--------------------------------+

**Command ArchiverRemove:**   

Remove archiver instance.

+---------------------------------------------------------------------------+
| **ArchiverRemove Definition**                                             |
+==================================+======================+=================+
| Input Argument                   | Tango::DEV_STRING    | Archiver name   |
+----------------------------------+----------------------+-----------------+
| Output Argument                  | Tango::DEV_VOID      |                 |
+----------------------------------+----------------------+-----------------+
| DisplayLevel                     | OPERATOR             | ..              |
+----------------------------------+----------------------+-----------------+
| Inherited                        | false                | ..              |
+----------------------------------+----------------------+-----------------+
| Abstract                         | false                | ..              |
+----------------------------------+----------------------+-----------------+
| Polling Period                   | Not polled           | ..              |
+----------------------------------+----------------------+-----------------+
|                                  |                      |                 |
+----------------------------------+----------------------+-----------------+
| Command allowed for              | All states           | ..              |
+----------------------------------+----------------------+-----------------+

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

**Command SetAttributeStrategy:**   

Update strategies for an already archived attribute.

+------------------------------------------------------------------------------------------------------+
| **SetAttributeStrategy Definition**                                                                  |
+========================================+==============================+==============================+
| Input Argument                         | Tango::DEVVAR_STRINGARRAY    | Attribute name, strategies   |
+----------------------------------------+------------------------------+------------------------------+
| Output Argument                        | Tango::DEV_VOID              |                              |
+----------------------------------------+------------------------------+------------------------------+
| DisplayLevel                           | OPERATOR                     | ..                           |
+----------------------------------------+------------------------------+------------------------------+
| Inherited                              | false                        | ..                           |
+----------------------------------------+------------------------------+------------------------------+
| Abstract                               | false                        | ..                           |
+----------------------------------------+------------------------------+------------------------------+
| Polling Period                         | Not polled                   | ..                           |
+----------------------------------------+------------------------------+------------------------------+
|                                        |                              |                              |
+----------------------------------------+------------------------------+------------------------------+
| Command allowed for                    | All states                   | ..                           |
+----------------------------------------+------------------------------+------------------------------+

**Command GetAttributeStrategy:**   

+----------------------------------------------------------------------------------+
| **GetAttributeStrategy Definition**                                              |
+========================================+======================+==================+
| Input Argument                         | Tango::DEV_STRING    | Attribute name   |
+----------------------------------------+----------------------+------------------+
| Output Argument                        | Tango::DEV_STRING    | Strategy         |
+----------------------------------------+----------------------+------------------+
| DisplayLevel                           | OPERATOR             | ..               |
+----------------------------------------+----------------------+------------------+
| Inherited                              | false                | ..               |
+----------------------------------------+----------------------+------------------+
| Abstract                               | false                | ..               |
+----------------------------------------+----------------------+------------------+
| Polling Period                         | Not polled           | ..               |
+----------------------------------------+----------------------+------------------+
|                                        |                      |                  |
+----------------------------------------+----------------------+------------------+
| Command allowed for                    | All states           | ..               |
+----------------------------------------+----------------------+------------------+

**Command SetAttributeTTL:**   

Update ttl for an already archived attribute.

+------------------------------------------------------------------------------------------+
| **SetAttributeTTL Definition**                                                           |
+===================================+==============================+=======================+
| Input Argument                    | Tango::DEVVAR_STRINGARRAY    | Attribute name, ttl   |
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

**Command GetAttributeTTL:**   

+-----------------------------------------------------------------------------+
| **GetAttributeTTL Definition**                                              |
+===================================+======================+==================+
| Input Argument                    | Tango::DEV_STRING    | Attribute name   |
+-----------------------------------+----------------------+------------------+
| Output Argument                   | Tango::DEV_ULONG     | TTL              |
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

+----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+
| **HdbConfigurationManager Class Attributes**                                                                                                                                                                                                             |
+==========================================================================+==================+=================+===================+=================+=======================+==============+=============================================================+
| **Name**                                                                 | **Inherited**    | **Abstract**    | **Attr. type**    | **R/W type**    | **Data type**         | **Level**    | **Description**                                             |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `AttributeOKNumber <AttrAttributeOKNumber.html>`__                       | false            | false           | Scalar            | READ            | Tango::DEV_LONG       | OPERATOR     | Number of archived attributes not in error                  |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `AttributeNokNumber <AttrAttributeNokNumber.html>`__                     | false            | false           | Scalar            | READ            | Tango::DEV_LONG       | OPERATOR     | Number of archived attributes in error                      |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `AttributePendingNumber <AttrAttributePendingNumber.html>`__             | false            | false           | Scalar            | READ            | Tango::DEV_LONG       | OPERATOR     | Number of attributes waiting to be archived                 |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `AttributeNumber <AttrAttributeNumber.html>`__                           | false            | false           | Scalar            | READ            | Tango::DEV_LONG       | OPERATOR     | Number of configured attributes                             |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `SetAttributeName <AttrSetAttributeName.html>`__                         | false            | false           | Scalar            | READ_WRITE      | Tango::DEV_STRING     | OPERATOR     |                                                             |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `SetPollingPeriod <AttrSetPollingPeriod.html>`__                         | false            | false           | Scalar            | READ_WRITE      | Tango::DEV_LONG       | OPERATOR     |                                                             |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `SetAbsoluteEvent <AttrSetAbsoluteEvent.html>`__                         | false            | false           | Scalar            | READ_WRITE      | Tango::DEV_DOUBLE     | OPERATOR     |                                                             |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `SetRelativeEvent <AttrSetRelativeEvent.html>`__                         | false            | false           | Scalar            | READ_WRITE      | Tango::DEV_DOUBLE     | OPERATOR     |                                                             |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `SetPeriodEvent <AttrSetPeriodEvent.html>`__                             | false            | false           | Scalar            | READ_WRITE      | Tango::DEV_LONG       | OPERATOR     |                                                             |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `SetCodePushedEvent <AttrSetCodePushedEvent.html>`__                     | false            | false           | Scalar            | READ_WRITE      | Tango::DEV_BOOLEAN    | OPERATOR     |                                                             |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `SetArchiver <AttrSetArchiver.html>`__                                   | false            | false           | Scalar            | READ_WRITE      | Tango::DEV_STRING     | OPERATOR     |                                                             |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `AttributeMaxStoreTime <AttrAttributeMaxStoreTime.html>`__               | false            | false           | Scalar            | READ            | Tango::DEV_DOUBLE     | OPERATOR     | Maximum storing time                                        |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `AttributeMinStoreTime <AttrAttributeMinStoreTime.html>`__               | false            | false           | Scalar            | READ            | Tango::DEV_DOUBLE     | OPERATOR     | Minimum storing time                                        |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `AttributeMaxProcessingTime <AttrAttributeMaxProcessingTime.html>`__     | false            | false           | Scalar            | READ            | Tango::DEV_DOUBLE     | OPERATOR     | Maximum processing (from event reception to storage) time   |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `AttributeMinProcessingTime <AttrAttributeMinProcessingTime.html>`__     | false            | false           | Scalar            | READ            | Tango::DEV_DOUBLE     | OPERATOR     | Minimum processing (from event reception to storage) time   |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `AttributeRecordFreq <AttrAttributeRecordFreq.html>`__                   | false            | false           | Scalar            | READ            | Tango::DEV_DOUBLE     | OPERATOR     | Record frequency                                            |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `AttributeFailureFreq <AttrAttributeFailureFreq.html>`__                 | false            | false           | Scalar            | READ            | Tango::DEV_DOUBLE     | OPERATOR     | Failure frequency                                           |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `AttributeStartedNumber <AttrAttributeStartedNumber.html>`__             | false            | false           | Scalar            | READ            | Tango::DEV_LONG       | OPERATOR     | Number of archived attributes started                       |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `AttributeStoppedNumber <AttrAttributeStoppedNumber.html>`__             | false            | false           | Scalar            | READ            | Tango::DEV_LONG       | OPERATOR     | Number of archived attributes stopped                       |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `AttributeMaxPendingNumber <AttrAttributeMaxPendingNumber.html>`__       | false            | false           | Scalar            | READ            | Tango::DEV_LONG       | OPERATOR     | Max number of attributes waiting to be archived             |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `AttributePausedNumber <AttrAttributePausedNumber.html>`__               | false            | false           | Scalar            | READ            | Tango::DEV_LONG       | OPERATOR     | Number of archived attributes paused                        |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `SetTTL <AttrSetTTL.html>`__                                             | false            | false           | Scalar            | READ_WRITE      | Tango::DEV_ULONG      | OPERATOR     | Time To Live for temporary storage in hours                 |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `SetStrategy <AttrSetStrategy.html>`__                                   | false            | false           | Scalar            | READ_WRITE      | Tango::DEV_STRING     | OPERATOR     | list of strategies separated with |                         |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `Context <AttrContext.html>`__                                           | false            | false           | Scalar            | WRITE           | Tango::DEV_STRING     | EXPERT       |                                                             |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `ArchiverList <AttrArchiverList.html>`__                                 | false            | false           | Spectrum          | READ            | Tango::DEV_STRING     | OPERATOR     |                                                             |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `ArchiverStatus <AttrArchiverStatus.html>`__                             | false            | false           | Spectrum          | READ            | Tango::DEV_STRING     | OPERATOR     |                                                             |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `ArchiverStatisticsResetTime <AttrArchiverStatisticsResetTime.html>`__   | false            | false           | Spectrum          | READ            | Tango::DEV_DOUBLE     | OPERATOR     | Seconds elapsed since last statistics reset                 |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `ArchiverContext <AttrArchiverContext.html>`__                           | false            | false           | Spectrum          | READ            | Tango::DEV_STRING     | OPERATOR     | Archiver context                                            |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+
| `ContextsList <AttrContextsList.html>`__                                 | false            | false           | Spectrum          | READ            | Tango::DEV_STRING     | EXPERT       |                                                             |
+--------------------------------------------------------------------------+------------------+-----------------+-------------------+-----------------+-----------------------+--------------+-------------------------------------------------------------+

**There is no dynamic attribute defined.**

**Attribute AttributeOKNumber:**   

Number of archived attributes not in error

+-----------------------------+--------------------+
| **Attribute Definition**    |                    |
+=============================+====================+
| Attribute Type              | Scalar             |
+-----------------------------+--------------------+
| R/W Type                    | READ               |
+-----------------------------+--------------------+
| Data Type                   | Tango::DEV_LONG    |
+-----------------------------+--------------------+
| Display Level               | OPERATOR           |
+-----------------------------+--------------------+
| Inherited                   | false              |
+-----------------------------+--------------------+
| Abstract                    | false              |
+-----------------------------+--------------------+
| Polling Period              | Not polled         |
+-----------------------------+--------------------+
| Memorized                   | Not set            |
+-----------------------------+--------------------+
|                             |                    |
+-----------------------------+--------------------+
| Read allowed for            | All states         |
+-----------------------------+--------------------+

+-----------------------------+----+
| **Attribute Properties**    |    |
+=============================+====+
| label                       |    |
+-----------------------------+----+
| unit                        |    |
+-----------------------------+----+
| standard unit               |    |
+-----------------------------+----+
| display unit                |    |
+-----------------------------+----+
| format                      |    |
+-----------------------------+----+
| max_value                   |    |
+-----------------------------+----+
| min_value                   |    |
+-----------------------------+----+
| max_alarm                   |    |
+-----------------------------+----+
| min_alarm                   |    |
+-----------------------------+----+
| max_warning                 |    |
+-----------------------------+----+
| min_warning                 |    |
+-----------------------------+----+
| delta_time                  |    |
+-----------------------------+----+
| delta_val                   |    |
+-----------------------------+----+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute AttributeNokNumber:**   

Number of archived attributes in error

+-----------------------------+--------------------+
| **Attribute Definition**    |                    |
+=============================+====================+
| Attribute Type              | Scalar             |
+-----------------------------+--------------------+
| R/W Type                    | READ               |
+-----------------------------+--------------------+
| Data Type                   | Tango::DEV_LONG    |
+-----------------------------+--------------------+
| Display Level               | OPERATOR           |
+-----------------------------+--------------------+
| Inherited                   | false              |
+-----------------------------+--------------------+
| Abstract                    | false              |
+-----------------------------+--------------------+
| Polling Period              | Not polled         |
+-----------------------------+--------------------+
| Memorized                   | Not set            |
+-----------------------------+--------------------+
|                             |                    |
+-----------------------------+--------------------+
| Read allowed for            | All states         |
+-----------------------------+--------------------+

+-----------------------------+-----+
| **Attribute Properties**    |     |
+=============================+=====+
| label                       |     |
+-----------------------------+-----+
| unit                        |     |
+-----------------------------+-----+
| standard unit               |     |
+-----------------------------+-----+
| display unit                |     |
+-----------------------------+-----+
| format                      |     |
+-----------------------------+-----+
| max_value                   |     |
+-----------------------------+-----+
| min_value                   |     |
+-----------------------------+-----+
| max_alarm                   | 1   |
+-----------------------------+-----+
| min_alarm                   |     |
+-----------------------------+-----+
| max_warning                 |     |
+-----------------------------+-----+
| min_warning                 |     |
+-----------------------------+-----+
| delta_time                  |     |
+-----------------------------+-----+
| delta_val                   |     |
+-----------------------------+-----+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute AttributePendingNumber:**   

Number of attributes waiting to be archived

+-----------------------------+--------------------+
| **Attribute Definition**    |                    |
+=============================+====================+
| Attribute Type              | Scalar             |
+-----------------------------+--------------------+
| R/W Type                    | READ               |
+-----------------------------+--------------------+
| Data Type                   | Tango::DEV_LONG    |
+-----------------------------+--------------------+
| Display Level               | OPERATOR           |
+-----------------------------+--------------------+
| Inherited                   | false              |
+-----------------------------+--------------------+
| Abstract                    | false              |
+-----------------------------+--------------------+
| Polling Period              | Not polled         |
+-----------------------------+--------------------+
| Memorized                   | Not set            |
+-----------------------------+--------------------+
|                             |                    |
+-----------------------------+--------------------+
| Read allowed for            | All states         |
+-----------------------------+--------------------+

+-----------------------------+----+
| **Attribute Properties**    |    |
+=============================+====+
| label                       |    |
+-----------------------------+----+
| unit                        |    |
+-----------------------------+----+
| standard unit               |    |
+-----------------------------+----+
| display unit                |    |
+-----------------------------+----+
| format                      |    |
+-----------------------------+----+
| max_value                   |    |
+-----------------------------+----+
| min_value                   |    |
+-----------------------------+----+
| max_alarm                   |    |
+-----------------------------+----+
| min_alarm                   |    |
+-----------------------------+----+
| max_warning                 |    |
+-----------------------------+----+
| min_warning                 |    |
+-----------------------------+----+
| delta_time                  |    |
+-----------------------------+----+
| delta_val                   |    |
+-----------------------------+----+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute AttributeNumber:**   

Number of configured attributes

+-----------------------------+--------------------+
| **Attribute Definition**    |                    |
+=============================+====================+
| Attribute Type              | Scalar             |
+-----------------------------+--------------------+
| R/W Type                    | READ               |
+-----------------------------+--------------------+
| Data Type                   | Tango::DEV_LONG    |
+-----------------------------+--------------------+
| Display Level               | OPERATOR           |
+-----------------------------+--------------------+
| Inherited                   | false              |
+-----------------------------+--------------------+
| Abstract                    | false              |
+-----------------------------+--------------------+
| Polling Period              | Not polled         |
+-----------------------------+--------------------+
| Memorized                   | Not set            |
+-----------------------------+--------------------+
|                             |                    |
+-----------------------------+--------------------+
| Read allowed for            | All states         |
+-----------------------------+--------------------+

+-----------------------------+----+
| **Attribute Properties**    |    |
+=============================+====+
| label                       |    |
+-----------------------------+----+
| unit                        |    |
+-----------------------------+----+
| standard unit               |    |
+-----------------------------+----+
| display unit                |    |
+-----------------------------+----+
| format                      |    |
+-----------------------------+----+
| max_value                   |    |
+-----------------------------+----+
| min_value                   |    |
+-----------------------------+----+
| max_alarm                   |    |
+-----------------------------+----+
| min_alarm                   |    |
+-----------------------------+----+
| max_warning                 |    |
+-----------------------------+----+
| min_warning                 |    |
+-----------------------------+----+
| delta_time                  |    |
+-----------------------------+----+
| delta_val                   |    |
+-----------------------------+----+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute SetAttributeName:**   

+-----------------------------+----------------------+
| **Attribute Definition**    |                      |
+=============================+======================+
| Attribute Type              | Scalar               |
+-----------------------------+----------------------+
| R/W Type                    | READ_WRITE           |
+-----------------------------+----------------------+
| Data Type                   | Tango::DEV_STRING    |
+-----------------------------+----------------------+
| Display Level               | OPERATOR             |
+-----------------------------+----------------------+
| Inherited                   | false                |
+-----------------------------+----------------------+
| Abstract                    | false                |
+-----------------------------+----------------------+
| Polling Period              | Not polled           |
+-----------------------------+----------------------+
| Memorized                   | Not set              |
+-----------------------------+----------------------+
|                             |                      |
+-----------------------------+----------------------+
| Read allowed for            | All states           |
+-----------------------------+----------------------+
| Write allowed for           | All states           |
+-----------------------------+----------------------+

+-----------------------------+----+
| **Attribute Properties**    |    |
+=============================+====+
| label                       |    |
+-----------------------------+----+
| unit                        |    |
+-----------------------------+----+
| standard unit               |    |
+-----------------------------+----+
| display unit                |    |
+-----------------------------+----+
| format                      |    |
+-----------------------------+----+
| max_value                   |    |
+-----------------------------+----+
| min_value                   |    |
+-----------------------------+----+
| max_alarm                   |    |
+-----------------------------+----+
| min_alarm                   |    |
+-----------------------------+----+
| max_warning                 |    |
+-----------------------------+----+
| min_warning                 |    |
+-----------------------------+----+
| delta_time                  |    |
+-----------------------------+----+
| delta_val                   |    |
+-----------------------------+----+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute SetPollingPeriod:**   

+-----------------------------+--------------------+
| **Attribute Definition**    |                    |
+=============================+====================+
| Attribute Type              | Scalar             |
+-----------------------------+--------------------+
| R/W Type                    | READ_WRITE         |
+-----------------------------+--------------------+
| Data Type                   | Tango::DEV_LONG    |
+-----------------------------+--------------------+
| Display Level               | OPERATOR           |
+-----------------------------+--------------------+
| Inherited                   | false              |
+-----------------------------+--------------------+
| Abstract                    | false              |
+-----------------------------+--------------------+
| Polling Period              | Not polled         |
+-----------------------------+--------------------+
| Memorized                   | Not set            |
+-----------------------------+--------------------+
|                             |                    |
+-----------------------------+--------------------+
| Read allowed for            | All states         |
+-----------------------------+--------------------+
| Write allowed for           | All states         |
+-----------------------------+--------------------+

+-----------------------------+----+
| **Attribute Properties**    |    |
+=============================+====+
| label                       |    |
+-----------------------------+----+
| unit                        |    |
+-----------------------------+----+
| standard unit               |    |
+-----------------------------+----+
| display unit                |    |
+-----------------------------+----+
| format                      |    |
+-----------------------------+----+
| max_value                   |    |
+-----------------------------+----+
| min_value                   |    |
+-----------------------------+----+
| max_alarm                   |    |
+-----------------------------+----+
| min_alarm                   |    |
+-----------------------------+----+
| max_warning                 |    |
+-----------------------------+----+
| min_warning                 |    |
+-----------------------------+----+
| delta_time                  |    |
+-----------------------------+----+
| delta_val                   |    |
+-----------------------------+----+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute SetAbsoluteEvent:**   

+-----------------------------+----------------------+
| **Attribute Definition**    |                      |
+=============================+======================+
| Attribute Type              | Scalar               |
+-----------------------------+----------------------+
| R/W Type                    | READ_WRITE           |
+-----------------------------+----------------------+
| Data Type                   | Tango::DEV_DOUBLE    |
+-----------------------------+----------------------+
| Display Level               | OPERATOR             |
+-----------------------------+----------------------+
| Inherited                   | false                |
+-----------------------------+----------------------+
| Abstract                    | false                |
+-----------------------------+----------------------+
| Polling Period              | Not polled           |
+-----------------------------+----------------------+
| Memorized                   | Not set              |
+-----------------------------+----------------------+
|                             |                      |
+-----------------------------+----------------------+
| Read allowed for            | All states           |
+-----------------------------+----------------------+
| Write allowed for           | All states           |
+-----------------------------+----------------------+

+-----------------------------+----+
| **Attribute Properties**    |    |
+=============================+====+
| label                       |    |
+-----------------------------+----+
| unit                        |    |
+-----------------------------+----+
| standard unit               |    |
+-----------------------------+----+
| display unit                |    |
+-----------------------------+----+
| format                      |    |
+-----------------------------+----+
| max_value                   |    |
+-----------------------------+----+
| min_value                   |    |
+-----------------------------+----+
| max_alarm                   |    |
+-----------------------------+----+
| min_alarm                   |    |
+-----------------------------+----+
| max_warning                 |    |
+-----------------------------+----+
| min_warning                 |    |
+-----------------------------+----+
| delta_time                  |    |
+-----------------------------+----+
| delta_val                   |    |
+-----------------------------+----+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute SetRelativeEvent:**   

+-----------------------------+----------------------+
| **Attribute Definition**    |                      |
+=============================+======================+
| Attribute Type              | Scalar               |
+-----------------------------+----------------------+
| R/W Type                    | READ_WRITE           |
+-----------------------------+----------------------+
| Data Type                   | Tango::DEV_DOUBLE    |
+-----------------------------+----------------------+
| Display Level               | OPERATOR             |
+-----------------------------+----------------------+
| Inherited                   | false                |
+-----------------------------+----------------------+
| Abstract                    | false                |
+-----------------------------+----------------------+
| Polling Period              | Not polled           |
+-----------------------------+----------------------+
| Memorized                   | Not set              |
+-----------------------------+----------------------+
|                             |                      |
+-----------------------------+----------------------+
| Read allowed for            | All states           |
+-----------------------------+----------------------+
| Write allowed for           | All states           |
+-----------------------------+----------------------+

+-----------------------------+----+
| **Attribute Properties**    |    |
+=============================+====+
| label                       |    |
+-----------------------------+----+
| unit                        |    |
+-----------------------------+----+
| standard unit               |    |
+-----------------------------+----+
| display unit                |    |
+-----------------------------+----+
| format                      |    |
+-----------------------------+----+
| max_value                   |    |
+-----------------------------+----+
| min_value                   |    |
+-----------------------------+----+
| max_alarm                   |    |
+-----------------------------+----+
| min_alarm                   |    |
+-----------------------------+----+
| max_warning                 |    |
+-----------------------------+----+
| min_warning                 |    |
+-----------------------------+----+
| delta_time                  |    |
+-----------------------------+----+
| delta_val                   |    |
+-----------------------------+----+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute SetPeriodEvent:**   

+-----------------------------+--------------------+
| **Attribute Definition**    |                    |
+=============================+====================+
| Attribute Type              | Scalar             |
+-----------------------------+--------------------+
| R/W Type                    | READ_WRITE         |
+-----------------------------+--------------------+
| Data Type                   | Tango::DEV_LONG    |
+-----------------------------+--------------------+
| Display Level               | OPERATOR           |
+-----------------------------+--------------------+
| Inherited                   | false              |
+-----------------------------+--------------------+
| Abstract                    | false              |
+-----------------------------+--------------------+
| Polling Period              | Not polled         |
+-----------------------------+--------------------+
| Memorized                   | Not set            |
+-----------------------------+--------------------+
|                             |                    |
+-----------------------------+--------------------+
| Read allowed for            | All states         |
+-----------------------------+--------------------+
| Write allowed for           | All states         |
+-----------------------------+--------------------+

+-----------------------------+----+
| **Attribute Properties**    |    |
+=============================+====+
| label                       |    |
+-----------------------------+----+
| unit                        |    |
+-----------------------------+----+
| standard unit               |    |
+-----------------------------+----+
| display unit                |    |
+-----------------------------+----+
| format                      |    |
+-----------------------------+----+
| max_value                   |    |
+-----------------------------+----+
| min_value                   |    |
+-----------------------------+----+
| max_alarm                   |    |
+-----------------------------+----+
| min_alarm                   |    |
+-----------------------------+----+
| max_warning                 |    |
+-----------------------------+----+
| min_warning                 |    |
+-----------------------------+----+
| delta_time                  |    |
+-----------------------------+----+
| delta_val                   |    |
+-----------------------------+----+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute SetCodePushedEvent:**   

+-----------------------------+-----------------------+
| **Attribute Definition**    |                       |
+=============================+=======================+
| Attribute Type              | Scalar                |
+-----------------------------+-----------------------+
| R/W Type                    | READ_WRITE            |
+-----------------------------+-----------------------+
| Data Type                   | Tango::DEV_BOOLEAN    |
+-----------------------------+-----------------------+
| Display Level               | OPERATOR              |
+-----------------------------+-----------------------+
| Inherited                   | false                 |
+-----------------------------+-----------------------+
| Abstract                    | false                 |
+-----------------------------+-----------------------+
| Polling Period              | Not polled            |
+-----------------------------+-----------------------+
| Memorized                   | Not set               |
+-----------------------------+-----------------------+
|                             |                       |
+-----------------------------+-----------------------+
| Read allowed for            | All states            |
+-----------------------------+-----------------------+
| Write allowed for           | All states            |
+-----------------------------+-----------------------+

+-----------------------------+----+
| **Attribute Properties**    |    |
+=============================+====+
| label                       |    |
+-----------------------------+----+
| unit                        |    |
+-----------------------------+----+
| standard unit               |    |
+-----------------------------+----+
| display unit                |    |
+-----------------------------+----+
| format                      |    |
+-----------------------------+----+
| max_value                   |    |
+-----------------------------+----+
| min_value                   |    |
+-----------------------------+----+
| max_alarm                   |    |
+-----------------------------+----+
| min_alarm                   |    |
+-----------------------------+----+
| max_warning                 |    |
+-----------------------------+----+
| min_warning                 |    |
+-----------------------------+----+
| delta_time                  |    |
+-----------------------------+----+
| delta_val                   |    |
+-----------------------------+----+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute SetArchiver:**   

+-----------------------------+----------------------+
| **Attribute Definition**    |                      |
+=============================+======================+
| Attribute Type              | Scalar               |
+-----------------------------+----------------------+
| R/W Type                    | READ_WRITE           |
+-----------------------------+----------------------+
| Data Type                   | Tango::DEV_STRING    |
+-----------------------------+----------------------+
| Display Level               | OPERATOR             |
+-----------------------------+----------------------+
| Inherited                   | false                |
+-----------------------------+----------------------+
| Abstract                    | false                |
+-----------------------------+----------------------+
| Polling Period              | Not polled           |
+-----------------------------+----------------------+
| Memorized                   | Not set              |
+-----------------------------+----------------------+
|                             |                      |
+-----------------------------+----------------------+
| Read allowed for            | All states           |
+-----------------------------+----------------------+
| Write allowed for           | All states           |
+-----------------------------+----------------------+

+-----------------------------+----+
| **Attribute Properties**    |    |
+=============================+====+
| label                       |    |
+-----------------------------+----+
| unit                        |    |
+-----------------------------+----+
| standard unit               |    |
+-----------------------------+----+
| display unit                |    |
+-----------------------------+----+
| format                      |    |
+-----------------------------+----+
| max_value                   |    |
+-----------------------------+----+
| min_value                   |    |
+-----------------------------+----+
| max_alarm                   |    |
+-----------------------------+----+
| min_alarm                   |    |
+-----------------------------+----+
| max_warning                 |    |
+-----------------------------+----+
| min_warning                 |    |
+-----------------------------+----+
| delta_time                  |    |
+-----------------------------+----+
| delta_val                   |    |
+-----------------------------+----+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute AttributeMaxStoreTime:**   

Maximum storing time

+-----------------------------+----------------------+
| **Attribute Definition**    |                      |
+=============================+======================+
| Attribute Type              | Scalar               |
+-----------------------------+----------------------+
| R/W Type                    | READ                 |
+-----------------------------+----------------------+
| Data Type                   | Tango::DEV_DOUBLE    |
+-----------------------------+----------------------+
| Display Level               | OPERATOR             |
+-----------------------------+----------------------+
| Inherited                   | false                |
+-----------------------------+----------------------+
| Abstract                    | false                |
+-----------------------------+----------------------+
| Polling Period              | Not polled           |
+-----------------------------+----------------------+
| Memorized                   | Not set              |
+-----------------------------+----------------------+
|                             |                      |
+-----------------------------+----------------------+
| Read allowed for            | All states           |
+-----------------------------+----------------------+

+-----------------------------+-----+
| **Attribute Properties**    |     |
+=============================+=====+
| label                       |     |
+-----------------------------+-----+
| unit                        | s   |
+-----------------------------+-----+
| standard unit               | 1   |
+-----------------------------+-----+
| display unit                | s   |
+-----------------------------+-----+
| format                      |     |
+-----------------------------+-----+
| max_value                   |     |
+-----------------------------+-----+
| min_value                   |     |
+-----------------------------+-----+
| max_alarm                   |     |
+-----------------------------+-----+
| min_alarm                   |     |
+-----------------------------+-----+
| max_warning                 |     |
+-----------------------------+-----+
| min_warning                 |     |
+-----------------------------+-----+
| delta_time                  |     |
+-----------------------------+-----+
| delta_val                   |     |
+-----------------------------+-----+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute AttributeMinStoreTime:**   

Minimum storing time

+-----------------------------+----------------------+
| **Attribute Definition**    |                      |
+=============================+======================+
| Attribute Type              | Scalar               |
+-----------------------------+----------------------+
| R/W Type                    | READ                 |
+-----------------------------+----------------------+
| Data Type                   | Tango::DEV_DOUBLE    |
+-----------------------------+----------------------+
| Display Level               | OPERATOR             |
+-----------------------------+----------------------+
| Inherited                   | false                |
+-----------------------------+----------------------+
| Abstract                    | false                |
+-----------------------------+----------------------+
| Polling Period              | Not polled           |
+-----------------------------+----------------------+
| Memorized                   | Not set              |
+-----------------------------+----------------------+
|                             |                      |
+-----------------------------+----------------------+
| Read allowed for            | All states           |
+-----------------------------+----------------------+

+-----------------------------+-----+
| **Attribute Properties**    |     |
+=============================+=====+
| label                       |     |
+-----------------------------+-----+
| unit                        | s   |
+-----------------------------+-----+
| standard unit               | 1   |
+-----------------------------+-----+
| display unit                | s   |
+-----------------------------+-----+
| format                      |     |
+-----------------------------+-----+
| max_value                   |     |
+-----------------------------+-----+
| min_value                   |     |
+-----------------------------+-----+
| max_alarm                   |     |
+-----------------------------+-----+
| min_alarm                   |     |
+-----------------------------+-----+
| max_warning                 |     |
+-----------------------------+-----+
| min_warning                 |     |
+-----------------------------+-----+
| delta_time                  |     |
+-----------------------------+-----+
| delta_val                   |     |
+-----------------------------+-----+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute AttributeMaxProcessingTime:**   

Maximum processing (from event reception to storage) time

+-----------------------------+----------------------+
| **Attribute Definition**    |                      |
+=============================+======================+
| Attribute Type              | Scalar               |
+-----------------------------+----------------------+
| R/W Type                    | READ                 |
+-----------------------------+----------------------+
| Data Type                   | Tango::DEV_DOUBLE    |
+-----------------------------+----------------------+
| Display Level               | OPERATOR             |
+-----------------------------+----------------------+
| Inherited                   | false                |
+-----------------------------+----------------------+
| Abstract                    | false                |
+-----------------------------+----------------------+
| Polling Period              | Not polled           |
+-----------------------------+----------------------+
| Memorized                   | Not set              |
+-----------------------------+----------------------+
|                             |                      |
+-----------------------------+----------------------+
| Read allowed for            | All states           |
+-----------------------------+----------------------+

+-----------------------------+-----+
| **Attribute Properties**    |     |
+=============================+=====+
| label                       |     |
+-----------------------------+-----+
| unit                        | s   |
+-----------------------------+-----+
| standard unit               | 1   |
+-----------------------------+-----+
| display unit                | s   |
+-----------------------------+-----+
| format                      |     |
+-----------------------------+-----+
| max_value                   |     |
+-----------------------------+-----+
| min_value                   |     |
+-----------------------------+-----+
| max_alarm                   |     |
+-----------------------------+-----+
| min_alarm                   |     |
+-----------------------------+-----+
| max_warning                 |     |
+-----------------------------+-----+
| min_warning                 |     |
+-----------------------------+-----+
| delta_time                  |     |
+-----------------------------+-----+
| delta_val                   |     |
+-----------------------------+-----+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute AttributeMinProcessingTime:**   

Minimum processing (from event reception to storage) time

+-----------------------------+----------------------+
| **Attribute Definition**    |                      |
+=============================+======================+
| Attribute Type              | Scalar               |
+-----------------------------+----------------------+
| R/W Type                    | READ                 |
+-----------------------------+----------------------+
| Data Type                   | Tango::DEV_DOUBLE    |
+-----------------------------+----------------------+
| Display Level               | OPERATOR             |
+-----------------------------+----------------------+
| Inherited                   | false                |
+-----------------------------+----------------------+
| Abstract                    | false                |
+-----------------------------+----------------------+
| Polling Period              | Not polled           |
+-----------------------------+----------------------+
| Memorized                   | Not set              |
+-----------------------------+----------------------+
|                             |                      |
+-----------------------------+----------------------+
| Read allowed for            | All states           |
+-----------------------------+----------------------+

+-----------------------------+-----+
| **Attribute Properties**    |     |
+=============================+=====+
| label                       |     |
+-----------------------------+-----+
| unit                        | s   |
+-----------------------------+-----+
| standard unit               | 1   |
+-----------------------------+-----+
| display unit                | s   |
+-----------------------------+-----+
| format                      |     |
+-----------------------------+-----+
| max_value                   |     |
+-----------------------------+-----+
| min_value                   |     |
+-----------------------------+-----+
| max_alarm                   |     |
+-----------------------------+-----+
| min_alarm                   |     |
+-----------------------------+-----+
| max_warning                 |     |
+-----------------------------+-----+
| min_warning                 |     |
+-----------------------------+-----+
| delta_time                  |     |
+-----------------------------+-----+
| delta_val                   |     |
+-----------------------------+-----+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute AttributeRecordFreq:**   

Record frequency

+-----------------------------+----------------------+
| **Attribute Definition**    |                      |
+=============================+======================+
| Attribute Type              | Scalar               |
+-----------------------------+----------------------+
| R/W Type                    | READ                 |
+-----------------------------+----------------------+
| Data Type                   | Tango::DEV_DOUBLE    |
+-----------------------------+----------------------+
| Display Level               | OPERATOR             |
+-----------------------------+----------------------+
| Inherited                   | false                |
+-----------------------------+----------------------+
| Abstract                    | false                |
+-----------------------------+----------------------+
| Polling Period              | Not polled           |
+-----------------------------+----------------------+
| Memorized                   | Not set              |
+-----------------------------+----------------------+
|                             |                      |
+-----------------------------+----------------------+
| Read allowed for            | All states           |
+-----------------------------+----------------------+

+-----------------------------+-------------+
| **Attribute Properties**    |             |
+=============================+=============+
| label                       |             |
+-----------------------------+-------------+
| unit                        | ev/period   |
+-----------------------------+-------------+
| standard unit               | 1           |
+-----------------------------+-------------+
| display unit                | ev/period   |
+-----------------------------+-------------+
| format                      |             |
+-----------------------------+-------------+
| max_value                   |             |
+-----------------------------+-------------+
| min_value                   |             |
+-----------------------------+-------------+
| max_alarm                   |             |
+-----------------------------+-------------+
| min_alarm                   |             |
+-----------------------------+-------------+
| max_warning                 |             |
+-----------------------------+-------------+
| min_warning                 |             |
+-----------------------------+-------------+
| delta_time                  |             |
+-----------------------------+-------------+
| delta_val                   |             |
+-----------------------------+-------------+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute AttributeFailureFreq:**   

Failure frequency

+-----------------------------+----------------------+
| **Attribute Definition**    |                      |
+=============================+======================+
| Attribute Type              | Scalar               |
+-----------------------------+----------------------+
| R/W Type                    | READ                 |
+-----------------------------+----------------------+
| Data Type                   | Tango::DEV_DOUBLE    |
+-----------------------------+----------------------+
| Display Level               | OPERATOR             |
+-----------------------------+----------------------+
| Inherited                   | false                |
+-----------------------------+----------------------+
| Abstract                    | false                |
+-----------------------------+----------------------+
| Polling Period              | Not polled           |
+-----------------------------+----------------------+
| Memorized                   | Not set              |
+-----------------------------+----------------------+
|                             |                      |
+-----------------------------+----------------------+
| Read allowed for            | All states           |
+-----------------------------+----------------------+

+-----------------------------+-------------+
| **Attribute Properties**    |             |
+=============================+=============+
| label                       |             |
+-----------------------------+-------------+
| unit                        | ev/period   |
+-----------------------------+-------------+
| standard unit               | 1           |
+-----------------------------+-------------+
| display unit                | ev/period   |
+-----------------------------+-------------+
| format                      |             |
+-----------------------------+-------------+
| max_value                   |             |
+-----------------------------+-------------+
| min_value                   |             |
+-----------------------------+-------------+
| max_alarm                   |             |
+-----------------------------+-------------+
| min_alarm                   |             |
+-----------------------------+-------------+
| max_warning                 |             |
+-----------------------------+-------------+
| min_warning                 |             |
+-----------------------------+-------------+
| delta_time                  |             |
+-----------------------------+-------------+
| delta_val                   |             |
+-----------------------------+-------------+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute AttributeStartedNumber:**   

Number of archived attributes started

+-----------------------------+--------------------+
| **Attribute Definition**    |                    |
+=============================+====================+
| Attribute Type              | Scalar             |
+-----------------------------+--------------------+
| R/W Type                    | READ               |
+-----------------------------+--------------------+
| Data Type                   | Tango::DEV_LONG    |
+-----------------------------+--------------------+
| Display Level               | OPERATOR           |
+-----------------------------+--------------------+
| Inherited                   | false              |
+-----------------------------+--------------------+
| Abstract                    | false              |
+-----------------------------+--------------------+
| Polling Period              | Not polled         |
+-----------------------------+--------------------+
| Memorized                   | Not set            |
+-----------------------------+--------------------+
|                             |                    |
+-----------------------------+--------------------+
| Read allowed for            | All states         |
+-----------------------------+--------------------+

+-----------------------------+----+
| **Attribute Properties**    |    |
+=============================+====+
| label                       |    |
+-----------------------------+----+
| unit                        |    |
+-----------------------------+----+
| standard unit               |    |
+-----------------------------+----+
| display unit                |    |
+-----------------------------+----+
| format                      |    |
+-----------------------------+----+
| max_value                   |    |
+-----------------------------+----+
| min_value                   |    |
+-----------------------------+----+
| max_alarm                   |    |
+-----------------------------+----+
| min_alarm                   |    |
+-----------------------------+----+
| max_warning                 |    |
+-----------------------------+----+
| min_warning                 |    |
+-----------------------------+----+
| delta_time                  |    |
+-----------------------------+----+
| delta_val                   |    |
+-----------------------------+----+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute AttributeStoppedNumber:**   

Number of archived attributes stopped

+-----------------------------+--------------------+
| **Attribute Definition**    |                    |
+=============================+====================+
| Attribute Type              | Scalar             |
+-----------------------------+--------------------+
| R/W Type                    | READ               |
+-----------------------------+--------------------+
| Data Type                   | Tango::DEV_LONG    |
+-----------------------------+--------------------+
| Display Level               | OPERATOR           |
+-----------------------------+--------------------+
| Inherited                   | false              |
+-----------------------------+--------------------+
| Abstract                    | false              |
+-----------------------------+--------------------+
| Polling Period              | Not polled         |
+-----------------------------+--------------------+
| Memorized                   | Not set            |
+-----------------------------+--------------------+
|                             |                    |
+-----------------------------+--------------------+
| Read allowed for            | All states         |
+-----------------------------+--------------------+

+-----------------------------+----+
| **Attribute Properties**    |    |
+=============================+====+
| label                       |    |
+-----------------------------+----+
| unit                        |    |
+-----------------------------+----+
| standard unit               |    |
+-----------------------------+----+
| display unit                |    |
+-----------------------------+----+
| format                      |    |
+-----------------------------+----+
| max_value                   |    |
+-----------------------------+----+
| min_value                   |    |
+-----------------------------+----+
| max_alarm                   |    |
+-----------------------------+----+
| min_alarm                   |    |
+-----------------------------+----+
| max_warning                 |    |
+-----------------------------+----+
| min_warning                 |    |
+-----------------------------+----+
| delta_time                  |    |
+-----------------------------+----+
| delta_val                   |    |
+-----------------------------+----+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute AttributeMaxPendingNumber:**   

Max number of attributes waiting to be archived

+-----------------------------+--------------------+
| **Attribute Definition**    |                    |
+=============================+====================+
| Attribute Type              | Scalar             |
+-----------------------------+--------------------+
| R/W Type                    | READ               |
+-----------------------------+--------------------+
| Data Type                   | Tango::DEV_LONG    |
+-----------------------------+--------------------+
| Display Level               | OPERATOR           |
+-----------------------------+--------------------+
| Inherited                   | false              |
+-----------------------------+--------------------+
| Abstract                    | false              |
+-----------------------------+--------------------+
| Polling Period              | Not polled         |
+-----------------------------+--------------------+
| Memorized                   | Not set            |
+-----------------------------+--------------------+
|                             |                    |
+-----------------------------+--------------------+
| Read allowed for            | All states         |
+-----------------------------+--------------------+

+-----------------------------+--------------------+
| **Attribute Definition**    |                    |
+=============================+====================+
| Attribute Type              | Scalar             |
+-----------------------------+--------------------+
| R/W Type                    | READ               |
+-----------------------------+--------------------+
| Data Type                   | Tango::DEV_LONG    |
+-----------------------------+--------------------+
| Display Level               | OPERATOR           |
+-----------------------------+--------------------+
| Inherited                   | false              |
+-----------------------------+--------------------+
| Abstract                    | false              |
+-----------------------------+--------------------+
| Polling Period              | Not polled         |
+-----------------------------+--------------------+
| Memorized                   | Not set            |
+-----------------------------+--------------------+
|                             |                    |
+-----------------------------+--------------------+
| Read allowed for            | All states         |
+-----------------------------+--------------------+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute AttributePausedNumber:**   

Number of archived attributes paused

+-----------------------------+--------------------+
| **Attribute Definition**    |                    |
+=============================+====================+
| Attribute Type              | Scalar             |
+-----------------------------+--------------------+
| R/W Type                    | READ               |
+-----------------------------+--------------------+
| Data Type                   | Tango::DEV_LONG    |
+-----------------------------+--------------------+
| Display Level               | OPERATOR           |
+-----------------------------+--------------------+
| Inherited                   | false              |
+-----------------------------+--------------------+
| Abstract                    | false              |
+-----------------------------+--------------------+
| Polling Period              | Not polled         |
+-----------------------------+--------------------+
| Memorized                   | Not set            |
+-----------------------------+--------------------+
|                             |                    |
+-----------------------------+--------------------+
| Read allowed for            | All states         |
+-----------------------------+--------------------+

+-----------------------------+----+
| **Attribute Properties**    |    |
+=============================+====+
| label                       |    |
+-----------------------------+----+
| unit                        |    |
+-----------------------------+----+
| standard unit               |    |
+-----------------------------+----+
| display unit                |    |
+-----------------------------+----+
| format                      |    |
+-----------------------------+----+
| max_value                   |    |
+-----------------------------+----+
| min_value                   |    |
+-----------------------------+----+
| max_alarm                   |    |
+-----------------------------+----+
| min_alarm                   |    |
+-----------------------------+----+
| max_warning                 |    |
+-----------------------------+----+
| min_warning                 |    |
+-----------------------------+----+
| delta_time                  |    |
+-----------------------------+----+
| delta_val                   |    |
+-----------------------------+----+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute SetTTL:**   

Time To Live for temporary storage in hours

+-----------------------------+---------------------+
| **Attribute Definition**    |                     |
+=============================+=====================+
| Attribute Type              | Scalar              |
+-----------------------------+---------------------+
| R/W Type                    | READ_WRITE          |
+-----------------------------+---------------------+
| Data Type                   | Tango::DEV_ULONG    |
+-----------------------------+---------------------+
| Display Level               | OPERATOR            |
+-----------------------------+---------------------+
| Inherited                   | false               |
+-----------------------------+---------------------+
| Abstract                    | false               |
+-----------------------------+---------------------+
| Polling Period              | Not polled          |
+-----------------------------+---------------------+
| Memorized                   | Not set             |
+-----------------------------+---------------------+
|                             |                     |
+-----------------------------+---------------------+
| Read allowed for            | All states          |
+-----------------------------+---------------------+
| Write allowed for           | All states          |
+-----------------------------+---------------------+

+-----------------------------+---------+
| **Attribute Properties**    |         |
+=============================+=========+
| label                       |         |
+-----------------------------+---------+
| unit                        | hours   |
+-----------------------------+---------+
| standard unit               | 1       |
+-----------------------------+---------+
| display unit                | hours   |
+-----------------------------+---------+
| format                      |         |
+-----------------------------+---------+
| max_value                   |         |
+-----------------------------+---------+
| min_value                   |         |
+-----------------------------+---------+
| max_alarm                   |         |
+-----------------------------+---------+
| min_alarm                   |         |
+-----------------------------+---------+
| max_warning                 |         |
+-----------------------------+---------+
| min_warning                 |         |
+-----------------------------+---------+
| delta_time                  |         |
+-----------------------------+---------+
| delta_val                   |         |
+-----------------------------+---------+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute SetStrategy:**   

list of strategies separated with |

+-----------------------------+----------------------+
| **Attribute Definition**    |                      |
+=============================+======================+
| Attribute Type              | Scalar               |
+-----------------------------+----------------------+
| R/W Type                    | READ_WRITE           |
+-----------------------------+----------------------+
| Data Type                   | Tango::DEV_STRING    |
+-----------------------------+----------------------+
| Display Level               | OPERATOR             |
+-----------------------------+----------------------+
| Inherited                   | false                |
+-----------------------------+----------------------+
| Abstract                    | false                |
+-----------------------------+----------------------+
| Polling Period              | Not polled           |
+-----------------------------+----------------------+
| Memorized                   | Not set              |
+-----------------------------+----------------------+
|                             |                      |
+-----------------------------+----------------------+
| Read allowed for            | All states           |
+-----------------------------+----------------------+
| Write allowed for           | All states           |
+-----------------------------+----------------------+

+-----------------------------+----------------------+
| **Attribute Definition**    |                      |
+=============================+======================+
| Attribute Type              | Scalar               |
+-----------------------------+----------------------+
| R/W Type                    | READ_WRITE           |
+-----------------------------+----------------------+
| Data Type                   | Tango::DEV_STRING    |
+-----------------------------+----------------------+
| Display Level               | OPERATOR             |
+-----------------------------+----------------------+
| Inherited                   | false                |
+-----------------------------+----------------------+
| Abstract                    | false                |
+-----------------------------+----------------------+
| Polling Period              | Not polled           |
+-----------------------------+----------------------+
| Memorized                   | Not set              |
+-----------------------------+----------------------+
|                             |                      |
+-----------------------------+----------------------+
| Read allowed for            | All states           |
+-----------------------------+----------------------+
| Write allowed for           | All states           |
+-----------------------------+----------------------+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute Context:**   

+-----------------------------+----------------------+
| **Attribute Definition**    |                      |
+=============================+======================+
| Attribute Type              | Scalar               |
+-----------------------------+----------------------+
| R/W Type                    | WRITE                |
+-----------------------------+----------------------+
| Data Type                   | Tango::DEV_STRING    |
+-----------------------------+----------------------+
| Display Level               | EXPERT               |
+-----------------------------+----------------------+
| Inherited                   | false                |
+-----------------------------+----------------------+
| Abstract                    | false                |
+-----------------------------+----------------------+
| Polling Period              | Not polled           |
+-----------------------------+----------------------+
| Memorized                   | Not set              |
+-----------------------------+----------------------+
|                             |                      |
+-----------------------------+----------------------+
| Write allowed for           | All states           |
+-----------------------------+----------------------+

+-----------------------------+----+
| **Attribute Properties**    |    |
+=============================+====+
| label                       |    |
+-----------------------------+----+
| unit                        |    |
+-----------------------------+----+
| standard unit               |    |
+-----------------------------+----+
| display unit                |    |
+-----------------------------+----+
| format                      |    |
+-----------------------------+----+
| max_value                   |    |
+-----------------------------+----+
| min_value                   |    |
+-----------------------------+----+
| max_alarm                   |    |
+-----------------------------+----+
| min_alarm                   |    |
+-----------------------------+----+
| max_warning                 |    |
+-----------------------------+----+
| min_warning                 |    |
+-----------------------------+----+
| delta_time                  |    |
+-----------------------------+----+
| delta_val                   |    |
+-----------------------------+----+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute ArchiverList:**   

+-----------------------------+----------------------+
| **Attribute Definition**    |                      |
+=============================+======================+
| Attribute Type              | Spectrum ( 1000 )    |
+-----------------------------+----------------------+
| R/W Type                    | READ                 |
+-----------------------------+----------------------+
| Data Type                   | Tango::DEV_STRING    |
+-----------------------------+----------------------+
| Display Level               | OPERATOR             |
+-----------------------------+----------------------+
| Inherited                   | false                |
+-----------------------------+----------------------+
| Abstract                    | false                |
+-----------------------------+----------------------+
| Polling Period              | Not polled           |
+-----------------------------+----------------------+
| Memorized                   | Not set              |
+-----------------------------+----------------------+
|                             |                      |
+-----------------------------+----------------------+
| Read allowed for            | All states           |
+-----------------------------+----------------------+

+-----------------------------+----+
| **Attribute Properties**    |    |
+=============================+====+
| label                       |    |
+-----------------------------+----+
| unit                        |    |
+-----------------------------+----+
| standard unit               |    |
+-----------------------------+----+
| display unit                |    |
+-----------------------------+----+
| format                      |    |
+-----------------------------+----+
| max_value                   |    |
+-----------------------------+----+
| min_value                   |    |
+-----------------------------+----+
| max_alarm                   |    |
+-----------------------------+----+
| min_alarm                   |    |
+-----------------------------+----+
| max_warning                 |    |
+-----------------------------+----+
| min_warning                 |    |
+-----------------------------+----+
| delta_time                  |    |
+-----------------------------+----+
| delta_val                   |    |
+-----------------------------+----+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute ArchiverStatus:**   

+-----------------------------+----------------------+
| **Attribute Definition**    |                      |
+=============================+======================+
| Attribute Type              | Spectrum ( 1000 )    |
+-----------------------------+----------------------+
| R/W Type                    | READ                 |
+-----------------------------+----------------------+
| Data Type                   | Tango::DEV_STRING    |
+-----------------------------+----------------------+
| Display Level               | OPERATOR             |
+-----------------------------+----------------------+
| Inherited                   | false                |
+-----------------------------+----------------------+
| Abstract                    | false                |
+-----------------------------+----------------------+
| Polling Period              | Not polled           |
+-----------------------------+----------------------+
| Memorized                   | Not set              |
+-----------------------------+----------------------+
|                             |                      |
+-----------------------------+----------------------+
| Read allowed for            | All states           |
+-----------------------------+----------------------+

+-----------------------------+----+
| **Attribute Properties**    |    |
+=============================+====+
| label                       |    |
+-----------------------------+----+
| unit                        |    |
+-----------------------------+----+
| standard unit               |    |
+-----------------------------+----+
| display unit                |    |
+-----------------------------+----+
| format                      |    |
+-----------------------------+----+
| max_value                   |    |
+-----------------------------+----+
| min_value                   |    |
+-----------------------------+----+
| max_alarm                   |    |
+-----------------------------+----+
| min_alarm                   |    |
+-----------------------------+----+
| max_warning                 |    |
+-----------------------------+----+
| min_warning                 |    |
+-----------------------------+----+
| delta_time                  |    |
+-----------------------------+----+
| delta_val                   |    |
+-----------------------------+----+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute ArchiverStatisticsResetTime:**   

Seconds elapsed since last statistics reset

+-----------------------------+----------------------+
| **Attribute Definition**    |                      |
+=============================+======================+
| Attribute Type              | Spectrum ( 1000 )    |
+-----------------------------+----------------------+
| R/W Type                    | READ                 |
+-----------------------------+----------------------+
| Data Type                   | Tango::DEV_DOUBLE    |
+-----------------------------+----------------------+
| Display Level               | OPERATOR             |
+-----------------------------+----------------------+
| Inherited                   | false                |
+-----------------------------+----------------------+
| Abstract                    | false                |
+-----------------------------+----------------------+
| Polling Period              | Not polled           |
+-----------------------------+----------------------+
| Memorized                   | Not set              |
+-----------------------------+----------------------+
|                             |                      |
+-----------------------------+----------------------+
| Read allowed for            | All states           |
+-----------------------------+----------------------+

+-----------------------------+-----+
| **Attribute Properties**    |     |
+=============================+=====+
| label                       |     |
+-----------------------------+-----+
| unit                        | s   |
+-----------------------------+-----+
| standard unit               | 1   |
+-----------------------------+-----+
| display unit                | s   |
+-----------------------------+-----+
| format                      |     |
+-----------------------------+-----+
| max_value                   |     |
+-----------------------------+-----+
| min_value                   |     |
+-----------------------------+-----+
| max_alarm                   |     |
+-----------------------------+-----+
| min_alarm                   |     |
+-----------------------------+-----+
| max_warning                 |     |
+-----------------------------+-----+
| min_warning                 |     |
+-----------------------------+-----+
| delta_time                  |     |
+-----------------------------+-----+
| delta_val                   |     |
+-----------------------------+-----+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute ArchiverContext:**   

Archiver context

+-----------------------------+----------------------+
| **Attribute Definition**    |                      |
+=============================+======================+
| Attribute Type              | Spectrum ( 1000 )    |
+-----------------------------+----------------------+
| R/W Type                    | READ                 |
+-----------------------------+----------------------+
| Data Type                   | Tango::DEV_STRING    |
+-----------------------------+----------------------+
| Display Level               | OPERATOR             |
+-----------------------------+----------------------+
| Inherited                   | false                |
+-----------------------------+----------------------+
| Abstract                    | false                |
+-----------------------------+----------------------+
| Polling Period              | Not polled           |
+-----------------------------+----------------------+
| Memorized                   | Not set              |
+-----------------------------+----------------------+
|                             |                      |
+-----------------------------+----------------------+
| Read allowed for            | All states           |
+-----------------------------+----------------------+

+-----------------------------+-----+
| **Attribute Properties**    |     |
+=============================+=====+
| label                       |     |
+-----------------------------+-----+
| unit                        | s   |
+-----------------------------+-----+
| standard unit               | 1   |
+-----------------------------+-----+
| display unit                | s   |
+-----------------------------+-----+
| format                      |     |
+-----------------------------+-----+
| max_value                   |     |
+-----------------------------+-----+
| min_value                   |     |
+-----------------------------+-----+
| max_alarm                   |     |
+-----------------------------+-----+
| min_alarm                   |     |
+-----------------------------+-----+
| max_warning                 |     |
+-----------------------------+-----+
| min_warning                 |     |
+-----------------------------+-----+
| delta_time                  |     |
+-----------------------------+-----+
| delta_val                   |     |
+-----------------------------+-----+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

**Attribute ContextsList:**   

+-----------------------------+----------------------+
| **Attribute Definition**    |                      |
+=============================+======================+
| Attribute Type              | Spectrum ( 1000 )    |
+-----------------------------+----------------------+
| R/W Type                    | READ                 |
+-----------------------------+----------------------+
| Data Type                   | Tango::DEV_STRING    |
+-----------------------------+----------------------+
| Display Level               | EXPERT               |
+-----------------------------+----------------------+
| Inherited                   | false                |
+-----------------------------+----------------------+
| Abstract                    | false                |
+-----------------------------+----------------------+
| Polling Period              | Not polled           |
+-----------------------------+----------------------+
| Memorized                   | Not set              |
+-----------------------------+----------------------+
|                             |                      |
+-----------------------------+----------------------+
| Read allowed for            | All states           |
+-----------------------------+----------------------+

+-----------------------------+----+
| **Attribute Properties**    |    |
+=============================+====+
| label                       |    |
+-----------------------------+----+
| unit                        |    |
+-----------------------------+----+
| standard unit               |    |
+-----------------------------+----+
| display unit                |    |
+-----------------------------+----+
| format                      |    |
+-----------------------------+----+
| max_value                   |    |
+-----------------------------+----+
| min_value                   |    |
+-----------------------------+----+
| max_alarm                   |    |
+-----------------------------+----+
| min_alarm                   |    |
+-----------------------------+----+
| max_warning                 |    |
+-----------------------------+----+
| min_warning                 |    |
+-----------------------------+----+
| delta_time                  |    |
+-----------------------------+----+
| delta_val                   |    |
+-----------------------------+----+

+-------------------------------------+-----------+
| **Attribute Event Criteria**        |           |
+=====================================+===========+
| Periodic                            | Not set   |
+-------------------------------------+-----------+
| Relative Change                     | Not set   |
+-------------------------------------+-----------+
| Absolute Change                     | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Archive Periodic                    | Not set   |
+-------------------------------------+-----------+
| Archive Relative Change             | Not set   |
+-------------------------------------+-----------+
| Archive Absolute Change             | Not set   |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Change event by user code      | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push Archive event by user code     | false     |
+-------------------------------------+-----------+
|                                     |           |
+-------------------------------------+-----------+
| Push DataReady event by user code   | false     |
+-------------------------------------+-----------+

+---------------------------------------------+-------------------------------------+
| **HdbConfigurationManager Class States**    |                                     |
+=============================================+=====================================+
| **Name**                                    | **Description**                     |
+---------------------------------------------+-------------------------------------+
| ON                                          |                                     |
+---------------------------------------------+-------------------------------------+
| ALARM                                       | At least one archiver is in ALARM   |
+---------------------------------------------+-------------------------------------+
