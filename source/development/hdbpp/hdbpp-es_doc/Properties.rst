**HdbEventSubscriber Properties :**
**Class Properties**
**Name**
**Description**
**Type**
**Default Value**
SubscribeRetryPeriod
Subscribe event retrying period in seconds.
int
60
StatisticsTimeWindow
Statistics time window in seconds
int
60
CheckPeriodicTimeoutDelay
Delay in seconds before timeout when checking periodic events
int
5
PollingThreadPeriod
Polling thread period in seconds.
int
3
LibConfiguration
Configuration for the library
String[]
none
ContextsList
Possible contexts in the form label:description
String[]
ALWAYS:always stored
RUN:stored during run
SHUTDOWN:stored during shutdown
SERVICE:stored during maintenance activities
DefaultStrategy
Default strategy to be used when not specified in the single attribute
configuration
String
ALWAYS
**Device Properties**
**Name**
**Description**
**Type**
**Default Value**
SubscribeRetryPeriod
Subscribe event retrying period in seconds.
int
60
AttributeList
List of configured attributes.
String[]
none
StatisticsTimeWindow
Statistics time window in seconds
int
60
CheckPeriodicTimeoutDelay
Delay in seconds before timeout when checking periodic events
int
5
PollingThreadPeriod
Polling Thread period in seconds.
int
3
LibConfiguration
Configuration for the library
String[]
none
ContextsList
Possible contexts in the form label:description
String[]
ALWAYS:always stored
RUN:stored during run
SHUTDOWN:stored during shutdown
SERVICE:stored during maintenance activities
DefaultStrategy
Default strategy to be used when not specified in the single attribute
configuration
String
ALWAYS
