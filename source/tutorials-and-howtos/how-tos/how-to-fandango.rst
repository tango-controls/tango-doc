
.. How-To try

How to Fandango
===============

:audience:`developers`, :lang:`python`

by *Sergi Rubio*

fun4tango, functional programming for Tango
###########################################

.. warning:: Fandango package is a refactored version of the old PyTango_utils package, which is now deprecated

.. note::  Fandango is now on github

**Several recipes available at** github_


Description
***********

Fandango (previously called PyTango_utils) is a Python module created
to simplify the configuration of big control systems; implementing the
behavior of Jive (configuration) and/or Astor (deployment) tools in
methods that could be called from scripts using regexp and wildcards.

It has been later extended with methods commonly used in some of our
python API's (archiving, CCDB, alarms, vacca) or generic devices
(composers, simulators, facades).

Downloading
###########

Fandango module is now on github:

.. code-block:: console
   :linenos:

   $ git clone https://github.com/tango-controls/fandango


For Tango 9 you can still get sources from sourceforge:

.. code-block:: console
   :linenos:

   $ svn co https://tango-cs.svn.sourceforge.net/svnroot/tango-cs/share/fandango/trunk/fandango fandango


Features
########

Most of submodules provide some usage recipes, see github_:

This library provides submodules with utilities for PyTango device
servers and applications written in python:

#. functional: functional programming, data format conversions, caseless regular expressions,
#. tango: tango api helper methods, search/modify using regular expressions,
#. dynamic attributes/states/commands and online python code evaluation, see the github_,
#. server: Astor-like python API,
#. device: some templates for Tango device servers, TangoEval for fast "tango code" evaluation,
#. interface: device server inheritance,
#. db: MySQL access,
#. dicts,arrays: advanced containers, sorted/caseless list/dictionaries, .csv parsing,
#. log: logging,
#. objects: object templates, singletones, structs,
#. threads: serialized hardware access, multiprocessing,
#. linos: some linux tricks,
#. web: html parsing,
#. qt: some custom Qt classes, including worker-like threads.


Main Classes
############

* DynamicDS / DynamicAttributes,
* ServersDict,
* TangoEval,
* ThreadDict / SingletoneWorker,
* TangoInterfaces (FullTangoInheritance).

 

Where it us used
################

Several PyTango APIs and device servers use Fandango modules:

#. PyTangoArchiving_,
#. PyPLC_,
#. SplitterBoxDS,
#. PyStateComposer,
#. SimulatorDS_ / PySignalSimulator,
#. PANIC_ / PyAlarm,
#. CSVReader.
 

Requirements
############

#. It requires PyTango to access Tango,
#. It requires Taurus to use Tango Events,
#. Some submodules have its own dependencies (Qt,MySQL), so they are always imported within try, except clauses.


Recipes
#######

Get devices or attributes matching a regular expression
*******************************************************

**Using fandango.tango.get_matching_devices or get_matching_attributes:**

.. code-block:: python
    :linenos:

    from fandango import tango
    tango.get_matching_devices('sr[0-9]+/vc/(ipct|vgct)*')
        ['SR01/VC/IPCT-01A08-01',
         'SR01/VC/IPCT-01A08-02',
         'SR01/VC/IPCT-02A01-01',
         'SR01/VC/VGCT-01A08-01',
         'SR01/VC/VGCT-02A01-01',
         'SR02/VC/IPCT-02A02-01',
        ]

Search for device attribute/properties matching a regular expression
********************************************************************

.. code-block:: python
    :linenos:

    fandango.tango.get_matching_device_properties('s01/*/*ct*','serial*')
    {'S01/VC/IPCT-01': {'SerialLine': 'S01/VC/SERIAL-01'},
     'S01/VC/IPCT-02': {'SerialLine': 'S01/VC/SERIAL-02'},
     'S01/VC/VGCT-01': {'SerialLine': 'S01/VC/SERIAL-10'}}


Obtain all information from a device
************************************

.. sourcecode:: python

    In [59]: fandango.tango.get_device_info('sr/vc/gll')
    Out[59]: fandango.Struct({
            'name': sr/vc/gll,
            'level': 4,
            'started': 11th February 2013 at 13:07:37,
            'PID': 11024,
            'ior': ...,
            'server': PyStateComposer/SR_VC,
            'host': nanana01,
            'stopped': 11th February 2013 at 12:49:49,
            'exported': 1,        })


servers.ServersDict: the Astor-like python API
**********************************************

**fandango.ServersDict** is a dictionary of TServer classes indexed by
server/instance names and loaded using wildcard expressions.

Provides Jive/Astor functionality to a list of servers and allows to
**select/start/stop** them by host, class or devices It's purpose is to allow
generic start/stop of lists of Tango DeviceServers. This methods of selection provide new ways of search
apart of Jive-like selection.

