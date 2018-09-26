.. _patches:

Patches
=======

:audience:`developers, administrators`

To apply any patches downloaded from this page, first go to the directory where Tango source distribution has been extracted
e.g. *cd ~/tango-9.2.2*, then type the command :

.. code-block:: console

       patch -p1 <"patch_file"


Version 9.2.5 source patches
----------------------------

omniORB 4.2 bug (described in `bug 794 <https://sourceforge.net/p/tango-cs/bugs/794/>`_) is fixed if you apply
`this patch file <http://ftp.esrf.fr/pub/cs/tango/Patches/dii_race.patch>`_ to omniORB 4.2.

To apply this patch, copy the patch file to the directory where you extracted omniORB e.g. ~/omniORB-4.2.1, then type the command:

.. code-block:: console

       patch -p0 < dii_race.patch


Version 9.2.2 source patches
----------------------------

`Bug 787 <https://sourceforge.net/p/tango-cs/bugs/787/>`_,
`Bug 788 <https://sourceforge.net/p/tango-cs/bugs/788/>`_,
`Bug 789 <https://sourceforge.net/p/tango-cs/bugs/789/>`_,
`Bug 790 <https://sourceforge.net/p/tango-cs/bugs/790/>`_,
`Bug 791 <https://sourceforge.net/p/tango-cs/bugs/791/>`_ and
`Bug 792 <https://sourceforge.net/p/tango-cs/bugs/792/>`_ are all fixed if you apply `this patch file <http://ftp.esrf.fr/pub/cs/tango/Patches/p922_1.diff>`_.

Then go to your build directory and run *make* followed by *make install*.


Version 9.1.0 source patches
----------------------------

`Bug 745 <https://sourceforge.net/p/tango-cs/bugs/745/>`_,
`Bug 748 <https://sourceforge.net/p/tango-cs/bugs/748/>`_,
`Bug 749 <https://sourceforge.net/p/tango-cs/bugs/748/>`_,
`Bug 752 <https://sourceforge.net/p/tango-cs/bugs/752/>`_ and
`Bug 753 <https://sourceforge.net/p/tango-cs/bugs/753/>`_
are all fixed if you apply `this patch file <ftp.esrf.fr/pub/cs/tango/Patches/p910_2.diff>`_.

Then go to your build directory and run *make* followed by *make install*.
As usual, this patch assumes the previous patch(es) for the Tango release has been already applied.

`Bug 741 <https://sourceforge.net/p/tango-cs/bugs/741/>`_ is fixed if you apply `this patch file <http://ftp.esrf.fr/pub/cs/tango/Patches/p910_1.diff>`_.
Then go to your build directory and run *make* followed by *make install*.


Version 8.1.2 source patches
----------------------------

`Bug 662 <https://sourceforge.net/p/tango-cs/bugs/662/>`_,
`Bug 663 <https://sourceforge.net/p/tango-cs/bugs/663/>`_:
These two bugs are fixed if you apply `this patch file <http://ftp.esrf.fr/pub/cs/tango/Patches/p812_4.diff>`_.
Then go to your build directory and run *make* followed by *make install*.

This patch supposed that previous one (`p812_3.diff <http://ftp.esrf.fr/pub/cs/tango/Patches/p812_3.diff>`_) has been already applied.

`Bug 646 <https://sourceforge.net/p/tango-cs/bugs/646/>`_:
This bug is  fixed if you apply `this patch file <http://ftp.esrf.fr/pub/cs/tango/Patches/p812_3.diff>`_.
Then go to your build directory and run *make* followed by *make install*.

This patch supposed that previous one (`p812_2.diff <http://ftp.esrf.fr/pub/cs/tango/Patches/p812_2.diff>`_) has been already applied.

`Bug 631 <https://sourceforge.net/p/tango-cs/bugs/631/>`_,
`Bug 632 <https://sourceforge.net/p/tango-cs/bugs/632/>`_,
`Bug 638 <https://sourceforge.net/p/tango-cs/bugs/638/>`_:
These 3 bugs are all fixed if you apply `this patch file <http://ftp.esrf.fr/pub/cs/tango/Patches/p812_2.diff>`_.
Then go to your build directory and run *make* followed by *make install*.

`Bug 624 <https://sourceforge.net/p/tango-cs/bugs/624/>`_,
`Bug 625 <https://sourceforge.net/p/tango-cs/bugs/625/>`_:
These 2 bugs are all fixed if you apply `this patch file <http://ftp.esrf.fr/pub/cs/tango/Patches/p812_1.diff>`_.
Then go to your build directory and run *make* followed by *make install*.


Version 8.0.5 source patches
----------------------------

`Bug 528 <https://sourceforge.net/p/tango-cs/bugs/528/>`_,
`Bug 530 <https://sourceforge.net/p/tango-cs/bugs/530/>`_,
`Bug 531 <https://sourceforge.net/p/tango-cs/bugs/531/>`_,
`Bug 533 <https://sourceforge.net/p/tango-cs/bugs/533/>`_,
`Bug 534 <https://sourceforge.net/p/tango-cs/bugs/534/>`_,
`Bug 536 <https://sourceforge.net/p/tango-cs/bugs/536/>`_:
These 6 bugs are all fixed if you apply `this patch file <http://ftp.esrf.fr/pub/cs/tango/Patches/p805_1.diff>`_.
Then go to your build directory and run *make* followed by *make install*.

`Bug 545 <https://sourceforge.net/p/tango-cs/bugs/545/>`_,
`Bug 546 <https://sourceforge.net/p/tango-cs/bugs/546/>`_:
These 2 bugs and some DeviceProxy class thread safety issues are all fixed if you apply `this patch file <http://ftp.esrf.fr/pub/cs/tango/Patches/p805_2.diff>`_.
Then go to your build directory and run *make* followed by *make install*.
