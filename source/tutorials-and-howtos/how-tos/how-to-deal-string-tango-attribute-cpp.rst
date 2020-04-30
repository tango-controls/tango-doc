.. _how_to_deal_with_strings:

How to deal with string Tango attribute (C++)
=============================================

:audience:`developers`, :lang:`c++`

This HowTo gives example on howthe code for string attribute could be written.
This is only for C++ Tango device class.

Unfortunately, CORBA has been standardized before the standardization of
the C++ string class. In the CORBA IDL to C++ mapping standard, the IDL
string data type maps to classical C string. This means that you have to
deal with

#. The pointer to the memory where the string is stored (char \*)
#. The memory where the the string character are stored

This adds one level of complexity and you have to take care about memory
allocation for these entities.

In a Tango class with string attribute (scalar, spectrum or image), you
have to deal with this level of complexity. The aim of this HowTo is to
give examples on how the code related to these string attributes has to
be written

The first question you have to answer is: Do I want static or dynamic
memory allocation for my string attribute?

Static memory allocation means that the memory is allocated once.
Dynamic allocation means that the memory used for the attribute is
allocated and freed each time the attribute is read. Once one method is
chosen, both the pointer and the characters array memory has to follow
the same rule (all static or all dynamic but not a mix of them)

 

Scalar attribute - static allocation
------------------------------------

Within Pogo, for a correct management of this type of attribute, do not
click the "allocate" toggle button when you define the attribute. The
pointer to the character area is defined as one of the device data
member in the file MyDev.h. The Tango data type DevString is simply a
typedef for a good old "char \*" pointer.

.. code-block:: none
    :linenos:

    class MyDev : public Tango::Device_4Impl
    {
        /*----- PROTECTED REGION ID(MyDev::Data Members) ENABLED START -----*/
        // Add your own data members
    public:
        Tango::DevString the_str;
        /*----- PROTECTED REGION END -----*/ // MyDev::Data Members
    }

In the init_device method (file MyDev.cpp), you have to initialize the
attribute data member created for you by Pogo

.. code-block:: none
    :linenos:

    void MyDev::init_device()
    {
        DEBUG_STREAM << "MyDev::init_device() create device " << device_name << endl;
     
        /*----- PROTECTED REGION ID(StringAttr::init_device) ENABLED START -----*/  
        
        attr_StringAttr_read = &the_str;

        /*----- PROTECTED REGION END -----*/    // MyDev::init_device
    }

The attribute related code in the file MyDev.cpp looks like

.. code-block:: none
    :linenos:

    void MyDev::read_StringAttr(Tango::Attribute &attr)
    {
        DEBUG_STREAM << "MyDev::read_StringAttr(Tango::Attribute &attr) entering... " << endl;
        
        /*----- PROTECTED REGION ID(MyDev::read_StringAttr) ENABLED START -----*/
        //  Set the attribute value
        the_str = const_cast<char *>("Hola Barcelona");
        attr.set_value(attr_StringAttr_read);

        /*----- PROTECTED REGION END -----*/    // MyDev::read_StringAttr
    }

The pointer *the_str* defined as a device data member is initialized to
a statically allocated string. The argument of the
Attribute::set_value() method is of type "char \*\*" which is coherent
with the definition of the Tango::DevString type. Nevertheless, the
definition of statically allocated string in C / C++ is a "const char
\*". This is why we need a const_cast during the pointer
initialization.

Note that the use of the Pogo generated data member (named
attr_StringAttr_read in our case) is not mandatory. You can directly
give the address of the *the_str* pointer to the
Attribute::set_value() method and do not need any additional code in
the init_device() method.

Scalar attribute - dynamic allocation
-------------------------------------

Memory freeing done by Tango layer
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Within Pogo, for a correct management of this type of attribute, do not
click the "allocate" toggle button when you define the attribute. In
this case, we do not need to define anything as device data member.

The attribute related code in the file MyDev.cpp looks like

