|image0|

.. rubric:: ICA Group


Bensikin User Manual
====================

:audience:`users, administrators`

+----------------------+--------------+---------------+----------------+------------------+------------------------------------------------+-------------+
| **Diffusion date**   | **Writer**   | **Auditor**   | **Approver**   | **Approver’s**   | **Modifications**                              | **Index**   |
|                      |              |               |                |                  |                                                |             |
|                      |              |               |                | **stamp**        |                                                |             |
+======================+==============+===============+================+==================+================================================+=============+
| 2005/11/17           | R.Girardot   | M.Ounsy       | A.Buteau       | A.B.             | Creation                                       | 1.0         |
+----------------------+--------------+---------------+----------------+------------------+------------------------------------------------+-------------+
| 2017/07/24           | M.Thiam      | R.Girardot    | A.Buteau       | A.B.             | -  New SOLEIL documentation standard applied   | 2.0         |
|                      |              |               |                |                  |                                                |             |
|                      |              |               |                |                  | -  Screenshots updated                         |             |
|                      |              |               |                |                  |                                                |             |
|                      |              |               |                |                  | -  Text reviewed                               |             |
|                      |              |               |                |                  |                                                |             |
|                      |              |               |                |                  | -  Missing functionalities description added   |             |
|                      |              |               |                |                  |                                                |             |
|                      |              |               |                |                  | -  Minor modifications for final approval      |             |
+----------------------+--------------+---------------+----------------+------------------+------------------------------------------------+-------------+

Diffusion: For information

Receivers: Any archiving user

Figure Index
------------

- :ref:`Figure 1: Bensikin Account Manager <bensikin_fig_1>`

- :ref:`Figure 2: Bensikin main panel <bensikin_fig_2>`

- :ref:`Figure 3: Creating a new account <bensikin_fig_3>`

- :ref:`Figure 4: Account selection <bensikin_fig_4>`

- :ref:`Figure 5: Show account path <bensikin_fig_5>`

- :ref:`Figure 6: Context control panel <bensikin_fig_6>`

- :ref:`Figure 7: Application first start <bensikin_fig_7>`

- :ref:`Figure 8: Option –context tab <bensikin_fig_8>`

- :ref:`Figure 9: Bensikin with context table selection mode (new context) <bensikin_fig_9>`

- :ref:`Figure 10: Bensikin with context table selection mode (modified context) <bensikin_fig_10>`

- :ref:`Figure 11: Data base Context filter dialog <bensikin_fig_11>`

- :ref:`Figure 12: Snapshot control panel <bensikin_fig_12>`

- :ref:`Figure 13: Modified snapshot <bensikin_fig_13>`

- :ref:`Figure 14: Snapshot comparison - full table <bensikin_fig_14>`

- :ref:`Figure 15: Snapshot edit clipboard dialog <bensikin_fig_15>`

- :ref:`Figure 16: Save option <bensikin_fig_16>`

- :ref:`Figure 17: Snapshot options <bensikin_fig_17>`

- :ref:`Figure 18: Print option <bensikin_fig_18>`

- :ref:`Figure 19: Bensikin toolbar <bensikin_fig_19>`

Introduction
------------

This document is an end-user guide to using the :program:`Bensikin` application,
and a brief developer-oriented presentation of the application’s
architecture.

Application’s context: Contexts and Snapshots
---------------------------------------------

A snapshot is, as said in the name, a “picture” of a list of equipment’s
“settings” (*more precisely of their Tango attributes value*\ s) taken
at a precise instant.

A snapshot is based on a context, which is a group of Tango devices and
their attributes that must be part of the snapshots. A context is
described by meta-data (author, description, etc.), so that users know
which context is used what for.

A typical use case of a snapshot is to memorize a particular
configuration of a set of equipment’s, to be able in the future to reset
them to the values of this snapshot (*for example, reposition all
Insertion devices to their parking position after a beam loss*).

Application’s description and goals
-----------------------------------

Application’s goals
~~~~~~~~~~~~~~~~~~~

:program:`Bensikin` allows the user to define contexts and take snapshots.
Snapshots can be saved as files and modified.

Bensikin is ready for multi-user use, which has for consequence the
need to define accounts. An account is a way to map a user with a
working directory. An important consequence of this is that **2
different users must not use the same working directory**, or you
may encounter application misbehaviors. An account has a name and a
path to a working directory.

Bensikin is thus naturally divided (both in functionalities and
display) in three parts:

-  The account part, which is an introduction to the rest of the
       application

-  The context part

