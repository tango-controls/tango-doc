Documentation workflow step-by-step
===================================

Prerequisites
-------------

- Python
- Git

Installation
------------

If you have a prerequisities installed, you need to install Sphinx tools:

#. Install virtual environments support for python:

   :command:`pip install virtualenv`
#. Create an environment for sphinx tools:

   :command:`virtualenv doc-env`
#. Activate the environment:

   :command:`. doc-env/bin/activate`
#. Install Sphinx:

   :command:`pip install sphinx`
#. Install Breathe (a module to deal with doxygen C++ API documenatation):

   :command:`pip install --upgrade git+git://github.com/michaeljones/breathe@cc8f830`

   .. note::

      There is a fixed version from git that has been tested to work

Download documentation sources
------------------------------
