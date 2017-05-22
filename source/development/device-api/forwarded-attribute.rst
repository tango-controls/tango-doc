Forwarded attribute
===================

Definition
----------

Let’s take an example to explain what is a forwarded attribute. We
assume we have to write a Tango class for a ski lift in a ski resort
somewhere in the Alps. Obviously, the ski lift has a motor for which we
already have a Tango class. This motor Tango class has one attribute
*speed*. But for the ski lift, the motor speed is not the only thing
which has to be controlled. For instance, you also want to give access
to the wind sensor data installed on the top of the ski lift. Therefore,
you write a ski-lift Tango class representing the whole ski-lift system.
This ski-lift class will have at least two attributes which are:

#. The wind speed at the top of the ski-lift

#. The motor speed

The ski-lift Tango class motor speed attribute is nothing more than the
motor Tango class speed attribute. All the ski-lift class has to do for
this attribute is to forward the request (read/write) to the speed
attribute of the motor Tango class. The speed attribute of the ski-lift
Tango class is a **forwarded attribute** while the speed attribute of
the motor Tango class is its **root attribute**.

A forwarded attribute get its configuration from its root attribute and
it forwards to its root attribute

-  Its read / write / write\_read requests

-  Its configuration change

-  Its event subscription

-  Its locking behavior

As stated above, a forwarded attribute has the same configuration than
its root attribute except its *name* and *label* which stays local. All
other attribute configuration parameters are forwarded to the root
attribute. If a root attribute configuration parameter is changed, the
forwarded attribute is informed (via event) and its local configuration
is also modified.

The association between the forwarded attribute and its root attribute
is done using a property named

\_\_root\_att

belonging to the forwarded attribute. This property value is simply the
name of the root attribute. Muti-control system is supported and this
\_\_root\_att attribute property value can be something like
*tango://my\_tango\_host:10000/my/favorite/dev/the\_root\_attribute*.
The name of the root attribute is included in attribute configuration.

It is forbidden to poll a forwarded attribute and one exception is
thrown if such a case happens. Polling has to be done on the root
attribute. Nevertheless, if the root attribute is polled, a request to
read the forwarded attribute with the DeviceProxy object source
parameter set to CACHE\_DEVICE or CACHE will get its data from the root
attribute polling buffer.

If you subscribe to event(s) on a forwarded attribute, the subscription
is forwarded to the root attribute. When the event is received by the
forwarded attribute, the attribute name in the event data is modified to
reflect the forwarded attribute name and the event is pushed to the
original client(s).

When a device with forwarded attribute is locked, the device to which
the root attribute belongs is also locked.

Coding
------

As explained in the chapter Writing a Tango device server, each Tango
class attribute is implemented via a C++ class which has to inherit from
either *Attr*, *SpectrumAttr* or *ImageAttr* according to the attribute
data format. For forwarded attribute, the related class has to inherit
from the **FwdAttr** class whatever its data format is. For classical
attribute, the programmer can define in the Tango class code default
value for the attribute properties using one instance of the
*UserDefaultAttrProp* class. For forwarded attribute, the programmer has
to create one instance of the **UserDefaultFwdAttrProp** class but only
the attribute label can be defined. One example of how to program a
forwarded attribute is given below

.. code:: cpp
  :number-lines:

    class MyFwdAttr: public Tango::FwdAttr
    {
    public:
        MyFwdAttr(const string &_n):FwdAttr(_n) {};
        ~MyFwdAttr() {};
    };

    void DevTestClass::attribute_factory(vector<Tango::Attr *> &att_list)
    {
       ...
       MyFwdAttr *att1 = new MyFwdAttr("fwd_att_name");
       Tango::UserDefaultFwdAttrProp att1_prop;
       att1_prop.set_label("Gasp a fwd attribute");
       att1->set_default_properties(att1_prop);
       att_list.push_back(att1);
       ...
    }

Line 1 : The forwarded attribute class inherits from FwdAttr class.

Line 4-5 : Only constructor and destructor methods are required

Line 11 : The attribute object is created

Line 12-14 : A default value for the forwarded attribute label is
defined.

Line 15: The forwarded attribute is added to the list of attribute

In case of error in the forwarded attribute configuration (for instance
missing \_\_root\_att property), the attribute is not created by the
Tango kernel and is therefore not visible for the external world. The
state of the device to which the forwarded attribute belongs to is set
to ALARM (if not already FAULT) and a detailed error report is available
in the device status. In case a device with forwarded attribute(s) is
started before the device(s) with the root attribute(s), the same
principle is used: forwarded attribute(s) are not created, device state
is set to ALARM and device status is reporting the error. When the
device(s) with the root attribute will start, the forwarded attributes
will automatically be created.