-  The snapshot part

A first look to Bensikin
~~~~~~~~~~~~~~~~~~~~~~~~

The Bensikin Account Manager is here to manage accounts, which
means:

-  Creating a new account

-  Deleting an existing account

-  Launching application with an account chosen in a list

   .. _bensikin_fig_1:
   .. figure:: bensikin/image5.png

      Figure 1: Bensikin Account Manager

The :guilabel:`Context Control Panel` is where user can manage contexts, which means
creating, loading and modifying contexts, and launching snapshots based
on the defined contexts.

The :guilabel:`Snapshot Control` Panel is where user can manage snapshots, which
means saving snapshots in files, loading snapshots from database and
files, temporary modify snapshots attributes values and set equipment
with defined snapshots (with or without modifying snapshots) or a
subpart of them.

The application’s :guilabel:`logs panel` displays the application information and
error messages (like database interaction, encountered problems, etc.)

The :guilabel:`Menu` and the :guilabel:`Tool bar` are for actions shortcuts and application’s
options.

.. _bensikin_fig_2:
.. figure:: bensikin/image6.png

   Figure 2: Bensikin main panel

Account Manager
---------------

The :ref:`Figure 1: Bensikin Account Manager <bensikin_fig_1>` presents the account Manager
Interface, on application start. With this manager, you can create a new
account, or delete or use an existing one.

To quit the application, simply click on |image3| or |image4| button.

Existing accounts are listed in the account :guilabel:`Selection Combo Box`, which
you can reload by clicking on |image5| button (if you think that someone
could have modified it by creating a new account or deleting an existing
one, for example).

Creating a new account
~~~~~~~~~~~~~~~~~~~~~~

To create a new account, click on the button |image6| (at the bottom
left of the panel). A new dialog will appear, as following.

.. _bensikin_fig_3:
.. figure:: bensikin/image11.png

   Figure 3: Creating a new account

In this new dialog, you will have to enter the name of your new
account and the path of the application working directory for this
account. If you prefer, you can browse for the path by clicking on
the |image8| button. Then, a classic browsing dialog will be
displayed, in which you can choose the directory. When both fields
(:guilabel:`Name` and :guilabel:`Path`) are fulfilled, click on |image9| button to
validate your new account, which will be automatically added in the
list of existing accounts. If you click on |image10| or |image11|
button, you go back to the first dialog, as presented in
:ref:`Figure 1: Bensikin Account Manager <bensikin_fig_1>`,
and nothing is done.

Deleting an existing Account
~~~~~~~~~~~~~~~~~~~~~~~~~~~~

To delete an existing account, first select the account in the
account selection combo box, as following:

.. _bensikin_fig_4:
.. figure:: bensikin/image15.png

   Figure 4: Account selection

When the account is selected, click on :guilabel:`Delete` button to delete
it. If you do it, you won’t be able to use this account any more
(and no other user either), because the account is definitely
removed from list. The account deletion doesn’t involve the
corresponding directory (neither its content) deletion.

If you want to see your account path, you can check :guilabel:`Show account
path`.

.. _bensikin_fig_5:
.. figure:: bensikin/image5.png

   Figure 5: Show account path

Launching application with an existing account
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

To launch application with an existing account, first select the
account in the account selection combo box, as presented in
:ref:`Figure 4: Account selection <bensikin_fig_4>`.

Then, click on :guilabel:`Ok` button, and you will reach the application
main panel configured with this account (the account name is
displayed in frame title).

Contexts Management
-------------------

This section describes how to control contexts with Bensikin. A context
is a list of attributes for which you can make a snapshot. A context has
an ID and a creation date, both defined by the database. A context also
has a name, an author, a reason and a description. The reason usually
describes why the context was created (example: because of an incident
or in order to set some equipment), whereas the description is here to
have an idea of what kind of attributes you will find in this context.

Contexts are managed in the context control panel:

.. _bensikin_fig_6:
.. figure:: bensikin/image16.png

   Figure 6: Context control panel

Creating a new context
~~~~~~~~~~~~~~~~~~~~~~

To create a new context, click on the :guilabel:`new` icon in toolbar
(|image17|), or choose option to make a new context from :guilabel:`File` menu
or :guilabel:`Contexts` menu:

|image18|\ |image19|

You also are ready to make a new context at application first start
or by clicking on the :guilabel:`reset` icon (|image20|):

.. _bensikin_fig_7:
.. figure:: bensikin/image21.png

   Figure 7: Application first start

