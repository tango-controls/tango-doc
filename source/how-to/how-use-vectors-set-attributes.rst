
.. How-To try

How to use vectors to set attributes
====================================

This page contains examples on how to use C++ vectors to set attribute
values on the servers side.

.. warning::

   Tango is optimized not to copy data. For this reason all the attribute
   set_value() methods only take pointers as input. If you are going to
   use C++ vectors, you should be aware of the fact that you are going to
   copy the data! This might slow down execution time when working with
   large amount of data.

Examples for a vector of short and a vector of string:

.. code-block:: cpp
    :linenos:

    void MyClass::read_Spectrum(Tango::Attribute &attr)
    {
        DEBUG_STREAM << "MyClass::read_Spectrum() entering... "<< endl;

        vector<Tango::DevShort> val;
        val.push_back(1);
        val.push_back(2);
        val.push_back(3);

        // data copy !!
        Tango::DevVarShortArray tmp_seq;
        tmp_seq << val;

        attr.set_value (tmp_seq.get_buffer(), tmp_seq.length());
    }


.. code-block:: python
    :linenos:

    void MyClass::read_StringSpectrum(Tango::Attribute &attr)
    {
        DEBUG_STREAM << "MyClass::read_StringSpectrum() entering... "<< endl;

        vector<string> val;
        val.push_back("Hello");
        val.push_back("cruel");
        val.push_back("world!");

        // data copy !!
        Tango::DevVarStringArray tmp_seq;
        tmp_seq << val;

        attr.set_value (tmp_seq.get_buffer(), tmp_seq.length());
    }
