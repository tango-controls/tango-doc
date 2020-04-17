.. _documentation_workflow_tutorial:

Documentation, how to contribute
================================

:audience:`developers`

Prerequisites
-------------

To work with documentation, first you need to have the following programs installed on your system:

- :program:`Python` >= 2.7 (as Sphinx is a Python tool),
- :program:`Git` (since the sources are kept in a git repository).

Sphinx installation
-------------------

Once installed the prerequisites, you can use Sphinx through two options:

- using Python3 venv way, or
- using virtualenv way.

Using Python3 venv way
~~~~~~~~~~~~~~~~~~~~~~

If you have prerequisites installed, you need to install Sphinx tools:

#. Install virtual environments support for Python:

   :command:`python3 -m venv doc-env`

#. Activate the environment:

    * On GNU/Linux:

   :command:`source doc-env/bin/activate`

    * On Windows:

   :command:`doc-env\Scripts\activate.bat`

#. Install Sphinx:

   :command:`pip install sphinx`


Using virtualenv way
~~~~~~~~~~~~~~~~~~~~

#. Install virtual environments support for Python:

   :command:`pip install virtualenv`

   .. note::
      If you're using a Unix-based system, you might need to use :command:`sudo pip install virtualenv`.

#. Create an environment for sphinx tools:

   :command:`virtualenv doc-env`

#. Activate the environment:

    * On GNU/Linux:

   :command:`source doc-env/bin/activate`

    * On Windows:

   :command:`doc-env\Scripts\activate.bat`

#. Install Sphinx:

   :command:`pip install sphinx`


Get documentation sources
-------------------------

#. Go to a folder where you keep sources:

   :command:`cd src`
#. Clone documentation from the repository:

   :command:`git clone https://github.com/tango-controls/tango-doc.git`
#. Change current folder to the documentation folder:

   :command:`cd tango-doc`
#. Try to build the documentation:

   :command:`sphinx-build source build`
#. Open build/index.html with your favorite browser to see if it has been built correctly.

.. _updating-doc:

Updating documentation
----------------------

#. Create your local working branch:

   .. note::

      The following command creates a branch based on the current branch you are on. If you've just started the tutorial
      it is `master`. If you would like to contribute to another branch, e.g. directly to `9.2.5`, you need to check it
      out first: :command:`git checkout origin/9.2.5`

      To see what what branch is the current one use: :command:`git branch -a`. The current branch is marked
      with an asterisk (\*).

   :command:`git checkout origin/master`
   :command:`git checkout -b "TD-66-step-by-step-demo"`

#. Edit a file (or create it if it doesn't exist) you would like to change. If you are following this tutorial for learning
   please use this file: :file:`source/tutorials-and-howtos/tutorials/example.rst`

#. Make sure that the file appears in a relevant toc-tree (in some :file:`index.rst` file or
   in :file:`source/contents.rst`). If you are now learning please check :file:`source/tutorials/index.rst`

#. Check if your changes have built correctly:

   :command:`sphinx-build source build`
#. Check results with a browser. If you've edited the example, open :file:`build/tutorials/index.html`

If everything is OK, you may commit changes and send a pull request (ask to review and merge into an on-line branch).

Committing changes
------------------

#. Add modifications to a commit list. For example:

   :command:`git add source/tutorials-and-howtos/tutorials/example.rst`

   :command:`git add source/tutorials-and-howtos/tutorials/index.rst`

#. Commit the changes providing some meaningful message. For example:

   :command:`git commit -m "doing tutorial"`

   .. note::

      The changes are now committed to your local repository. To share them, you need to push. You may repeat
      editing, checking and commit steps several times without pushing util you are happy with your work. This
      way you may track the history of changes.

#. If your work took a long time it is good to do rebasing with recent changes done by someone else. For example:

   :command:`git fetch origin`

   :command:`git rebase origin/master`

   .. note::

      If you are contributing to other branch than `master`, for example directly to the `9.5.2`, you need to
      call :command:`git rebase 9.5.2`

Pushing (to the GitHub repository)
----------------------------------

#. Push your changes to the origin repository. For example:

   :command:`git push -u origin TD-66-step-by-step-demo`

Now you are ready to ask for merging by sending a pull request on GitHub.

Pull request (asking for merge)
-------------------------------

#. Go to https://github.com/tango-controls/tango-doc

#. Click the button :guilabel:`New pull request`.

#. On the :guilabel:`base` selector select the branch you want to update (usually `master` or some `#.#.#`).

#. On the :guilabel:`compare` selector select your branch.

#. Provide a relevant comment and click :guilabel:`Create pull request`.

Now, someone will review your contribution, merge into selected branch and publish. If he/she finds some issues,
he/she will get back to you.

Continuing the contribution
---------------------------

If you would like to come up with some other contribution, you do not need to clone sources again. Follow the following
steps:

#. Fetch changes from the origin repository:

   :command:`git fetch origin`
#. Switch to the main branch you are going to update (for example 9.2.5):

   :command:`git checkout origin/9.2.5`

#. Pull the changes:

   :command:`git pull`

#. Follow steps from :ref:`Updating documentation <updating-doc>`