The difference between the :guilabel:`reset` icon(|image22|) and the :guilabel:`new`
icon(|image23|) is, that the “reset” icon will clear every panel,
whereas the “new” icon will only clear the snapshot list and the
Context Details sub panel.

Classic way (tree)
^^^^^^^^^^^^^^^^^^

The tree on the left side of the :guilabel:`Context Details` sub panel allows
you to check for available attributes. The one on the right side
represents your context attributes.

To add attributes in your context browse the left tree, select
attributes (represented by the icon |image24|), and click on the
arrow |image25| to transfer them to the right tree.

To remove attributes from your context, select them in the right
tree and click on the cross |image26|.

Finally, fill the context Meta data (Name, Author, Reason and
Description) in the corresponding fields (Note that filling the
fields activates the :guilabel:`register` button |image27|).

Then, you can save your context in database by clicking on the
:guilabel:`register` button |image28|.

Doing so will deactivate the :guilabel:`register` button and activate the
:guilabel:`launch snapshot` button |image29|.

You can save your context in a file using the :guilabel:`save`
icon |image30|.

Alternate way (table)
^^^^^^^^^^^^^^^^^^^^^

To select this alternate way, go to :guilabel:`tools` menu and select
:guilabel:`options`.

Then select the :guilabel:`context` tab and click on the :guilabel:`table` radio button.

.. _bensikin_fig_8:
.. figure:: bensikin/image28.png

   Figure 8: Option –context tab

Click on the :guilabel:`ok` button. The context panel now has the “table
selection mode”.

.. _bensikin_fig_9:
.. figure:: bensikin/image80.png

   Figure 9: Bensikin with context table selection mode (new context)

-  Attribute selection and automatic attributes adding:

   -  Choose a Domain. This refreshes the list of possible Device
      classes for this Domain.

   -  Choose a Device class. This refreshes the list of possible
      Attributes for this Domain and Device class.

   -  Choose an Attribute and press :guilabel:`OK`:

      All Attributes with the selected name **AND** belonging to any
      Device of the selected Class and Domain are added to the current
      Context’s list of attributes.

   All new attributes are light red until the Context is registered.

-  Line level sub-selection of loaded attributes:

   Each attributes are initially checked, but this check can be removed
   by the user. When the user clicks on :guilabel:`validate`, all unchecked
   attributes will be removed from the current Context.

   -  Click :guilabel:`All` to select all lines

   -  Click :guilabel:`None` to select no lines

   -  Highlight lines in the list (CTRL and SHIFT are usable), then click
      :guilabel:`Reverse highlighted` to reverse the checked/unchecked status of
      all highlighted lines.

As for the classic way, you will have to fill the Meta data fields
and register your context in database by clicking on the :guilabel:`register`
button |image34|

Modifying an existing context
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

As a matter of fact, you can’t really “modify” a context. What you
can do is to create a new context with its information (attributes
and Meta data) based on another one.

The very difference is in alternate mode, where former attributes
are in white and new ones in light red:

.. _bensikin_fig_10:
.. figure:: bensikin/image81.png

   Figure 10: Bensikin with context table selection mode (modified
   context)

The “register” button changed a little too: its text is :guilabel:`Register this context`
instead of “Register this new context”, as you can see
on the figure above.

Loading a context
~~~~~~~~~~~~~~~~~

There are 2 ways to load a context:

-  Load it from the database

-  Load it from a file

In both cases, loading a context will apply a quick filter on the
snapshot list, so you can see the snapshots about this context that
have been created this day (the day when you load the context).

Loading a context from database
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

In the :guilabel:`Contexts` menu, choose :guilabel:`load` then select :guilabel:`DB`:

|image36|

A dialog will then appear to allow you to filter the list of
contexts in database following different criteria:

.. _bensikin_fig_11:
.. figure:: bensikin/image32.PNG

   Figure 11: Data base Context filter dialog

Select no criterion to search for all contexts present in database.
Click on the |image38| button to apply the filter. The list of
corresponding contexts will then appear in the Context List sub
panel, as shown in :ref:`Figure 6: Context control panel <bensikin_fig_6>`. Double click
on a context in table to load it and see its details in the Context
Details sub panel (See :ref:`Figure 6: Context control panel <bensikin_fig_6>`).

If there are too many contexts in the list, you can remove some
contexts from list (not from database) by selecting them in list and
clicking on the cross on the top right corner of the list
(|image39|).

Loading a context from file
^^^^^^^^^^^^^^^^^^^^^^^^^^^

