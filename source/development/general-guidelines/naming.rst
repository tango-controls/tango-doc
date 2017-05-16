.. raw:: latex

    \clearpage

Tango object naming (device, attribute and property)
====================================================

Device name
-----------

A Tango device name is a three fields name. The field separator is the
**/** character. The first field is named **domain**, the second field
is named **family** and the last field is named **member**.A tango
device name looks like

domain/family/member

It is a hierarchical notation. The member specifies which element within
a family. The family specifies which kind of equipment within a domain.
The domain groups devices related to which part of the
accelerator/experiment they belongs to. At ESRF, some of the machine
control system domain name are SR for the storage ring, TL1 for the
transfer line 1 or SY for the synchrotron booster. For experiment, ID11
is the domain name for all devices belonging to the experiment behind
insertion device 11. Here are some examples of Tango device name used at
the ESRF :

-  **sr/d-ct/1** : The current transformer. The domain part is sr for
   storage ring. The family part is d-ct for diagnostic/current
   transformer and the member part is 1

-  **fe/v-pen/id11-1** : A Penning gauge. The domain part is fe for
   front-end. The family part is v-pen for vacuum/penning and the member
   name is id11-1 to specify that this is the first gauge on the
   front-end part after the insertion device 11

Full object name
----------------

The device name as described above is not enough to cover all Tango
usage like device server without database or device access for multi
control system. With the naming schema, we must also be able to name
attribute and property. Therefore, the full naming schema is

*[protocol://][host:port/]device\_name[/attribute][->property][#dbase=xx*]

The protocol, host, port, attribute, property and dbase fields are
optional. The meaning of these fields are :


`protocol`: Specifies which protocol is used (Tango or Taco). Tango is the default

`#dbase`: The supported value for xx is *yes* and *no*. This field is used to
specify that the device is a device served by a device server started
with or without database usage. The default value is *dbase=yes*

`host:port`: This field has different meaning according to the dbase value. If
*dbase=yes* (the default), the host is the host where the control system
database server is running and port is the database server port. It has
a higher priority than the value defined by the TANGO\_HOST environment
variable. If *dbase=no*, host is the host name where the device server
process serving the device is running and port is the device server
process port.

`attribute`: The attribute name

`property`: The property name

The host:port and dbase=xx fields are necessary only when creating the
DeviceProxy object used to remotely access the device. The -> characters
are used to specify a property name.

Some examples
~~~~~~~~~~~~~

Full device name examples
^^^^^^^^^^^^^^^^^^^^^^^^^

-  **gizmo:20000/sr/d-ct/1** : Device sr/d-ct/1 running in a specified
   control system with the database server running on a host called
   gizmo and using the port number 20000. The TANGO\_HOST environment
   variable will not be used.

-  **tango://freak:2345/id11/rv/1#dbase=no** : Device served by a device
   server started without database. The server is running on a host
   called freak and use port number 2345.
   //freak:2345/id11/rv/1#dbase=no is also possible for the same device.

-  **Taco://sy/ps-ki/1** : Taco device sy/ps-ki/1

Attribute name examples
^^^^^^^^^^^^^^^^^^^^^^^

-  **id11/mot/1/Position** : Attribute position for device id11/mot/1

-  **sr/d-ct/1/Lifetime** : Attribute lifetime for Tango device
   sr/d-ct/1

Attribute property name
^^^^^^^^^^^^^^^^^^^^^^^

-  **id11/rv/1/temp->label** : Property label for attribute temp for
   device id11/rv/1.

-  **sr/d-ct/1/Lifetime->unit** : The unit property for the Lifetime
   attribute of the sr/d-ct/1 device

Device property name
^^^^^^^^^^^^^^^^^^^^

-  **sr/d-ct/1->address** : the address property for device sr/d-ct/1

Class property name
^^^^^^^^^^^^^^^^^^^

-  **Starter->doc\_url** : The doc\_url property for a class called
   Starter

Device and attribute name alias
-------------------------------

Within Tango, each device or attribute can have an alias name defined in
the database. Every time a device or an attribute name is requested by
the API’s, it is possible to use the alias. The alias is simply an open
string stored in the database. The rule of the alias is to give device
or attribute name a name more natural from the physicist point of view.
Let’s imagine that for experiment, the sample position is described by
angles called teta and psi in physics book. It is more natural for
physicist when they move the motor related to sample position to use
*teta* and *psi* rather device name like *idxx/mot/1* or *idxx/mot/2*.
An attribute alias is a synonym for the four fields used to name an
attribute. For instance, the attribute *Current* of a power-supply
device called *sr/ps/dipole* could have an alias *DipoleCurrent*. This
alias can be used when creating an instance of a AttributeProxy class
instead of the full attribute name which is *sr/ps/dipole/Current*.
Device alias name are uniq within a Tango control system. Attribute
alias name are also uniq within a Tango control system.

Reserved words and characters, limitations
------------------------------------------

From the naming schema described above, the reserved characters are
**\:**, **\#**, **\/** and the reserved string is : **->**. On top of
that, the dbt\_update tool (tool to fulfill database from the content of
a file) reserved the **device** word

The device name, its domain, member and family fields and its alias are
stored in the Tango database. The default maximum size for these items
are :

.. csv-table::
   :header-rows: 1

   "Item", "max length"
   "device name", "255"
   "domain field", "85"
   "family field", "85"
   "member field", "85"
   "device alias name", "255"

The device name, the command name, the attribute name, the property
name, the device alias name and the device server name are **case insensitive**.