.. code-block:: python
    :linenos:

    from fandango import Astor
    astor = Astor()
    astor.load_by_name('snap*')
    astor.keys()
        ['snapmanager/1', 'snaparchiver/1', 'snapextractor/1']

    server = astor['snaparchiver/1']
    server.get_device_list()
        ['dserver/snaparchiver/1', 'archiving/snaparchiver/1']

    astor.states()
    server.get_all_states()
        dserver/snaparchiver/1: ON
        archiving/snaparchiver/1: ON

    astor.get_device_host('archiving/snaparchiver/1')
        palantir01

    astor.stop_servers('snaparchiver/1')
    astor.stop_all_servers()
    astor.start_servers('snaparchiver/1','palantir01',wait=1000)
    astor.set_server_level('snaparchiver/1','palantir01',4)

    #Setting the polling of a device:
    server = astor['PySignalSimulator/bl11']
    for dev_name in server.get_device_list():
        dev = server.get_device(dev_name)
        attrs = dev.get_attribute_list()
        [dev.poll_attribute(attr,3000) for attr in attrs]


Start/Stop all device servers in a machine (like Astor -> Stop All)
*******************************************************************

**Stopping**

.. code-block:: python
    :linenos:

    import fandango
    fandango.Astor(hosts=['my.host']).stop_all_servers()


**and the other way round ...**

.. code-block:: python
    :linenos:

    astor = fandango.Astor(hosts=['my.host'])
    astor.start_all_servers()


**if you just want to see if things are effectively running or not:**

.. code-block:: python
    :linenos:

    astor.states()


Implement full (attibutes+properties) inheritance between PyTango classes
*************************************************************************

Just inheriting from a Device Server does not automatically updates
all properties and attributes from the parent. The fandango.interface
module enables that functionality using FullTangoInheritance function.

To use it you have to **add 3 lines in the "__main__"** part of your
python file (and at the end of the file, if you want to further continue
inheriting between classes):

.. code-block:: python
    :linenos:

    #Replace <YourDevice> and <ParentDevice> with your Device classes names

    if __name__ == '__main__':
        try:
            py = PyTango.Util(sys.argv)

            # Adding DeviceServer Inheritance, added here to be not overwritten by Pogo
            from fandango.interface import FullTangoInheritance
            from <ParentDevice> import <ParentDevice>,<ParentDevice>Class
            <YourDevice>,<YourDevice>Class = \
                FullTangoInheritance('<YourDevice>',<YourDevice>,<YourDevice>Class, \
                                     <ParentDevice>,<ParentDevice>Class,ForceDevImpl=True)

            py.add_TgClass(<YourDevice>Class,<YourDevice>,'<YourDevice>')
            U = PyTango.Util.instance()
            U.server_init()
            U.server_run()

        except PyTango.DevFailed,e:
            print '-------> Received a DevFailed exception:',e
        except Exception,e:
            print '-------> An unforeseen exception occured....',e

    # Adding DeviceServer Inheritance (to be visible by subclasses)
    from fandango.interface import FullTangoInheritance
    from <ParentDevice> import <ParentDevice>,<ParentDevice>Class
    <YourDevice>,<YourDevice>Class = FullTangoInheritance('<YourDevice>', <YourDevice>, <YourDevice>Class, <ParentDevice>, <ParentDevice>Class, ForceDevImpl=True)


dynamic.DynamicDS: template for Dynamic Attributes
**************************************************

DynamicAttributes_ are using DynamicDS template.


Use TangoEval to evaluate strings containing Tango Attributes
*************************************************************

TangoEval class provides PyAlarm-like evaluation of strings containing
attribute names (replacing them by its values). It is part of
**fandango.device** module.
The result of each evaluation is stored in te.result.

.. sourcecode:: python

    In [14]: from fandango import TangoEval
    In [15]: te = TangoEval('(s01/vc/gauge-01/pressure + s01/vc/gauge-01/pressure) / 2.')
    Out[15]: TangoEval: result = 7.2e-10



Use CSVArray to turn a .csv into a dictionary
*********************************************

.. code-block:: console
    :linenos:

    cat tmp/tree_test.csv
    A       B       2
            C       3


.. sourcecode:: python

    In [16]: csv = fandango.arrays.CSVArray('tmp/tree_test.csv')
    In [17]: csv.expandAll()
    In [18]: csv.getAsTree(lastbranch=1)
    Out[18]: {'A': {'B': ['2'], 'C': ['3']}}


Fast property update
********************

.. code-block:: python
    :linenos:

    import fandango.functional as fun
    servers = fandango.Astor('PyAlarm/*')
    8 : devs = [d for d in fun.chain(*[servers[s].get_device_list() for s,v in servers.states().items() if v is not None]) if not d.startswith('dserver')]
    for d in devs:
        prop = servers.proxies[d].get_property(['AlarmReceivers'])['AlarmReceivers']
        servers.proxies[d].put_property({'AlarmReceivers':[s.replace('%SRUBIO','%DFERNANDEZ') for s in prop]})
    for d in devs: servers.proxies[d].ReloadFromDB()


ReversibleDict
**************