In the :guilabel:`Contexts` menu, choose :guilabel:`load` then select :guilabel:`File`, or in
:guilabel:`File` menu choose :guilabel:`load` then select :guilabel:`Context`:

|image40| |image41|

A classic file browser will appear. Search for your “.ctx” file and
select it to load the corresponding context in the :guilabel:`Context Details`
sub panel (See :ref:`Figure 6: Context control panel <bensikin_fig_6>`).

Printing a context
~~~~~~~~~~~~~~~~~~

Once you have context ready, click on the :guilabel:`print` icon (|image42|)
and select :guilabel:`context`:

|image43|

The classic print dialog will then appear. Validate your print
configuration to print an xml representation of your context.

User can also print context by pressing the button |image44|

Saving a context
~~~~~~~~~~~~~~~~

Once you have context ready, click on the :guilabel:`save` icon (|image45|)
and select :guilabel:`context`:

|image46|

You can also go to menu :guilabel:`Contexts` and click on :guilabel:`save`, or go to
menu :guilabel:`File`, select :guilabel:`Save` and click on :guilabel:`Context`.

|image47| |image48|

Then, the behavior is “Word-like”. This means that if this is the
first time you save this context, you will see the classic file
browser to choose where to save your context, with file name.
However, else, it will automatically save in the corresponding file.
If you want to save in another file, you have to go to :guilabel:`File` menu,
select :guilabel:`Save As` and click on :guilabel:`Context` or go to :guilabel:`Contexts` menu and
click on :guilabel:`Save As`

|image49| |image50|

Snapshot Management
-------------------

This section describes how to control snapshots with Bensikin. A
Snapshot is a view of your equipment at a precise date, view based on a
context. A Snapshot has an ID, a creation date (Time), and a comment to
describe it (which can be left empty).

Snapshots are managed in the snapshot control panel:

.. _bensikin_fig_12:
.. figure:: bensikin/image45.png

   Figure 12: Snapshot control panel

.. _creating_a_new_snapshot:

Creating a new snapshot
~~~~~~~~~~~~~~~~~~~~~~~

To create a new snapshot, first select a valid context in the
context control panel (see :ref:`Figure 6: Context control panel <bensikin_fig_6>`). Then
click on the button |image52|. The corresponding snapshot is added
in the list of snapshots in the Snapshot List sub panel.

Loading a snapshot
~~~~~~~~~~~~~~~~~~

There are 2 ways to load a snapshot:

-  Load it from the database

-  Load it from a file

Loading a snapshot from database
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Loading a snapshot from database consists in adding this snapshot in
the list of snapshots in the Snapshot List sub panel.

As you can see in :ref:`Figure 12: Snapshot control panel <bensikin_fig_12>`,
the :guilabel:`Snapshot List` sub panel allows you to filter snapshots from database to find
the snapshot you want to load. However, have in mind that this
filter is “context dependent”, which means that the snapshots which
will appear in the list by clicking on the :guilabel:`filter` button
(|image53|) are the one that correspond to your filter criteria
**AND** the selected context in the :guilabel:`Context Control Panel`. If the
filter is cleared (which you can obtain by clicking on the
button |image54|), you will search for all the snapshots in
database that correspond to the selected context.

Loading a snapshot from file
^^^^^^^^^^^^^^^^^^^^^^^^^^^^

In the :guilabel:`Snapshots` menu, choose :guilabel:`load` then select :guilabel:`File`, or in
:guilabel:`File` menu choose :guilabel:`load` then select :guilabel:`Snapshot`:

|image55| |image56|

A classic file browser will appear. Search for your “.snap” file and
select it to load the corresponding snapshot in the Snapshot Details
sub panel (See :ref:`Figure 12: Snapshot control panel <bensikin_fig_12>`)

Editing a snapshot
~~~~~~~~~~~~~~~~~~

To edit a snapshot, double click on the snapshot you want to edit in
the snapshot list (in the :guilabel:`Snapshot List` sub panel). This will open a
new tab about this snapshot in the Snapshot Details sub panel, tab
named by this snapshot ID. If you load a snapshot from file, the
name of the tab is the name of the file. To differentiate snapshots
loaded from file and the ones loaded from database, the snapshot
loaded from file tabs have the icon |image57|.

Setting equipment with a snapshot
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

A snapshot allows you to set equipment with its attributes write
values. You can choose which attributes will set equipment, and
which not, by selecting or unselecting the corresponding check box
in the column :guilabel:`Can Set Equipment`
(See :ref:`Figure 12: Snapshot control panel <bensikin_fig_12>`).
By default, every attribute is selected. If you unselect
some attributes, an icon |image58| will appear in tab title to
notify you that these attributes will not set equipments. You can
quick select/unselect all the attributes by clicking on :guilabel:`All`
and :guilabel:`None` buttons. When you are ready to set equipment with the
selected write values, click on the button |image61|.

