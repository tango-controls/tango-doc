How to work with Tango Controls documentation
=============================================

When writing or improving the Tango Controls documentation it is worth to follow some guidelines
to keep it as much consistent as possible. It is also important to know how the content and the sources are structured.
Below you will find a necessary information.

About this documentation
------------------------

The documentation is written with the Sphinx markup language.
The documentation sources are stored on the GitHub: https://github.com/tango-controls/tango-doc .
It is publicised in HTML, PDF and EPUB formats on the readthedoc.io: http://tango-controls.readthedocs.io/

Some of documents was not originally writen in Sphinx. These have been converted from other source formats:
html, latex, .doc. These are subject to contain some residual bugs and syntax errors left after conversion. These will
be consequently corrected when found.

Updating the documentation
--------------------------
If you find that some useful information is missing, misleading or think about any potential improvement
please do either:

* send a request through the github project: https://github.com/tango-controls/tango-doc/issues
* or do correction by yourself

For the second option, the preferred way is:

* clone or fork the repository
* create your own local fix branch
* when finished, send a pull request to the origin

Building/previewing documentation locally
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

To build the documentation you will need Sphinx environment which is a Python package.
Please consult `Sphinx webpage`_ for details on how to install it.

There are references to C++ API doxygen documentation. You need to install
`Breathe <https://breathe.readthedocs.io>`_, too. It is a tool for referencing a doxygen documentation from the Sphinx.

.. warning::

   Some standard python packages contains a buggy version of :program:`Breathe`. You may need to install if from
   sources. You may use the following command:

   :command:`pip install --upgrade git+git://github.com/michaeljones/breathe@cc8f830`

After having the Sphinx and the Breathe installed you may build the documentation:

* go to (:command:`cd`) folder where you have cloned the repository
* call :command:`spinhx-build source/ build`

This will build html output in the :file:`build`, which you can browse with a browser.

.. note::

   Build process generates a lot of warnings. Don't worry. We will work to remove as much of them as possible but some
   are inevitable.

Sources structure
-----------------

Tango Controls versions
~~~~~~~~~~~~~~~~~~~~~~~

The *readthedocs.io* allows to publish various versions of the documentation. It is achieved by providing branches
in a git repository. The official branches are these named numerically as Tango Controls version: #.#.#.


Chapters and headers
~~~~~~~~~~~~~~~~~~~~

Chapters' order is defined by the main table of contents. It is contained in a file :file:`source/contents.rst`.

To keep chapters levels consistent please use:

- First level underline: ==== (equal signs)
- Second level: ------ (dashes)
- Third level: ~~~ (waves)

References
~~~~~~~~~~


Glossary
~~~~~~~~


Images
~~~~~~


Configuration
-------------

conf.py
~~~~~~~

requirements.txt
~~~~~~~~~~~~~~~~

readthedocs.yml
~~~~~~~~~~~~~~~
