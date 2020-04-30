.. _documentation-guide:


How to work with Tango Controls documentation
=============================================

:audience:`developers`

When writing or improving the Tango Controls documentation it is worth to follow these guidelines.
This will help in keeping it as consistent as possible. It is also important to know how the contents
and the sources are structured to make your effort efficient. You will find necessary information below.

About this documentation
------------------------

The documentation is written with the `Sphinx`_ markup language. It is a documentation framework based on
`Docutils`_ and uses `reStructuredText`_ for providing content. For details please refer to `Sphinx webpage`_.

The documentation sources are stored on GitHub: https://github.com/tango-controls/tango-doc .

It is publicised in HTML, PDF and EPUB formats on the readthedoc.io: http://tango-controls.readthedocs.io/

Some of the documents were not originally writen in Sphinx. These have been converted from other formats like
HTML, LaTeX or Word. These may contain some residual bugs and syntax errors left after conversion. They will
be consequently corrected when found.

Updating the documentation
--------------------------

If you find that some useful information is missing, misleading or you can think about any potential improvements
please do either:

* send a request through the github project: https://github.com/tango-controls/tango-doc/issues
* or do correction by yourself.

If you decide to contribute by writing, the preferred way is to:

* clone or fork the repository,
* create your own local fix branch,
* when finished, send a pull request to the `origin/dev` branch.

.. note::

   .. rubric:: GitHub online edit

   For small fixes, you may use GitHub online editing feature.
   It is a good practice to avoid direct commits to 'dev' nor to 'master' branch.
   Please select :guilabel:`Create a new branch and start pull request` before sending
   the change.

For details see :ref:`Documentation workflow tutorial <documentation_workflow_tutorial>`.

Building/previewing documentation locally
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

To build the documentation you will need Sphinx environment which is a Python package.
Please consult `Sphinx webpage`_ for details on how to install it.

.. There are references to doxygen C++ API documentation. You need to install
   `Breathe <https://breathe.readthedocs.io>`_, too. It is a tool for referencing doxygen documentation from the Sphinx.

.. warning::

   Some standard Python packages contain a buggy version of :program:`Breathe`. You may need to install it from
   sources. You may use the following command:

   :command:`pip install --upgrade git+git://github.com/michaeljones/breathe@cc8f830`

After having Sphinx and Breathe installed you will be able to build the documentation:

* go to (:command:`cd`) folder where you have cloned the repository
* call :command:`spinhx-build source build`

This will build HTML output in the :file:`build` folder.Then you may use any web browser to view the documentation.

.. note::

   The build process generates a lot of warnings. Don't worry. We will work to remove as much of them as possible but some
   are inevitable.

For more details and step-by-step guidance pleas refer to
:ref:`Documentation workflow tutorial <documentation_workflow_tutorial>`.

Sources structure
-----------------

Tango Controls versions
~~~~~~~~~~~~~~~~~~~~~~~

The *readthedocs.io* allows to publish various versions of the documentation. It is achieved by providing branches
in a git repository. The official version branches are these named numerically as Tango Controls versions: #.#.#.


Chapters and headers
~~~~~~~~~~~~~~~~~~~~

Chapters' order is defined by the main table of contents. It is contained in a file :file:`source/contents.rst` and
referenced index.rst files.

To keep chapters levels consistent please use the following underlining schema:

- First level underline: ==== (equal signs)
- Second level: ------ (dashes)
- Third level: ~~~ (waves)

References
~~~~~~~~~~

Basic list of `Reference Names <http://docutils.sourceforge.net/docs/ref/rst/restructuredtext.html#reference-names>`_
is provided within :file:`source/conf.py` as a `rst_epilog` variable. The contents of this variable
is dynamically concatenated to the end of each *.rst* file during the building process. As of today, it provides some common
hyperlink targets. However, it is planned to include some common substitutions.
The list allows to use some entries like `\`Tango webpage\`\_` which will be rendered as `Tango webpage`_

Glossary
~~~~~~~~

Glossary entries (definitions) may be provided as content of any document. However, there is
a :file:`source/reference/glossary.rst` file. Its purpose is to centralise short definitions of main concepts of Tango Controls.
Entries defined there may be referenced as `\:term\:\`...\`` at any location in the documentation.

Images
~~~~~~

Fore each document, images should be stored in a sub-folder of the folder where the document is stored. As an example,
please refer to :file:`source/tools-and-extensions/astor`. When a folder contains more than one document the images folder should
be named as the document itself. See :file:`source/getting-started/installation/tango-on-windows` as an example.


Configuration
-------------

sources/conf.py
~~~~~~~~~~~~~~~
This is a standard `build configuration file` used by Sphinx. Among others the project name, version and copyright
info are defined there. Please refer to
`conf.py documentation <http://www.sphinx-doc.org/en/stable/config.html#module-conf>`_.


requirements.txt
~~~~~~~~~~~~~~~~~~~~~~~~
This is a standard :program:`pip` requirements file used to fix packages version. Currently it contains Sphinx only.


readthedocs.yml
~~~~~~~~~~~~~~~
This is a configuration file for the `readthedocs` application. It provides some fine-grain settings. For Tango Controls
it limits output formats to standard HTML, PDF and EPUB. Leaving this setting blank will lead to some problems
with the build process at readthedocs.