You can also modify the write value before setting equipment by
editing it in the table. If you do so, the value becomes red and an
|image62| icon appears to warn you about the fact that you made
modifications in this snapshot (these modifications will not be
saved in database, they are just here to set equipment).

.. _bensikin_fig_13:
.. figure:: bensikin/image54.png

   Figure 13: Modified snapshot

Snapshot comparison
~~~~~~~~~~~~~~~~~~~

There are 2 ways to compare snapshots:

-  Compare a snapshot with another one:

   To do so, select a tab in Snapshot Details sub panel
   (:ref:`Figure 12: Snapshot control panel <bensikin_fig_12>`).
   Click on button |image64|. You will
   see the tab title of this attribute appear in the field
   “1 :sup:`st` snapshot”. Select another tab and click again on
   |image65| button to put this attribute tab title in the field
   “2 :sup:`nd` snapshot”. Click then on |image66| button to see the
   comparison between these 2 snapshots.

   If user wants to see only the first line of comparison, he must
   check filter |image67|

   Else if he/she wants to see all the details of the comparison,
   he/she must check |image68|

   .. _bensikin_fig_14:
   .. figure:: bensikin/image57.png

      Figure 14: Snapshot comparison - full table

   To print this comparison table, click on :guilabel:`Print` button.

-  Compare a snapshot with current state:

   To compare a snapshot with current state, set this snapshot as
   “1 :sup:`st` snapshot”, as explained above, and leave the
   “2 :sup:`nd` snapshot” empty. Note that once the “1 :sup:`st`
   snapshot is selected, you only can update the “2 :sup:`nd` snapshot
   or clear the comparison selection. To do so, click on the
   button |image70|. What is hidden behind this is a creation of a
   snapshot, named “BENSIKIN\_AUTOMATIC\_SNAPSHOT”, and you compare
   this snapshot with your snapshot. Have in mind that this automatic
   snapshot is registered in database. So, in the comparison table, the
   current state will appear as the second snapshot with the name
   “Current state” (red block in the comparison table).

Snapshot Details copy
~~~~~~~~~~~~~~~~~~~~~

As you can see in :ref:`Figure 12: Snapshot control panel <bensikin_fig_12>`,
snapshots are detailed in a table. You can copy this table to clipboard as a
text-CSV formatted table by clicking on |image71| or |image72|
button. If you want to see this text result and may be filter it
(like removing lines), click on |image73| button. You will see the
text appear in a dialog.

.. _bensikin_fig_15:
.. figure:: bensikin/image59.png

   Figure 15: Snapshot edit clipboard dialog

Modifying a snapshot comment
~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Once your snapshot details are loaded, click on |image75| button to
modify its comment (and save it in database or file).

Printing a snapshot
~~~~~~~~~~~~~~~~~~~

Once you have context ready, click on the :guilabel:`print` icon (|image76|)
and select :guilabel:`snapshot`:

|image77|

The classic print dialog will then appear. Validate your print
configuration to print an xml representation of your snapshot.

Saving a snapshot
~~~~~~~~~~~~~~~~~

Once you have context ready, click on the :guilabel:`save` icon (|image78|)
and select :guilabel:`snapshot`:

|image79|

You can also go to menu :guilabel:`Context` and click on :guilabel:`Save`, or go to menu
:guilabel:`File -> Save -> Snapshot`.

Then, the behavior is “Word-like”. This means that if this is the
first time you save this snapshot, you will see the classic file
browser to choose where to save your snapshot, with file name.
However, if not, it will automatically save in the corresponding
file. If you want to save in another file, you have to go to :guilabel:`File`
menu, select :guilabel:`Save As` and click on :guilabel:`Snapshot`, or go to :guilabel:`Snapshots`
menu and click on :guilabel:`Save As`.

|image82| |image83|

Favorites
---------

Bensikin manages a list of favorite context, so you can quickly switch
to anyone of them. Those favorites are saved at application shutdown and
loaded on startup.

Adding a context to favorites
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

To add a context to your favorites, have your context ready by
creating or loading it. Then go to :guilabel:`Favorites` menu and click on
:guilabel:`Add selected context`.

|image84|

Switching to a context in favorites
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

