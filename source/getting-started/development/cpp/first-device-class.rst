.. raw:: latex

    \clearpage

.. _first_cpp_device_class_implementation:

Your first C++ TANGO device class
=================================

:audience:`beginner developers`, :lang:`c++`

The code given in this chapter as example has been generated using POGO.
Pogo is a code generator for Tango device server. See
`POGO home page`_ for more information about POGO. The
following examples briefly describe how to write device class with
commands which receives and return different kind of Tango data types
and also how to write device attributes The device class implements 5
commands and 3 attributes. The commands are :

-  The command **DevSimple** deals with simple Tango data type

-  The command **DevString** deals with Tango strings

-  **DevArray** receive and return an array of simple Tango data type

-  **DevStrArray** which does not receive any data but which returns an
   array of strings

-  **DevStruct** which also does not receive data but which returns one
   of the two Tango composed types (DevVarDoubleStringArray)

For all these commands, the default behavior of the state machine
(command always allowed) is acceptable. The attributes are :

-  A spectrum type attribute of the Tango string type called **StrAttr**

-  A readable attribute of the Tango::DevLong type called
   **LongRdAttr**. This attribute is linked with the following writable
   attribute

-  A writable attribute also of the Tango::DevLong type called
   **LongWrAttr**.

Since release 9, a Tango device also supports pipe. This is an advanced
feature reserved for some specific cases. Therefore, there is no device
pipe example in this Getting started chapter.

The commands and attributes code
--------------------------------

For each command called DevXxxx, pogo generates in the device class a
method named dev\_xxx which will be executed when the command is
requested by a client. In this chapter, the name of the device class is
*DocDs*

The DevSimple command
~~~~~~~~~~~~~~~~~~~~~

This method receives a Tango::DevFloat type and also returns a data of
the Tango::DevFloat type which is simply the double of the input value.
The code for the method executed by this command is the following:

.. code:: cpp
  :number-lines:

    Tango::DevFloat DocDs::dev_simple(Tango::DevFloat argin)
    {
            Tango::DevFloat argout ;
            DEBUG_STREAM << "DocDs::dev_simple(): entering... !" << endl;

            //      Add your own code to control device here

            argout = argin * 2;
            return argout;
    }

This method is fairly simple. The received data is passed to the method
as its argument. It is

doubled at line 8 and the method simply returns the result.

The DevArray command
~~~~~~~~~~~~~~~~~~~~

This method receives a data of the Tango::DevVarLongArray type and also
returns a data of the Tango::DevVarLongArray type. Each element of the
array is doubled. The code for the method executed by the command is the
following :

.. code:: cpp
  :number-lines:

    Tango::DevVarLongArray *DocDs::dev_array(const Tango::DevVarLongArray *argin)
    {
            //      POGO has generated a method core with argout allocation.
            //      If you would like to use a static reference without copying,
            //      See "TANGO Device Server Programmer's Manual"
            //              (chapter x.x)
            //------------------------------------------------------------
            Tango::DevVarLongArray  *argout  = new Tango::DevVarLongArray();

            DEBUG_STREAM << "DocDs::dev_array(): entering... !" << endl;

            //      Add your own code to control device here

            long argin_length = argin->length();
            argout->length(argin_length);
            for (int i = 0;i < argin_length;i++)
                    (*argout)[i] = (*argin)[i] * 2;

            return argout;
    }

The argout data array is created at line 8. Its length is set at line 15
from the input argument length. The array is populated at line 16,17 and
returned. This method allocates memory for the argout array. This memory
is freed by the Tango core classes after the data have been sent to the
caller (no delete is needed). It is also possible to return data from a
statically allocated array without copying. Look at chapter [Data
exchange] for all the details.

The DevString command
~~~~~~~~~~~~~~~~~~~~~

This method receives a data of the Tango::DevString type and also
returns a data of the Tango::DevString type. The command simply displays
the content of the input string and returns a hard-coded string. The
code for the method executed by the command is the following :

