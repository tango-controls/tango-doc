SNAP
====

:audience:`administrators, users, developers`

The SNAP is set of device servers and an GUI application (:program:`Bensikin`) providing
so called SNAPshot functionality.

A snapshot is, as said in the name, a “picture” of a list of equipment’s
“settings” (*more precisely of their Tango attributes values*) taken
at a precise instant.

Snapshot are stored in a database (:program:`MySQL` or :program:`Oracle`).
These can be retrieved and restored to the equipment (devices).
This kind of functionality is often called a *recipe management*.
It allows to create set of configuration settings (*recipes*) used for
particular purposes (like selected mode of accelerator operation).

.. toctree::
   :maxdepth: 2
   :name: snaptoc

   bensikin