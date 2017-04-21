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

To build the documentation you need to install Sphinx environment which is a Python package.


Sources structure
-----------------

The *readthedocs.io* allows to publish various versions of the documentation. It is achieved by providing branches
in a git repository.

Chapters' order is defined by the main table of contents. It is contained in a file :file:`source/contents.rst`.

To keep chapters levels consistent please use:

- First level underline: ==== (equal signs)
- Second level: ------ (dashes)
- Third level: ~~~ (waves)