.. code:: cpp
  :number-lines:

    Tango::DevString DocDs::dev_string(Tango::DevString argin)
    {
            //      POGO has generated a method core with argout allocation.
            //      If you would like to use a static reference without copying,
            //      See "TANGO Device Server Programmer's Manual"
            //              (chapter x.x)
            //------------------------------------------------------------
            Tango::DevString        argout;
            DEBUG_STREAM << "DocDs::dev_string(): entering... !" << endl;

            //      Add your own code to control device here

            cout << "the received string is " << argin << endl;

            string str("Am I a good Tango dancer ?");
            argout = new char[str.size() + 1];
            strcpy(argout,str.c_str());

            return argout;
    }

The argout string is created at line 8. Internally, this method is using
a standard C++ string. Memory for the returned data is allocated at line
16 and is initialized at line 17. This method allocates memory for the
argout string. This memory is freed by the Tango core classes after the
data have been sent to the caller (no delete is needed). It is also
possible to return data from a statically allocated string without
copying. Look at chapter [Data exchange] for all the details.

The DevStrArray command
~~~~~~~~~~~~~~~~~~~~~~~

This method does not receive input data but returns an array of strings
(Tango::DevVarStringArray type). The code for the method executed by
this command is the following:

.. code:: cpp
  :number-lines:

    Tango::DevVarStringArray *DocDs::dev_str_array()
    {
            //      POGO has generated a method core with argout allocation.
            //      If you would like to use a static reference without copying,
            //      See "TANGO Device Server Programmer's Manual"
            //              (chapter x.x)
            //------------------------------------------------------------
            Tango::DevVarStringArray        *argout  = new Tango::DevVarStringArray();

            DEBUG_STREAM << "DocDs::dev_str_array(): entering... !" << endl;

            //      Add your own code to control device here

            argout->length(3);
            (*argout)[0] = Tango::string_dup("Rumba");
            (*argout)[1] = Tango::string_dup("Waltz");
            string str("Jerck");
            (*argout)[2] = Tango::string_dup(str.c_str());
            return argout;
    }

The argout data array is created at line 8. Its length is set at line
14. The array is populated at line 15,16 and 18. The last array element
is initialized from a standard C++ string created at line 17. Note the
usage of the *string\_dup* function of the Tango namespace. This is
necessary for strings array due to the CORBA memory allocation schema.

The DevStruct command
~~~~~~~~~~~~~~~~~~~~~

This method does not receive input data but returns a structure of the
Tango::DevVarDoubleStringArray type. This type is a composed type with
an array of double and an array of strings. The code for the method
executed by this command is the following:

.. code:: cpp
  :number-lines:

    Tango::DevVarDoubleStringArray *DocDs::dev_struct()
    {
            //      POGO has generated a method core with argout allocation.
            //      If you would like to use a static reference without copying,
            //      See "TANGO Device Server Programmer's Manual"
            //              (chapter x.x)
            //------------------------------------------------------------
            Tango::DevVarDoubleStringArray  *argout  = new Tango::DevVarDoubleStringArray();

            DEBUG_STREAM << "DocDs::dev_struct(): entering... !" << endl;

            //      Add your own code to control device here

            argout->dvalue.length(3);
            argout->dvalue[0] = 0.0;
            argout->dvalue[1] = 11.11;
            argout->dvalue[2] = 22.22;

            argout->svalue.length(2);
            argout->svalue[0] = Tango::string_dup("Be Bop");
            string str("Smurf");
            argout->svalue[1] = Tango::string_dup(str.c_str());

            return argout;
    }

The argout data structure is created at line 8. The length of the double
array in the output structure is set at line 14. The array is populated
between lines 15 and 17. The length of the string array in the output
structure is set at line 19. This string array is populated between
lines 20 an 22 from a hard-coded string and from a standard C++ string.
This method allocates memory for the argout data. This memory is freed
by the Tango core classes after the data have been sent to the caller
(no delete is needed). Note the usage of the *string\_dup* function of
the Tango namespace. This is necessary for strings array due to the
CORBA memory allocation schema.

