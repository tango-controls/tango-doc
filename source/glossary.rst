.. This is file to keep glossary

Glossary
========

.. glossary::

    device server
    device servers
        Device Server is a program (executable) which is able to create :term:'device' of certain classes. A device
        server may implement one or multiple classes.

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
        be a kid of logical device providing some functionalities not directly related to hardware.

    attribute
    attributes
        An attribute represents a process value in the system. It may have different format or dimensions like
        scalar(0D), spectrum(1D) or image(2D). The attribute allows to read and/or write these values depends of
        defined access type. The value may have different data type. Please refer to the manual.

    command
    commands
        A command is an operation a user may invoke on a device.

    pipe
    pipes
        A pipe is...

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

