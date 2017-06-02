.. This is file to keep glossary
.. _glossary:

Glossary
========

.. glossary::

    Tango Controls
        Tango Controls is an object oriented, distributed control system framework which defines communication protocol
        and API as well as provides a set of tools and libraries to build software for control systems,
        especially :term:`SCADA`.

    Core
    Tango Core
        Tango Core is a set of main tools, libraries and specifications of the Tango Controls framework. It consists of libraries
        and API definitions for C++, Java and Python as well as tools to manage the system: :ref:`Astor <astor_manual>`,
        :ref:`Jive <jive_manual>`, etc.

    SCADA
        It is an abbreviation standing for Supervisory Control and Data Acquisition.

    device server
        A Device Server is a program (executable) which is able to create :term:`devices <device>` of certain classes. A Device
        Server may implement one or multiple classes and instantiate one or more devices. A running device server
        is called a :term:`Device Server instance`.

    instance
    device server instance
        A running device server is called a device server instance. So it means, it is a process. Every device server instance
        has an unique name in Tango Controls by which it can be referenced. The name is built as
        *{DeviceServerName}*/*{instanceName}*. For each running device server the system creates a special device
        of `DServer` :term:`class`: *dserver/{DeviceServerName}/{instanceName}*. This device provides a management
        facility for the corresponding device server instance
        (see :ref:`DServer class device commands <dserver_class_device_commands>`).

    class
    device class
        A Device Class is an abstraction of a device's interface. It defines :term:`attributes <attribute>`, :term:`pipes <pipe>`,
        :term:`commands <command>` and :term:`properties <property>` which a device of the class provides to users and to other components of
        a Tango system. A device class ofter relates to a specific kind of equipment it allows to interface with like a `SerialLine`
        class defines interface to communicate with serial line equipment.

    device
        A device is a key concept of Tango Controls. It is an object providing access to its :term:`attributes <attribute>`,
        :term:`pipes <pipe>` and :term:`commands <command>`. The list of attributes, pipes and commands available for a certain device is
        defined by its :term:`device class`. The device may be related to a hardware device it interfaces with or it may
        be a kind of a logical device providing some functionalities not directly related to hardware.

    attribute
        An attribute represents a process value (or values) in the system. It may have different formats or dimensions like
        scalar(0D), spectrum(1D) or image(2D). The attribute allows to read and/or write these values depending on
        programmer-defined access. The values may have different data types. In addition, an attribute provides some
        metadata like :term:`attribute quality`, timestamp or configuration properties. For a complete list please refer to the manual.
        A list of attributes available for a certain device is defined by its :term:`class`.

    dynamic attribute
        A :term:`device` may create attributes which configration is determined during device initialization or even at
        runtime. This kind of attributes is called *dynamic*.

    command
        A command is an operation a user may invoke on a device (eg. `SwitchOn`, `SwitchOff`). It also relates
        to a specific method in OOP (Object-Oriented Programming). Tango Controls allows a command to get input
        argument (argin) and to return a value (argout). List of available commands for a certain device is defined
        by its :term:`device class`.

    pipe
        A pipe allows to read and/or write a structured data from and/or to a :term:`device`. The data may be built
        out of several basic Tango datatypes. The structure of data is defined by a :term:`device class` and is not
        fixed. It may be changed at runtime by the :term:`device` itself or modified upon request from a client according to
        `set_pipe_config` operation provided by pipe. List of pipes available for a :term:`device` is defined by its
        :term:`device class`.

    state
    device state
        A :term:`device` may be in a certain state determined at runtime. State of a :term:`device` may reflect state of
        a piece of equipment it interfaces with or be determined in other way. The behaviour is defined by the
        :term:`device class` which implements a :term:`state machine`. The state may define attributes', commands' and
        pipes' operations available at the moment. Tango Controls limits a set of states the device may be in to 11:
        ON, OFF, RUNNING, OPEN, CLOSE, INSERT, EXTRACT, INIT, ALARM, FAULT and UNKNOWN.

    state machine
       A state machine for a :term:`device class` defines operations (commands', attributes' and pipes' access) available
       in different :term:`states <state>` of a :term:`device`.

    Tango Host
        Each Tango Controls system/deployment has to have at least one running DataBaseds :term:`device server`.
        The machine on which DataBaseds :term:`device server` is running has a role of a so called :term:`Tango Host`.
        *DataBaseds* is a device server providing configuration information to all other components of the system as
        well as a runtime catalog of the components/devices. It allows (among other things) client applications to find
        devices in distributed environment.

    Tango Database
        A database providing configuration and some runtime information about Tango Controls components in so called
        Tango System instance or deployment. It is used by *Databaseds* device server and constitutes :term:`Tango Host`.