To switch to a context in favorites, which means to load it from
favorites, go to “Favorites” menu, select “contexts”, and click on
the context you want to load.

|image85|

Options
-------

Bensikin manages global options. Those options are saved at application
shutdown, and loaded on startup. The Options menu is located in the Menu
bar: :guilabel:`Tools -> Options`.

Application’s history save/load Options
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Define whether Bensikin has a history, i.e. a persistent state when
closed/reopened.

If yes is checked, a XML History file will be saved in Bensikin’s
workspace, and on next startup the current Context and Snapshot will
be loaded.

.. _bensikin_fig_16:
.. figure:: bensikin/image69.png

   Figure 16: Save option

Snapshot Options
~~~~~~~~~~~~~~~~

These are the Bensikin Snapshot Options:

.. _bensikin_fig_17:
.. figure:: bensikin/image70.png

   Figure 17: Snapshot options

-  In the Comment Panel, you can choose to automatically set or not a
   value to a new snapshot comment. This means, when you click on
   |image89| button, the newly created snapshot will or will not have a
   pre-defined comment.

-  In the :guilabel:`Comparison Panel`, you can choose which columns you want to
   show/hide for every block in the Snapshot Comparison table. You can
   choose to show/hide the Difference block too (See
   :ref:`Figure 14: Snapshot comparison - full table <bensikin_fig_14>`)

-  In the :guilabel:`Export Panel`, you can choose the column separator for your
   text-CSV formatted tables
   (See :ref:`Figure 15: Snapshot edit clipboard dialog <bensikin_fig_15>`),
   and which columns to export.

Context Options
~~~~~~~~~~~~~~~

Context options allow you to select which way you want to edit your
contexts, see :ref:`Figure 8: Option –context tab <bensikin_fig_8>`
and the :ref:`Creating a new snapshot <creating_a_new_snapshot>` section.

Print Options
~~~~~~~~~~~~~

The Print option allows you to print text or table in the Snapshots
or in the Contexts.

.. _bensikin_fig_18:
.. figure:: bensikin/image71.PNG

   Figure 18: Print option

When you check |image91|, you adapt the size of your print to the
size of your page.

When you check |image92|, you cut the length of your print on
several parts and the width of your print takes the width of your
page.

When you check |image93|, the length and the width of your print
are cut on several parts.

The Bensikin toolbar
--------------------

The toolbar is located under the menu bar, and consists mainly of a set
of shortcuts to often used functionalities.

.. _bensikin_fig_19:
.. figure:: bensikin/image84.png

   Figure 19: Bensikin toolbar

-  |image101| is a shortcut to creating a new Context

-  |image102| is a shortcut to saving the selected Context/Snapshot into
   a Context/Snapshot file

-  |image103| is a shortcut to doing a saving all opened Contexts and
   Snapshots

-  |image104| is a shortcut to printing the xml representation of the
   current Context/Snapshot

-  |image105| is a shortcut to removing all opened Contexts and
   Snapshots from display


.. |image0| image:: bensikin/image4.png
   :width: 1.50000in
   :height: 0.75000in
.. |image1| image:: bensikin/image5.png
   :width: 4.60417in
   :height: 2.06250in
.. |image2| image:: bensikin/image6.png
   :width: 6.30208in
   :height: 3.89583in
.. |image3| image:: bensikin/image7.PNG
   :width: 1.71899in
   :height: 0.23962in
.. |image4| image:: bensikin/image8.png
   :width: 0.17708in
   :height: 0.15625in
.. |image5| image:: bensikin/image9.PNG
   :width: 1.45854in
   :height: 0.29171in
.. |image6| image:: bensikin/image10.png
   :width: 1.04167in
   :height: 0.19792in
.. |image7| image:: bensikin/image11.png
   :width: 3.18795in
   :height: 1.37519in
.. |image8| image:: bensikin/image12.png
   :width: 0.82292in
   :height: 0.23958in
.. |image9| image:: bensikin/image13.PNG
   :width: 0.43756in
   :height: 0.23962in
.. |image10| image:: bensikin/image14.PNG
   :width: 0.66676in
   :height: 0.21878in
.. |image11| image:: bensikin/image8.png
   :width: 0.17708in
   :height: 0.15625in
.. |image12| image:: bensikin/image15.png
   :width: 4.60481in
   :height: 2.06279in
.. |image13| image:: bensikin/image5.png
   :width: 1.75144in
   :height: 0.28902in
.. |image14| image:: bensikin/image5.png
   :width: 4.60417in
   :height: 2.06250in
