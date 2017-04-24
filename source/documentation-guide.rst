How to work with Tango Controls documentation
=============================================

When writing or improving the Tango Controls documentation it is worth to follow a guideline.
This will help in keeping it as consistent as possible. It is also important to know how the content
and the sources are structured to make effort efficient. Below you will find a necessary information.

About this documentation
------------------------

The documentation is written with the `Sphinx`_ markup language. It is a documentation framework based on
`Docutils <http://docutils.sourceforge.net/index.html>` and uses
`reStructuredText <http://docutils.sourceforge.net/rst.html>` for providing content.
For details please refer to `Sphinx webpage`_.

The documentation sources are stored on the GitHub: https://github.com/tango-controls/tango-doc .

It is publicised in HTML, PDF and EPUB formats on the readthedoc.io: http://tango-controls.readthedocs.io/

Some of documents was not originally writen in Sphinx. These have been converted from other formats like
html, latex or Word. These are subject to contain some residual bugs and syntax errors left after conversion. These will
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

There are references to doxygen C++ API documentation. You need to install
`Breathe <https://breathe.readthedocs.io>`_, too. It is a tool for referencing doxygen documentation from the Sphinx.

.. warning::

   Some standard python packages contains a buggy version of :program:`Breathe`. You may need to install it from
   sources. You may use the following command:

   :command:`pip install --upgrade git+git://github.com/michaeljones/breathe@cc8f830`

After having the Sphinx and the Breathe installed you will be able to build the documentation:

* go to (:command:`cd`) folder where you have cloned the repository
* call :command:`spinhx-build source/ build`

This will build html output in the :file:`build` folder.Then you may use any web browse to view the documenation.

.. note::

   Build process generates a lot of warnings. Don't worry. We will work to remove as much of them as possible but some
   are inevitable.

Sources structure
-----------------

Tango Controls versions
~~~~~~~~~~~~~~~~~~~~~~~

The *readthedocs.io* allows to publish various versions of the documentation. It is achieved by providing branches
in a git repository. The official version branches are these named numerically as Tango Controls version: #.#.#.


Chapters and headers
~~~~~~~~~~~~~~~~~~~~

Chapters' order is defined by the main table of contents. It is contained in a file :file:`source/contents.rst` and
referenced index.rst files.

To keep chapters levels consistent please use the following underline schema:

- First level underline: ==== (equal signs)
- Second level: ------ (dashes)
- Third level: ~~~ (waves)

References
~~~~~~~~~~

Basic list of `Reference Names <http://docutils.sourceforge.net/docs/ref/rst/restructuredtext.html#reference-names>`
are provided within :file:conf.py as a `rst_epilog` variable. The content of this variable
is dynamically concat to the end of each *.rst* file upon building process. As it is today, it provides some common
hyperlink targets. However, it is planned to include some common substitutions.
The list allow to use some entries like `\`Tango webpage\`\_` which will be rendered as `Tango webpage`_

Glossary
~~~~~~~~

Glossary entries (definitions) may be provided as content of any document. However, there is
a :file:`source/glossary.rst` file. Its purpose is to centralize short definitions of main concepts of Tango Controls.
Entries defined there may be referenced as `\:term\:\`...\`` at any location of documentation.

Images
~~~~~~

Fore each document, images shell be stored in a sub-folder of the folder where document is stored. As and example,
please refer to :file:`source/tools/astor`. When a folder contains more than one document the images folder shell
be named as the document itself. See :file:`source/installation/tango-on-windows` as an example.


Configuration
-------------

sources/conf.py
~~~~~~~~~~~~~~~
This is a standard `build configuration file` used by Sphinx. Among others the project name, version and copyright
info are defined there. Please refer to
`conf.py documentation <http://www.sphinx-doc.org/en/stable/config.html#module-conf>`_.


sources/requirements.txt
~~~~~~~~~~~~~~~~
This is a standard :program:`pip` requirements file used to fix packages version. Currently it contains entries only
for Sphinx and Breathe.


readthedocs.yml
~~~~~~~~~~~~~~~
This is a configuration file for the `readthedocs` application. It provides some fine-grain settings. For Tango Controls
it limits output formats to standard HTML, PDF and EPUB. Leaving this setting blank will lead to some problems
with build process at the readthedocs.