Memorized attribute
===================

It is possible to ask Tango to store in its database the last written
value for attribute of the SCALAR data format and obviously only for
READ\_WRITE or READ\_WITH\_WRITE attribute. This is fully automatic.
During device startup phase, for all device memorized attributes, the
value written in the database is fetched and applied. A write\_attribute
call can be generated to apply the memorized value to the attribute or
only the attribute set point can be initialised. The following piece of
code shows how the source code should be written to set an attribute as
memorized and to initialise only the attribute set point.

.. code:: cpp
  :number-lines:

   void DevTestClass::attribute_factory(vector<Tango::Attr *> &att_list)
    {
        ...
        att_list.push_back(new String_attrAttr());
        att_list.back()->set_memorized();
        att_list.back()->set_memorized_init(false);
        ...
    }

Line 4 : The attribute to be memorized is created and inserted in the
attribute vector.

Line 5 : The *set\_memorized()* method of the attribute base class is
called to define the attribute as memorized.

Line 6 : The set\_memorized\_init() method is called with the parameter
false to define that only the set point should be initialsied.