.. sourcecode:: python

    In [133]: ch = fandango.dicts.ReversibleDict()

    In [134]: ch.update([(unichr(ord('a')+i),i,unichr(ord('A')+i)) for i in range(26)])

    In [135]: ch
    Out[135]: 
    (u'a', 0, u'A')
    (u'b', 1, u'B')
    (u'c', 2, u'C')
    (u'd', 3, u'D')
    ...

    In [136]: ch['a']
    Out[136]: (0, u'A')

    In [137]: ch['A']
    Out[137]: (0, u'a')

    In [138]: ch['a'].keys()
    Out[138]: set([0])

    In [139]: ch['A'].keys()

ThreadDict
**********

**from PyPLC**

.. code-block:: python
    :linenos:

    def initThreadDict(self):
        def read_method(args,comm=self.Regs,log=self.debug): #It takes a key with commas and splits it to have a list of arguments
            try:
                log('>'*20 + ' In ThreadDict.read_method(%s)' % args)
                args = [int(s) for s in args.split(',')[:2]]
                return comm(args,asynch=True)
            except PyTango.DevFailed,e:
                print 'Exception in ThreadDict.read_method!!!'
                print str(e).replace('\n','')[:100]
            except Exception,e:
                print '#'*80
                print 'Exception in ThreadDict.read_method!!!'
                print traceback.format_exc()
                print '#'*80
                return [] ## Arrays must not be readable if communication doesn't work!!!!

        self.threadDict = fandango.ThreadDict(
            read_method = read_method,
            trace=True)
        self.threadDict.set_timewait(max(0.1,self.ModbusTimeWait/1000.))

        self.info('Mapped Arrays are: %s' % self.MapDict)

        for var,maps in self.MapDict.items():
            regs = self.GetCommands4Map(maps)
            for reg in regs:
                vals = ','.join(str(r) for r in reg)
                self.debug('Adding %s(%s) as ThreadDict[%s]' % (var,reg,vals))
                self.threadDict.append(vals,[])#period=[]) #append(key,value='',period=3000)

        self.threadDict.start()
        self.info('out of PyPLC.initThreadDict()')

    Pa leeer .........

        for reg in regs:
            key = ','.join(str(r) for r in reg)
            val = self.threadDict[key]



Piped, iPiped, zPiped interfaces
********************************

Fandango will have now a new set of operators to use regular-or
operator **('|')** like a linux pipe between operators (inspired by Maxim
Krikun - Shell-like_ data processing ).**

.. code-block:: console
    :linenos:

    cat('filename') | grep('myname') | printlines

**Using fandango:**


.. code-block:: python
    :linenos:

    from fandango.functional import *

    v | iPiped(rd.get_attribute_values,start_date='2012-07-10',stop_date='2012-07-17') | iPiped(PyTangoArchiving.utils.decimate) | zPiped(time2str) | plist

    #equals to:

    [(time2str(v[0]),v[1]) for v in PyTangoArchiving.utils.decimate(rd.get_Attribute_values(v,start_date='2012-07-10',stop_date='2012-07-17'))]


**Available interfaces are:**

.. code-block:: python
    :linenos:

    class Piped:
        """This class gives a "Pipeable" interface to a python method:
            cat | Piped(method,args) | Piped(list)
            list(method(args,cat))
        """
        ...
            
    class iPiped:
        """ Used to pipe methods that already return iterators 
        e.g.: hdb.keys() | iPiped(filter,partial(fandango.inCl,'elotech')) | plist
        """
        ...
        
    class zPiped:
        """ 
        Returns a callable that applies elements of a list of tuples to a set of functions 
        e.g. [(1,2),(3,0)] | zPiped(str,bool) | plist => [('1',True),('3',False)]
        """
        ...


**Available operators are:**

.. code-block:: python
    :linenos:

    pgrep = lambda exp: iPiped(lambda input: (x for x in input if inCl(exp,x)))
    pmatch = lambda exp: iPiped(lambda input: (x for x in input if matchCl(exp,str(x))))
    pfilter = lambda meth=bool,*args: iPiped(filter,partial(meth,*args))
    ppass = Piped(lambda x:x)
    plist = iPiped(list)
    psorted = iPiped(sorted)
    pdict = iPiped(dict)
    ptuple = iPiped(tuple)
    pindex = lambda i: Piped(lambda x:x[i])
    pslice = lambda i,j: Piped(lambda x:x[i,j])
    penum = iPiped(lambda input: izip(count(),input) )
    pzip = iPiped(lambda i:izip(*i))
    ptext = iPiped(lambda input: '\n'.join(imap(str,input)))

.. definitions
  ------------
.. _github: https://github.com/tango-controls/fandango/tree/documentation/doc/recipes
.. _PyTangoArchiving: how-to-pytangoarchiving.html
.. _PyPLC: http://plone.tango-controls.org/Members/srubio/pyplc-device-server
.. _SimulatorDS: https://github.com/tango-controls/simulatords
.. _PANIC: https://github.com/tango-controls/PANIC
.. _DynamicAttributes: http://plone.tango-controls.org/howtos/dynamicattributes
.. _Shell-like: http://code.activestate.com/recipes/276960-shell-like-data-processing/?in=user-1085177