The three attributes
~~~~~~~~~~~~~~~~~~~~

Some data have been added to the definition of the device class in order
to store attributes value. These data are (part of the class definition)
:

.. code:: cpp
   :number-lines:



    protected :
            //      Add your own data members here
            //-----------------------------------------
            Tango::DevString        attr_str_array[5];
            Tango::DevLong          attr_rd;
            Tango::DevLong          attr_wr;

One data has been created for each attribute. As the StrAttr attribute
is of type spectrum with a maximum X dimension of 5, an array of length
5 has been reserved.

Several methods are necessary to implement these attributes. One method
to read the hardware which is common to all readable attributes plus one
read method for each readable attribute and one write method for each
writable attribute. The code for these methods is the following :

.. code:: cpp
  :number-lines:

   void DocDs::read_attr_hardware(vector<long> &attr_list)
   {
       DEBUG_STREAM << "DocDs::read_attr_hardware(vector<long> &attr_list) entering... "<< endl;
   // Add your own code here

       string att_name;
       for (long i = 0;i < attr_list.size();i++)
       {
           att_name = dev_attr->get_attr_by_ind(attr_list[i]).get_name();

          if (att_name == "LongRdAttr")
          {
              attr_rd = 5;
          }
      }
   }

   void DocDs::read_LongRdAttr(Tango::Attribute &attr)
   {
       DEBUG_STREAM << "DocDs::read_LongRdAttr(Tango::Attribute &attr) entering... "<< endl;

       attr.set_value(&attr_rd);
   }

   void DocDs::read_LongWrAttr(Tango::Attribute &attr)
   {
       DEBUG_STREAM << "DocDs::read_LongWrAttr(Tango::Attribute &attr) entering... "<< endl;

       attr.set_value(&attr_wr);
   }

   void DocDs::write_LongWrAttr(Tango::WAttribute &attr)
   {
       DEBUG_STREAM << "DocDs::write_LongWrAttr(Tango::WAttribute &attr) entering... "<< endl;

       attr.get_write_value(attr_wr);
       DEBUG_STREAM << "Value to be written = " << attr_wr << endl;
   }

   void DocDs::read_StrAttr(Tango::Attribute &attr)
   {
       DEBUG_STREAM << "DocDs::read_StrAttr(Tango::Attribute &attr) entering... "<< endl;

       attr_str_array[0] = const_cast<char *>("Rock");
       attr_str_array[1] = const_cast<char *>("Samba");

       attr_set_value(attr_str_array, 2);
   }

The *read\_attr\_hardware()* method is executed once when a client
execute the read\_attributes CORBA request whatever the number of
attribute to be read is. The rule of this method is to read the hardware
and to store the read values somewhere in the device object. In our
example, only the LongRdAttr attribute internal value is set by this
method at line 13. The method *read\_LongRdAttr()* is executed by the
read\_attributes CORBA call when the LongRdAttr attribute is read but
after the read\_attr\_hardware() method has been executed. Its rule is
to set the attribute value in the TANGO core classes object representing
the attribute. This is done at line 22. The method *read\_LongWrAttr()*
will be executed when the LongWrAttr attribute is read (after the
*read\_attr\_hardware()* method). The attribute value is set at line 29.
In the same manner, the method called *read\_StrAttr()* will be executed
when the attribute StrAttr is read. Its value is initialized in this
method at line 44 and 45. There
are several ways to code spectrum or image attribute of the DevString
data type. A HowTo related to this topic is available on the Tango
control system Web site. The *write\_LongWrAttr()* method is executed
when the LongWrAttr attribute value is set by a client. The new
attribute value coming from the client is stored in the object data at
line 36.

Pogo also generates a file called DocDsStateMachine.cpp (for a Tango
device server class called DocDs). This file is used to store methods
coding the device state machine. By default a allways allowed state
machine is provided. For more information about coding the state
machine, refer to the chapter Writing a device server.
