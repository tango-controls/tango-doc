
.. How-To try

How to extract read and set values from a scalar attribute
==========================================================


The following example will show how you can extract the read and set values from a scalar attribute.
In the example, the attribute is a *Tango::DevDouble*.

.. code-block:: python
    :linenos:

    Tango::DevVarDoubleArray * attr_val;
    Tango::DevDouble read_value, set_value;
    try {
        Tango::DeviceAttribute dev_attr =  tg_device_proxy->read_attribute("attr_name");
        dev_attr >> attr_val;
        read_value = (*attr_val)[0];
        set_value = (*attr_val)[1];
        delete attr_val;
    }
    catch(Tango::DevFailed &e){
        Tango::Except::print_exception(e);
        throw;
    }


.. note::
   The operator ** >>** will allocate the memory for the
   **Tango::DevVarDoubleArray** but the programmer should free this memory when
   the work is done with this variable.