.. code-block:: none
    :linenos:

    void MyDev::read_StringAttr(Tango::Attribute &attr)
    {
        DEBUG_STREAM << "MyDev::read_StringAttr(Tango::Attribute &attr) entering... " << endl;
        
        /*----- PROTECTED REGION ID(MyDev::read_StringAttr) ENABLED START -----*/
        //  Set the attribute value
        attr_StringAttr_read = new Tango::DevString;
        *attr_StringAttr_read = Tango::string_dup("Bonjour Paris");
        attr.set_value(attr_StringAttr_read,1,0,true);

        /*----- PROTECTED REGION END -----*/    // MyDev::read_StringAttr
    }

As explained in the introduction, both the pointer and the char array
memory are dynamically allocated.  The pointer is allocated first, then
it is is initialized with the result of a Tango::string_dup() method
which allocates memory and copy the string given as argument (It's the
same call than CORBA::string_dup). The Tango attribute value is set
with the classical set_value() method but requiring Tango to free all
the memory previously allocated.

Memory freeing done by device class
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

This example is in the case where within Pogo, the "allocate" toggle
button was active when the attribute was defined.

The init_device() and delete_device() method looks like:

.. code-block:: none
    :linenos:

    void MyDev::init_device()
    {
        DEBUG_STREAM << "MyDev::init_device() create device " << device_name << endl;

        attr_StringAttr_read = new Tango::DevString[1];
     
        /*----- PROTECTED REGION ID(StringAttr::init_device) ENABLED START -----*/  
        
        *attr_StringAttr_read = NULL;

        /*----- PROTECTED REGION END -----*/    // MyDev::init_device
    }

    void MyDev::delete_device()
    {
        /*----- PROTECTED REGION ID(MyDev::delete_device) ENABLED START -----*/

        Tango::string_free(*attr_StringAttr_read);

        /*----- PROTECTED REGION END -----*/    // MyDev::delete_device
        delete[] attr_StringAttr_read;
        
    }

The pointer for the characters array is allocated in the init_device()
and initialized to NULL. In the delete_device() method, the character
array memory is freed with the Tango::string_free() method. If you are using a Tango C++ library version older than v9.3.3, you have to use CORBA::string_free() method instead of Tango::string_free().

.. code-block:: none
    :linenos:

    void MyDev::read_StringAttr(Tango::Attribute &attr)
    {
        DEBUG_STREAM << "MyDev::read_StringAttr(Tango::Attribute &attr) entering... " << endl;
        
        /*----- PROTECTED REGION ID(MyDev::read_StringAttr) ENABLED START -----*/
        //  Set the attribute value
        Tango::string_free(*attr_StringAttr_read);
        *attr_StringAttr_read = Tango::string_dup("Bonjour Paris");
        attr.set_value(attr_StringAttr_read);

        /*----- PROTECTED REGION END -----*/    // MyDev::read_StringAttr
    }

The Tango::DevString pointer created by Pogo (named
attr_StringAttr_read) is allocated in the init_device() method (Pogo
generated code) and freed in the delete_device() method (Pogo generated
code). Nevertheless, nothing is done for the memory used to store the
characters array. This is done in this code snippet in the first line of
the protected region. Then the memory is allocated for the new
characters array and used to set to the Tango Attribute instance value.

Note that only the memory allocatd for the characters array is allocated
/ freed at each attribute reading. The pointer is allocated once in the
init_device() method and freed in the delete_device() method.

Spectrum / Image attribute - static allocation
----------------------------------------------

The code needed in this case is very similar to the scalar case. We also
need pointers to the character areas. They are defined as device data
member in the file MyDev.h.

