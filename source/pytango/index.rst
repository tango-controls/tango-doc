|image0|

PyTango - a Python binding to Tango
===================================

Python_ is a commonly used programming language in the scientific community, due to its many advantages
(the most important of those is probably simplicity of its syntax).
:term:`Tango Controls` also supports it in a form of a Boost-based binding to C++ Tango implementation.

In "pythonic" terms, it is a package `available at PyPI <https://pypi.python.org/pypi/PyTango>`_
that exposes the complete Tango API (both the client and the server parts of it) as well as provides a framework
for unit-testing your :term:`device servers<device server>`.

.. note::
    You should use PyTango that has major and minor version numbers the same as Tango C++ library that you have.
    So if you have Tango C++ library version X.Y.Z, you should have PyTango version X.Y.V (where V might equal Z,
    but its not required).

You can find its full documentation here_.

.. definitions

.. _Python: https://www.python.org/
.. _here:   http://pytango.readthedocs.io/en/latest/

.. |image0| image:: img/pytango_logo.png