.. |image15| image:: bensikin/image5.png
   :width: 1.05660in
   :height: 0.26415in
.. |image16| image:: bensikin/image16.png
   :width: 5.52239in
   :height: 5.98456in
.. |image17| image:: bensikin/image17.png
   :width: 0.20833in
   :height: 0.20833in
.. |image18| image:: bensikin/image18.png
   :width: 2.65625in
   :height: 1.84601in
.. |image19| image:: bensikin/image19.png
   :width: 2.65300in
   :height: 1.84375in
.. |image20| image:: bensikin/image20.png
   :width: 0.20833in
   :height: 0.20833in
.. |image21| image:: bensikin/image21.png
   :width: 6.30000in
   :height: 4.53491in
.. |image22| image:: bensikin/image20.png
   :width: 0.20833in
   :height: 0.20833in
.. |image23| image:: bensikin/image17.png
   :width: 0.20833in
   :height: 0.20833in
.. |image24| image:: bensikin/image22.png
   :width: 0.16667in
   :height: 0.16667in
.. |image25| image:: bensikin/image23.png
   :width: 0.17708in
   :height: 0.17708in
.. |image26| image:: bensikin/image23.png
   :width: 0.17708in
   :height: 0.17708in
.. |image27| image:: bensikin/image24.PNG
   :width: 1.71899in
   :height: 0.35422in
.. |image28| image:: bensikin/image24.PNG
   :width: 1.71899in
   :height: 0.35422in
.. |image29| image:: bensikin/image25.PNG
   :width: 1.21892in
   :height: 0.31254in
.. |image30| image:: bensikin/image26.png
   :width: 0.20833in
   :height: 0.20833in
.. |image31| image:: bensikin/image27.png
   :width: 1.00000in
   :height: 0.85417in
.. |image32| image:: bensikin/image28.png
   :width: 5.18750in
   :height: 7.02083in
.. |image33| image:: bensikin/image29.png
   :width: 4.23881in
   :height: 4.33692in
.. |image34| image:: bensikin/image24.PNG
   :width: 1.71899in
   :height: 0.35422in
.. |image35| image:: bensikin/image30.png
   :width: 4.91791in
   :height: 5.25113in
.. |image36| image:: bensikin/image85.png
   :width: 2.12500in
   :height: 1.50000in
.. |image37| image:: bensikin/image32.PNG
   :width: 6.30000in
   :height: 1.91319in
.. |image38| image:: bensikin/image33.PNG
   :width: 0.80219in
   :height: 0.28129in
.. |image39| image:: bensikin/image34.png
   :width: 0.12500in
   :height: 0.14583in
.. |image40| image:: bensikin/image86.png
   :height: 1.7in

.. |image41| image:: bensikin/image87.png
   :height: 1.7in

.. |image42| image:: bensikin/image37.png
   :width: 0.20833in
   :height: 0.20833in
.. |image43| image:: bensikin/image88.png
   :width: 2.25000in
   :height: 1.40625in

.. |image44| image:: bensikin/image39.PNG
   :width: 0.28129in
   :height: 0.23962in
.. |image45| image:: bensikin/image26.png
   :width: 0.20833in
   :height: 0.20833in
.. |image46| image:: bensikin/image89.png
   :height: 1.3in
.. |image47| image:: bensikin/image90.png
   :height: 1.6in
.. |image48| image:: bensikin/image91.png
   :height: 1.6in
.. |image49| image:: bensikin/image92.png
   :height: 1.6in
.. |image50| image:: bensikin/image93.png
   :height: 1.6in
.. |image51| image:: bensikin/image45.png
   :width: 6.87008in
   :height: 5.22917in
.. |image52| image:: bensikin/image83.png
   :width: 1.14583in
   :height: 0.23958in
.. |image53| image:: bensikin/image94.png
   :width: 0.51042in
   :height: 0.25000in
.. |image54| image:: bensikin/image95.png
   :width: 1.29167in
   :height: 0.22917in
.. |image55| image:: bensikin/image96.png
   :width: 1.67708in
   :height: 1.90625in
.. |image56| image:: bensikin/image97.png
   :width: 3.05208in
   :height: 1.91667in
.. |image57| image:: bensikin/image50.png
   :width: 0.15625in
   :height: 0.17708in
.. |image58| image:: bensikin/image51.png
   :height: 0.13542in
.. |image59| image:: bensikin/image52.png
   :width: 0.17708in
   :height: 0.19792in
.. |image60| image:: bensikin/image52.png
   :width: 0.33333in
   :height: 0.19792in