.. code-block:: none
    :linenos:

    class MyDev : public Tango::Device_4Impl
    {
       /*----- PROTECTED REGION ID(MyDev::Data Members) ENABLED START -----*/
       
      //        Add your own data members
    public:
       Tango::DevString  the_str_array[2];
        
       /*----- PROTECTED REGION END -----*/ // MyDev::Data Members

In the init_device method (file MyDev.cpp), you have to initialize the
attribute data member created for you by Pogo

.. code-block:: none
    :linenos:

    void MyDev::init_device()
    {
        DEBUG_STREAM << "MyDev::init_device() create device " << device_name << endl;
     
        /*----- PROTECTED REGION ID(StringAttr::init_device) ENABLED START -----*/  

    attr_StringAttr_read = the_str_array;

        /*----- PROTECTED REGION END -----*/    // MyDev::init_device
    }

The attribute related code in the file MyDev.cpp looks like

.. code-block:: none
    :linenos:

    void MyDev::read_StringAttr(Tango::Attribute &attr)
    {
        DEBUG_STREAM << "MyDev::read_StringAttr(Tango::Attribute &attr) entering... " << endl;
        /*----- PROTECTED REGION ID(MyDev::read_StringAttr) ENABLED START -----*/
        //  Set the attribute value
        the_str_array[0] = const_cast<char *>("Hola Barcelona");
        the_str_array[1] = const_cast<char *>("Tchao Trieste");
        attr.set_value(attr_StringAttr_read,2);

        /*----- PROTECTED REGION END -----*/    // MyDev::read_StringAttr
    }

The array :samp:`{the_str_array}` defined as a device data member is
initialized to statically allocated strings. The argument of the
Attribute::set_value() method is of type "char \*\*" which is coherent
with the definition of the Tango::DevString type. Nevertheless, the
definition of statically allocated string in C / C++ is a "const char
\*". This is why we need a const_cast during the pointer
initialization.

Note that the use of the Pogo generated data member (named
attr_StringAttr_read in our case) is not mandatory. You can directly
give the name of the *the_str_array* data member to the
Attribute::set_value() method and do not need any additional code in
the init_device() method.

Something similar can be done using a vector of C++ strings if:

#. The vector is initialized somewhere in your Tango class
#. The vector is declared as a device data member (in MyDev.h)
#. The vector size is less or equal to the attribute maximum dimension

The code looks like

.. code-block:: none
    :linenos:

    void MyDev::read_StringAttr(Tango::Attribute &attr)
    {
        DEBUG_STREAM << "MyDev::read_StringAttr(Tango::Attribute &attr) entering... " << endl;
        /*----- PROTECTED REGION ID(MyDev::read_StringAttr) ENABLED START -----*/
        //  Set the attribute value
        for (unsigned int i = 0;i < vs.size();i++)
           the_str_array[i] = const_cast<char *>(vs[i].c_str());
        attr.set_value(attr_StringAttr_read,vs.size());

        /*----- PROTECTED REGION END -----*/    // MyDev::read_StringAttr
    }

Spectrum / Image attribute - dynamic allocation
-----------------------------------------------

Memory freeing done by Tango layer
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Within Pogo, for a correct management of this type of attribute, do not
click the "allocate" toggle button when you define the attribute. In
this case, we do not need to define anything as device data member.

The attribute related code in the file MyDev.cpp looks like

.. code-block:: none
    :linenos:

    void MyDev::read_StringAttr(Tango::Attribute &attr)
    {
        DEBUG_STREAM << "MyDev::read_StringAttr(Tango::Attribute &attr) entering... " << endl;
        /*----- PROTECTED REGION ID(MyDev::read_StringAttr) ENABLED START -----*/
        //  Set the attribute value
        Tango::DevString *ptr_array = new Tango::DevString [2];
        ptr_array[0] = Tango::string_dup("Bonjour Paris");
        ptr_array[1] = Tango::string_dup("Salut Grenoble");
        attr.set_value(ptr_array,2,0,true);

        /*----- PROTECTED REGION END -----*/    // MyDev::read_StringAttr
    }

The Tango::DevString pointer array is allocated first, then it is is
initialized with the results of a Tango::string_dup() method which
allocates memory and copy the string given as argument (It's the same
call than CORBA::string_dup). The Tango attribute value is set with the
classical set_value() method but requiring Tango to free all the memory
previously allocated.

Conclusion
----------

 To conclude this HowTo, the important point to remember:

.. note::  Do not mix solution. Use dynamic or static allocation but for the 2 levels (pointer and character array)

.. warning:: If you do not follow this rule, the penalty will be fatal !!
