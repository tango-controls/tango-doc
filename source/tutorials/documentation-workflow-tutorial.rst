Documentation workflow tutorial
===============================

Prerequisites
-------------

To work with documentation, first you need to have installed on your system:

- :program:`Python` >= 2.7 as Sphinx is a Python tool.
- :program:`Git` since the sources are kept in a git repository.

Sphinx installation
-------------------

If you have a prerequisities installed, you need to install Sphinx tools:

#. Install virtual environments support for python:

   :command:`pip install virtualenv`
    .. note::
        If you're using a Unix-based system, you might need to use :command:`sudo`.

#. Create an environment for sphinx tools:

   :command:`virtualenv doc-env`
#. Activate the environment:

   :command:`. doc-env/bin/activate`
#. Install Sphinx:

   :command:`pip install sphinx`
    .. note::
        If you're using a Unix-based system, you might need to use :command:`sudo`.

#. Install Breathe (a module to deal with doxygen C++ API documenatation):

   :command:`pip install breathe`
    .. note::
        If you're using a Unix-based system, you might need to use :command:`sudo`.

Get documentation sources
-------------------------

#. Go to the some folder where we keep sourcecode

   :command:`cd src`
#. Clone documentation from the repository

   :command:`git clone https://github.com/tango-controls/tango-doc.git`
#. Change current folder to the documentation folder:

   :command:`cd tango-doc`
#. Try to build the documentation:

   :command:`sphinx-build source build`
#. Open build/index.html with your favorite browser to see if it has been built correctly

.. _updating-doc:

Updating documentation
----------------------

#. Create your local working branch

   .. note::

      The following command creates a branch based on the current branch you are. If you just started the tutorial
      it is `master`. If you would like to contribute to other branch, like directly to `9.2.5`, you need to check it
      out first: :command:`git checkout origin/9.2.5`

      To see what what branch is the current one please call: :command:`git branch -a`. The current branch is marked
      with asterisk (\*).

   :command:`git checkout -b "TD-66-step-by-step-demo"`

#. Edit (or create if it does not exist) a file you would like to edit. If you are following this tutorial for learning
   please use the file: :file:`source/tutorials/example.rst`

#. Make sure that file appears in a relevant toc-tree (in some :file:`index.rst` file or
   in :file:`source/contents.rst`). If you are now learning please check :file:`source/tutorials/index.rst`

#. Check if your changes build correctly

   :command:`sphinx-build source build`
#. Check result with a browser. If you are doing learn steps open :file:`build/tutorials/index.html`

If everything is ok you may commit changes  and send a pull request (ask to review and merge into an on-line branch).

Committing changes
------------------

#. Add modifications to a commit list. For example:

   :command:`git add source/tutorials/example.rst`

   :command:`git add source/tutorials/index.rst`

#. Commit the changes providing some meaning full message. For example:

   :command:`git commit -m "doing tutorial"`

   .. note::

      The changes are now committed to your local repository. To share them, you need to push. You may repeat
      editing, checking and commit steps several times without pushing util you are happy with your work. This
      way you may track the history of changes.

#. If your work took a long time it is good to do rebasing with recent changes done by someone else. For example:

   :command:`git fetch origin`

   :command:`git rebase master`

   .. note::

      If you are contributing to other branch than `master` , for example directly to the `9.5.2` version you need to
      call :command:`git rebase 9.5.2`

Pushing (to the GitHub repository)
----------------------------------

#. Push your changes to the origin repository. For example:

   :command:`git push -u origin TD-66-step-by-step-demo`

Now you are ready to ask for merging by sending a pull request on the GitHub. To to this for this:

Pull request (asking for merge)
-------------------------------

#. Go to https://github.com/tango-controls/tango-doc

#. Click the button :guilabel:`New pull request`.

#. On the :guilabel:`base` selector select the branch you want to update (usually `master` or some `#.#.#`).

#. On the :guilabel:`compare` selector select your branch.

#. Provide a relevant comment and click :guilabel:`Create pull request`.

Now, someone will review your contribution, merge into selected branch and publish. If he find some issues he will
get back to you.

Continuing the contribution
---------------------------

If you would like to come with some other contribution you do not need to clone sources again. Follow the following
steps:

#. Fetch changes from the origin repository:

   :command:`git fetch origin`
#. Switch to main branch you are going to update (for example 9.2.5):

   :command:`git checkout origin/9.2.5`

#. Pull the changes:

   :command:`git pull`

#. Follow steps from :ref:`Updating documentation <updating-doc>`

