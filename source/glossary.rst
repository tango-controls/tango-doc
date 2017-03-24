.. This is file to keep glossary
.. _glossary:

Glossary
========

.. glossary::

    Tango Controls
        The Tango Controls is object oriented, distributed control system framework which defines communication protocol,
        and API as well as provides set of tools and libraries to build a control systems a specially SCADA.

    device server
    device servers
        Device Server is a program (executable) which is able to create :term:`devices` of certain classes. A device
        server may implement one or multiple classes and instantiate one or many devices. A running device server
        is called the :term:`device server instance`.

    instance
    device server instance
        A running device server is called a device server instance. So, it is a process. Every device server instance
        has an unique name in Tango Controls by which it can be referenced. The name is built as
        *{DeviceServerName}*/*{instanceName}*. For each running device server the system creates a special device
        of `DServer` :term:`class`: *dserver/{DeviceServerName}/{instanceName}*. This device provides management
        facility for the device server instance (see `DServer class device commands`_)

    class
    device class
    device classes
        Device Class is an abstraction of device interface. It defines :term:`attributes`, :term:`pipes`,
        :term:`commands` and :term:`properties` which a device of the class provides to users and components of
        a Tango system. The device class ofter relates to kind of equipment it allow to interface like a `SerialLine`
        class defines interface to communicate through serial line equipment.

    device
    devices
        Device is a key concept of Tango Controls. It is an object providing access to its :term:`attributes`,
        :term:`pipes` and :term:`commands`. The list of attributes, pipes and commands available for certain device is
        defined by its :term:`device class`. The device may be related to a hardware device it interface to or it may
        be a kid of logical device providing some functionality not directly related to hardware.

    attribute
    attributes
        An attribute represents a process value(s) in the system. It may have different format or dimensions like
        scalar(0D), spectrum(1D) or image(2D). The attribute allows to read and/or write these values depends of
        defined access. The value may have different data type. In addition to value the attribute provides some
        metadata like a :term:`attribute quality`, timestamp, configuration properties. Please refer to the manual.
        A list of attributes available for a certain device is defined by its :term:`class`.

    dynamic attribute
        A :term:`device` may create attributes which configration is determined during device initialization or even
        runtime. These kind of attributes are called *dynamic*.

    command
    commands
        A command is an operation a user may invoke on a device (ex. `SwitchOn`, `SwitchOff`). It also relates
        to the method in OOP (Object-Oriented Programming). In fact, Tango Controls allows a command to get input
        argument (argin) and to return a value (argout). List of available commands for a certain device is defined
        by its :term:`device class`.

    pipe
    pipes
        A pipe allows to read and/or write a structured data from and/or to a :term:`device`. The data may be built
        out of several basic Tango datatypes. The structure of data is defined by a :term:`device class` and is not
        fixed. It may be changed runtime by the :term:`device` itself or modified upon request from client according to
        `set_pipe_config` operation provided by pipe. List of pipes available for a :term:`device` is defined by its
        :term:`device class`.

    state
    states
    device state
        A :term:`device` may be in a certain state determined on runtime. State of a :term:`device` may reflect state of
        an equipment it interfaces to or be determined in other way. The behaviour is defined by the
        :term:`device class` which implements :term:`state machine`. The state may define attributes', commands` and
        pipes' operations available at the moment. Tango Controls limits kinde of states the device may be in

    state machine
       A state machine for a :term:`device class` define operations (commands, attributes' and pipes' access) available
       at different :term:`states` of a :term:`device`.

    Tango Host
        Each Tango Controls system/deployment has to have at least one running DataBaseds :term:`device server`.
        The machine on which DataBaseds :term:`device server` is running has a role of so called :term:`Tango Host`.
        *DataBaseds* is a device server providing configuration information to all other components of the system as
        well as a runtime catalog of the components/devices. It allows (among others) client applications to find
        devices in distributed environment.

    Tango Database
        A database providing configuration and some runtime information about Tango Controls components in so called
        Tango System instance or deployment. It is served by *Databaseds* device serve and
        constitutes :term:`Tango Host`.