.. |image61| image:: bensikin/image98.png
   :width: 1.09375in
   :height: 0.28125in
.. |image62| image:: bensikin/image53.png
   :width: 0.12500in
   :height: 0.12500in
.. |image63| image:: bensikin/image54.png
   :width: 6.74627in
   :height: 3.65423in
.. |image64| image:: bensikin/image99.png
   :width: 0.94792in
   :height: 0.20833in
.. |image65| image:: bensikin/image99.png
   :width: 0.94792in
   :height: 0.20833in
.. |image66| image:: bensikin/image100.png
   :width: 0.70833in
   :height: 0.20833in
.. |image67| image:: bensikin/image55.PNG
   :width: 0.51049in
   :height: 0.23962in
.. |image68| image:: bensikin/image56.PNG
   :width: 0.78136in
   :height: 0.21878in
.. |image69| image:: bensikin/image57.png
   :width: 6.30000in
   :height: 2.61319in
.. |image70| image:: bensikin/image101.png
   :width: 1.29167in
   :height: 0.25000in
.. |image71| image:: bensikin/image102.png
   :height: 0.3in
.. |image72| image:: bensikin/image58.PNG
   :height: 0.3in
.. |image73| image:: bensikin/image104.png
   :height: 0.3in
.. |image74| image:: bensikin/image59.png
   :width: 5.31324in
   :height: 2.19822in
.. |image75| image:: bensikin/image105.png
   :height: 0.3in
.. |image76| image:: bensikin/image37.png
   :width: 0.20833in
   :height: 0.20833in
.. |image77| image:: bensikin/image61.png
   :height: 1.33333in
.. |image78| image:: bensikin/image26.png
   :width: 0.20833in
   :height: 0.20833in
.. |image79| image:: bensikin/image82.png
   :height: 1.3in
.. |image80| image:: bensikin/image63.png
   :width: 1.45833in
   :height: 1.64583in
.. |image81| image:: bensikin/image64.png
   :width: 2.12500in
   :height: 1.63542in
.. |image82| image:: bensikin/image65.png
   :width: 1.45833in
   :height: 1.59375in
.. |image83| image:: bensikin/image66.png
   :width: 2.17708in
   :height: 1.55208in
.. |image84| image:: bensikin/image67.png
   :width: 3.13542in
   :height: 1.04167in
.. |image85| image:: bensikin/image68.png
   :width: 3.13542in
   :height: 1.04167in
.. |image86| image:: bensikin/image27.png
   :width: 1.00000in
   :height: 0.85417in
.. |image87| image:: bensikin/image69.png
   :width: 4.84416in
   :height: 5.63919in
.. |image88| image:: bensikin/image70.png
   :width: 4.89583in
   :height: 6.98958in
.. |image89| image:: bensikin/image83.png
   :width: 1.14583in
   :height: 0.23958in
.. |image90| image:: bensikin/image71.PNG
   :width: 4.81944in
   :height: 6.75885in
.. |image91| image:: bensikin/image72.PNG
   :width: 0.68760in
   :height: 0.45840in
.. |image92| image:: bensikin/image73.PNG
   :width: 1.22934in
   :height: 0.59383in
.. |image93| image:: bensikin/image74.PNG
   :width: 0.60425in
   :height: 0.48965in
.. |image94| image:: bensikin/image74.PNG
   :width: 0.32738in
   :height: 0.36309in
.. |image95| image:: bensikin/image73.PNG
   :width: 0.84226in
   :height: 0.37798in
.. |image96| image:: bensikin/image75.png
   :width: 1.24583in
   :height: 1.49375in
.. |image97| image:: bensikin/image76.png
   :width: 2.34328in
   :height: 2.80564in
.. |image98| image:: bensikin/image72.PNG
   :width: 0.47321in
   :height: 0.37202in
.. |image99| image:: bensikin/image77.png
   :width: 1.15951in
   :height: 1.38829in
.. |image100| image:: bensikin/image21.png
   :width: 6.84481in
   :height: 4.92708in
.. |image101| image:: bensikin/image17.png
   :width: 0.20833in
   :height: 0.20833in
.. |image102| image:: bensikin/image26.png
   :width: 0.20833in
   :height: 0.20833in
.. |image103| image:: bensikin/image78.png
   :width: 0.20833in
   :height: 0.20833in
.. |image104| image:: bensikin/image37.png
   :width: 0.20833in
   :height: 0.20833in
.. |image105| image:: bensikin/image20.png
   :width: 0.20833in
   :height: 0.20833in
