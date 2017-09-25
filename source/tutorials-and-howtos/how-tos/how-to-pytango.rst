
.. How-To try

How to PyTango
==============

My list of short recipes for common tasks ... please check official_ documentation first!




Before anything else
--------------------

.. code-block:: python
    :linenos:

    import PyTango

Installation notes 
-------------------

The new PyTango, is now available to download from the Tango download_ page or PiPy_


If you have already installed PyTango with *easy_install* you can
simply update your PyTango version by doing:

.. code-block:: console
   :linenos:

   $ easy_install -U PyTango

.. code-block:: console
   :linenos:

   $ sudo apt-get update python-pytango

The documentation is available at official_ readthedocs website.

If you encounter problems installing or running this release, please
report them back to the tango mailing list.

You can check out this version:

.. code-block:: console
   :linenos:

   $ svn co https://tango-cs.svn.sourceforge.net/svnroot/tango-cs/PyTango/tags/Release_7_1_3 PyTango-7.1.3`

You can check out the latest version:

.. code-block:: console
   :linenos:

   $ svn co https://tango-cs.svn.sourceforge.net/svnroot/tango-cs/PyTango/trunk PyTango-latest`

Nice PyTango dancing



Using the DeviceProxy object
----------------------------

**Getting the polling buffer values**

Only for polled attributes we can get the last N read values. the
polling buffer depth is managed by the admin device.

.. code-block:: python
   :linenos:

   dp = PyTango.DeviceProxy('some/tango/device')
   dp.attribute_history('cpustatus',10)

Get/Set polled attributes
*************************

.. code-block:: python
    :linenos:

    def get_polled_attributes(dev_name):
        dp = PyTango.DeviceProxy(dev_name)
        attrs = dp.get_attribute_list()
        periods = [(a,dp.get_attribute_poll_period(a)) for a in attrs]
        return dict((a,p) for a,p in periods if p)

    [plc4.poll_attribute(a,5000) for k,v in periods if v]

Modify the polling of attributes
********************************

.. code-block:: python
   :linenos:

    import re,PyTango
    period = 10000
    devs = PyTango.Database().get_device_exported('some/tango/devices*')
    for dev in devs:
        dp = PyTango.DeviceProxy(dev)
        attrs = sorted([a for a in dp.get_attribute_list() if re.match('(Output|Temperature)_[0-9]$',a)])
        [dp.poll_attribute(a,period) for a in attrs]
        print('\n'.join(dp.polling_status()))


Events
******

Creating an event callback

.. code-block:: python
   :linenos:

   # The callback must be a callable or an object with a push_event(self,event) method


Configuring an event

.. code-block:: python
    :linenos:

    #From the client side
    #subscribe_event(attr_name, event_type, cb_or_queuesize, filters=[], stateless=False, extract_as=PyTango._PyTango.ExtractAs.Numpy)
    event_id = PyTango.DeviceProxy.subscribe_event(attributeName,PyTango.EventType.CHANGE,callback_function,[],True)

    #From inside the device server
    self.set_change_event('State',True,True) 




Device Server Internal Objects
------------------------------

Forcing in which host the device is exported
********************************************

This environment variable must be set before launching the device:

.. code-block:: console
   :linenos:

   $ export OMNIORB_USEHOSTNAME=10.0.0.10


Creating a Device Server from ipython
*************************************

Having defined your device in MyDS.py:

.. code-block:: python
   :linenos:

   from MyDS import *
   py = PyTango.PyUtil(['MyDS.py','InstanceName'])
   py.add_TgClass(MyDSClass,MyDS,'MyDS')
   U = PyTango.Util.instance()
   U.server_init()
   U.server_run()


Get the device server admin
***************************

NOT TESTED

.. code-block:: python
   :linenos:

    U = PyTango.Util.instance()
    U.get_dserver_device()


Modify internal polling
***********************

.. note::  It doesn't work at *init_device()*; must be done later on in a *hook* method.

.. code-block:: python
   :linenos:

    U = PyTango.Util.instance()
    admin = U.get_dserver_device()
    dir(admin)
        [
            StartPolling
            StopPolling
            AddObjPolling
            RemObjPolling
            UpdObjPollingPeriod
            DevPollStatus
            PolledDevice
        ]

    polled_attrs = {}
    for st in admin.DevPollStatus(name):
        lines = st.split('\n')
        try: polled_attrs[lines[0].split()[-1]]=lines[1].split()[-1]
        except: pass

    type_ = 'command' or 'attribute'
    for aname in args:
    if aname in polled_attrs:
        admin.UpdObjPollingPeriod([[200],[name,type_,aname]])
    else:
        admin.AddObjPolling([[3000],[name,type_,aname]])

Get all polling attributes
**************************

The polling of the attributes is recorded in the **property_device**
table of the tango database in the format of a list like
*[ATTR1,PERIOD1,ATTR2,PERIOD2,...]*

The list of polled attributes can be accessed using this method of admin
device:

.. code-block:: python
    :linenos:

    dp = PyTango.DeviceProxy('dserver/myServerClass/id22')
    polled_attrs = [a.split('\n')[0].split(' ')[-1] for a in dp.DevPollStatus('domain/family/member-01')]


Get the device class object from the device itself
**************************************************

.. code-block:: python
   :linenos:

   self.get_device_class()


Get the devices inside a Device Server
**************************************

.. code-block:: python
   :linenos:

   def get_devs_in_server(self,MyClass=None):
        """
        Method for getting a dictionary with all the devices running in this server
        """
        MyClass = MyClass or type(self) or DynamicDS
        if not hasattr(MyClass,'_devs_in_server'):
            MyClass._devs_in_server = {} #This dict will keep an access to the class objects instantiated in this Tango server
        if not MyClass._devs_in_server:
            U = PyTango.Util.instance()
            for klass in U.get_class_list():
                for dev in U.get_device_list_by_class(klass.get_name()):
                    if isinstance(dev,DynamicDS):
                        MyClass._devs_in_server[dev.get_name()]=dev
        return MyClass._devs_in_server


Identify each attribute inside read_attr_hardware()
***************************************************

.. code-block:: python
    :linenos:

    def read_attr_hardware(self,data):
        self.debug("In DynDS::read_attr_hardware()")
        try:
            attrs = self.get_device_attr()
            for d in data:
                a_name = attrs.get_attr_by_ind(d).get_name()
                if a_name in self.dyn_attrs:
                    self.lock.acquire() #This lock will be released at the end of read_dyn_attr
                    self.myClass.DynDev=self #VITAL: It tells the admin class which device attributes are going to be read
                    self.lock_acquired += 1
            self.debug('DynamicDS::read_attr_hardware(): lock acquired %d times'%self.lock_acquired)
        except Exception,e:
            self.last_state_exception = 'Exception in read_attr_hardware: %s'%str(e)
            self.error('Exception in read_attr_hardware: %s'%str(e))


Device server logging (using Tango logs)
****************************************

.. code-block:: console
   :linenos:

   $ Device_4Impl.
   $
   $ debug_stream ( str )
   $ info_stream ( str )
   $ warning_stream ( str )
   $ error_stream ( str )
   $ fatal_stream ( str )

Or use fandango.Logger object instead

Adding dynamic attributes to a device
*************************************

.. code-block:: python
   :linenos:

    self.add_attribute(
        PyTango.Attr( #or PyTango.SpectrumAttr
            new_attr_name,PyTango.DevArg.DevState,PyTango.AttrWriteType.READ, #or READ_WRITE
            #max_size or dyntype.dimx #If Spectrum
            ),
        self.read_new_attribute, #(attr)
        None, #self.write_new_attribute #(attr)
        self.is_new_attribute_allowed, #(request_type)
        )


Using Database Object
---------------------

.. code-block:: python
   :linenos:

    import PyTango
    db = PyTango.Database()


Register a new device server
****************************

.. code-block:: python
   :linenos:

    dev = 'SR%02d/VC/ALL'%sector
    klass = 'PyStateComposer'
    server = klass+'/'+dev.replace('/','_')

    di = PyTango.DbDevInfo()
    di.name,di._class,di.server = device,klass,server
    db.add_device(di)


Remove "empty" servers from database
************************************

.. code-block:: python
   :linenos:

    tango = PyTango.Database()
    [tango.delete_server(s) 
        for s in tango.get_server_list()
        if all(d.lower().startswith('dserver') for d in tango.get_device_class_list(s))
    ]


Force unexport of a failing server
**********************************

You can check using db object if a device is still exported after killed

.. code-block:: console
   :linenos:

   $ bool(db.import_device('dserver/HdbArchiver/11').exported)
   $ True


You can unexport this device or server with the following call:

.. code-block:: python
   :linenos:

    db.unexport_server('HdbArchiver/11')


It would normally allow you to restart the server again.

Get all servers of a given class
********************************

.. code-block:: python
   :linenos:

    class_name = 'Modbus'
    list_of_names = ['/'.join((class_name,name)) for name in db.get_instance_name_list(class_name)]


Differences between DB methods:

.. code-block:: python
    :linenos:

    get_instance_name_list(exec_name): return names of **instances**
    get_server_list(): returns list of all **executable/instance**
    get_server_name_list(): return names of all **executables**

Get all devices of a server or a given class
********************************************

The command is:

.. code-block:: python
   :linenos:

    db.get_device_class_list(server_name): return
    ['device/name/family','device_class']*num_of_devs_in_server

The list returned includes the admin server
(*dserver/exec_name/instance*) that must be pruned from the result:

.. code-block:: python
   :linenos:

    list_of_devs = [dev for dev in db.get_device_class_list(server_name) if '/' in dev and not dev.startswith('dserver')]


Get all devices of a given class from the database
**************************************************

.. code-block:: python
   :linenos:

    import operator
    list_of_devs = reduce(operator.add,(list(dev for dev in db.get_device_class_list(n) \
        if '/' in dev and not dev.startswith('dserver')) for n in \
        ('/'.join((class_name,instance)) for instance in db.get_instance_name_list(class_name)) \
        ))



Get property values for a list of devices
*****************************************

.. code-block:: python
   :linenos:

    db.get_device_property_list(device_name,'*') : returns list of
    available properties
    db.get_device_property(device_name,[property_name]) : return
    {property_name : value}

.. code-block:: python
   :linenos:

    prop_names = db.get_device_property_list(device_name)
        ['property1','property2']
    dev_props = db.get_device_property(device_name,prop_names)
        {'property1':'first_value' , 'property2':'second_value' }


Get the history (last ten values) of a property
***********************************************

.. code-block:: python
   :linenos:

    [ph.get_value().value_string for ph in tango.get_device_property_history('some/alarms/device','AlarmsList')]

    [['MyAlarm:a/gauge/controller/Pressure>1e-05', 'TempAlarm:a/nice/device/Temperature_Max > 130'],


Get the server for a given device
*********************************

.. code-block:: console
   :linenos:

    >>> print db.get_server_list('Databaseds/*')
    ['DataBaseds/2']
    >>> print db.get_device_name('DataBaseds/2','DataBase')
    ['sys/database/2']
    >>> db_dev=PyTango.DeviceProxy('sys/database/2')
    >>> print db_dev.command_inout('DbImportDevice','et/wintest/01')
    ([0, 2052], ['et/wintest/01', 'IOR:0100000017000xxxxxx', '4', 
    'WinTest/manu', 'PCTAUREL.esrf.fr', 'WinTest'])


Get the Info of a not running device (exported, host, server)
*************************************************************

.. code-block:: python
   :linenos:

    def get_device_info(dev):
        vals = PyTango.DeviceProxy('sys/database/2').DbGetDeviceInfo(dev)
        di = dict((k,v) for k,v in zip(('name','ior','level','server','host','started','stopped'),vals[1]))
        di['exported'],di['PID'] = vals[0]
        return di


Set property values for a list of devices
*****************************************

**Attention** , Tango property values are always inserted as lists!
{property_name : **[** property_value **]**}

.. code-block:: python
   :linenos:

    prop_name,prop_value = 'Prop1','Value1'
    [db.put_device_property(dev,{prop_name:[prop_value]}) for dev in list_of_devs]


Get Starter Level configuration for a list of servers
*****************************************************

.. code-block:: python
   :linenos:

    [(si.name,si.mode,si.level) for si in [db.get_server_info(s) for s in list_of_servers]]


Set Memorized Value for an Attribute
************************************

.. code-block:: python
   :linenos:

    db.get_device_attribute_property('tcoutinho/serial/01/Baudrate',['__value'])
    db.put_device_attribute_property('tcoutinho/serial/01/Baudrate',{'__value':VALUE})




Useful constants and enums
--------------------------

.. code-block:: console
   :linenos:

    In [31]:PyTango.ArgType.values
    Out[31]:
    {0: PyTango._PyTango.ArgType.DevVoid,
     1: PyTango._PyTango.ArgType.DevBoolean,
     2: PyTango._PyTango.ArgType.DevShort,
     3: PyTango._PyTango.ArgType.DevLong,
     4: PyTango._PyTango.ArgType.DevFloat,
     5: PyTango._PyTango.ArgType.DevDouble,
     6: PyTango._PyTango.ArgType.DevUShort,
     7: PyTango._PyTango.ArgType.DevULong,
     8: PyTango._PyTango.ArgType.DevString,
     9: PyTango._PyTango.ArgType.DevVarCharArray,
     10: PyTango._PyTango.ArgType.DevVarShortArray,
     11: PyTango._PyTango.ArgType.DevVarLongArray,
     12: PyTango._PyTango.ArgType.DevVarFloatArray,
     13: PyTango._PyTango.ArgType.DevVarDoubleArray,
     14: PyTango._PyTango.ArgType.DevVarUShortArray,
     15: PyTango._PyTango.ArgType.DevVarULongArray,
     16: PyTango._PyTango.ArgType.DevVarStringArray,
     17: PyTango._PyTango.ArgType.DevVarLongStringArray,
     18: PyTango._PyTango.ArgType.DevVarDoubleStringArray,
     19: PyTango._PyTango.ArgType.DevState,
     20: PyTango._PyTango.ArgType.ConstDevString,
     21: PyTango._PyTango.ArgType.DevVarBooleanArray,
     22: PyTango._PyTango.ArgType.DevUChar,
     23: PyTango._PyTango.ArgType.DevLong64,
     24: PyTango._PyTango.ArgType.DevULong64,
     25: PyTango._PyTango.ArgType.DevVarLong64Array,
     26: PyTango._PyTango.ArgType.DevVarULong64Array}

    In [30]:PyTango.AttrWriteType.values
    Out[30]:
    {0: PyTango._PyTango.AttrWriteType.READ,
     1: PyTango._PyTango.AttrWriteType.READ_WITH_WRITE,
     2: PyTango._PyTango.AttrWriteType.WRITE,
     3: PyTango._PyTango.AttrWriteType.READ_WRITE}

    In [29]:PyTango.AttrWriteType.values[3] is PyTango.READ_WRITE
    Out[29]:True




Using Tango Groups
------------------

This example uses PyTangoGroup to read the status of all devices in a Device Server

.. code-block:: python
   :linenos:

    import PyTango

    server_name = 'VacuumController/AssemblyArea'
    group = PyTango.Group(server_name)
    devs = [d for d in PyTango.Database().get_device_class_list(server_name) if '/' in d and 'dserver' not in d]
    for d in devs:
        group.add(d)

    answers = group.command_inout('Status',[])
    for reply in answers:
        print 'Device %s Status is:' % reply.dev_name()
        print reply.get_data()




About Exceptions
----------------

Be aware that I'm not sure about all of this:

.. code-block:: python
   :linenos:

    try:
        #reason,desc(ription),origin
        PyTango.Except.throw_exception("TimeWAITBetweenRetries",
                     "Last communication failed at %s, waiting %s millis"%(time.ctime(self.last_failed),self.ErrorTimeWait),
                     inspect.currentframe().f_code.co_name)
    except PyTango.DevFailed,e:
        if e.args[0]['reason']!='API_AsynReplyNotArrived':
            PyTango.Except.re_throw_exception(e,"DevFailed Exception",str(e),inspect.currentframe().f_code.co_name)




Passing Arguments to Device command_inout
-----------------------------------------

When type of Arguments is *special* like **DevVarLongStringArray** the
introduction of arguments is something like:

.. code-block:: python
   :linenos:

    api.manager.command_inout('UpdateSnapComment',[[40],['provant,provant...']])


Using asynchronous commands
---------------------------

.. code-block:: python
   :linenos:

    cid = self.modbus.command_inout_asynch(command,arr_argin)
    while True:
        self.debug('Waiting for asynchronous answer ...')
        threading.Event().wait(0.1)
        #time.sleep(0.1)
        try:
            result = self.modbus.command_inout_reply(cid)
            self.debug('Received: %s' % result)
            break
        except PyTango.DevFailed,e:
            self.debug('Received DevFailed: %s' %e)
            if e.args[0]['reason'] != 'API_AsynReplyNotArrived':
               raise Exception,'Weird exception received!: %s' % e


Setting Attribute Config
------------------------

.. code-block:: python
   :linenos:

    for server in astor.values():
        for dev in server.get_device_list():
            dp = server.get_proxy(dev)
            attrs = dp.get_attribute_list()
            if dev.rsplit('/')[-1].lower() not in [a.lower() for a in attrs]: continue
            conf = dp.get_attribute_config(dev.rsplit('/')[-1])
            conf.format = "%1.1e"
            conf.unit = "mbar"
            conf.label = "%s-Pressure"%dev
            print 'setting config for %s/%s' % (dev,conf.name)
            dp.set_attribute_config(conf)

Porting device servers to PyTango
---------------------------------

The changes to easily port PyTango_ devices are:

-   C++ : Replace Device_3Impl with Device_4Impl
-   Python : ﻿Replace Device_3Impl with Device_4Impl, PyDeviceClass with
    DeviceClass and PyUtil with Util.

If you are quite lazy you can add this at the beginning of your
*$Class.py* file (and be still parseable by Pogo):

.. code-block:: python
   :linenos:

    import PyTango
    if 'PyUtil' not in dir(PyTango): 
        PyTango.Device_3Impl = PyTango.Device_4Impl
        PyTango.PyDeviceClass = PyTango.DeviceClass
        PyTango.PyUtil = PyTango.Util


Simplify changes by adding this line
************************************

.. code-block:: python
   :linenos:

    if 'PyUtil' not in dir(PyTango):
    PyTango.PyDeviceClass = PyTango.DeviceClass
    PyTango.PyUtil = PyTango.Util


.. definitions
  ------------
.. _official: http://pytango.readthedocs.io/en/latest
.. _download: http://www.tango-controls.org/
.. _PiPy: http://pypi.python.org/pypi/PyTango
.. _PyTango: https://intranet.cells.es/Members/srubio/howto/HowToPyTango
