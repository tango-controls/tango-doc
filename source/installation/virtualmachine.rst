.. _vm:

Virtual Machine
===============

:audience:`developers, administrators, users`

The purpose of the **TANGO Box Virtual Machine** is to give you a fast,
out-of-the-box experience of a working TANGO system.
There is a set of shortcuts to all essential TANGO tools on the virtual machine desktop.
Together with the introductory video and user manual,
that allow you to experience the power and elegance of a fully configured
TANGO system with all the latest tools first hand. After this "guided tour" of the TANGO system,
TANGO Box is an excellent tool to make further explorations on your own,
to use it for demonstration purposes, to make studies,
proof-of-concepts and even production ready systems.

This way, out of this virtual box, another great, sophisticated control system for the real world can be born!

TangoBox 9.3
------------

The latest release of TangoBox is based on Tango Controls v9.3.3 installed on 64 bit Ubuntu 18.04.

* You may download it from
  `here <https://s2innovation.sharepoint.com/:f:/s/Developers/EovD2IBwhppAp-ZLXtawQ6gB9F6aXPPs2msr2hgPGTO-FQ?e=Ii3tnr>`_.
* Please read :doc:`Tango Controls demo VM’s documentation <vm/tangobox>`.
* See also `a release note <https://github.com/tango-controls/tangobox/releases/tag/v9.3.3>`_
  and `README <https://github.com/tango-controls/tangobox/blob/develop/README.md>`_.

Minimum Requirements
~~~~~~~~~~~~~~~~~~~~
  * 2vCPU
  * 2GB (preferred 4GB) RAM
  * 30GB of disk space

TangoBox 9.3 on the Amazon cloud
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

The TangoBox 9.3 release is also available as an AMI image on the AWS (Ireland region). The related AMI-ID is:

.. code-block:: console

   ami-0a2e0cddaa68be39f

Please refer to :doc:`Amazon Cloud <amazon-cloud>`.

Previous versions
-----------------

Previous versions are available below.

TangoBox 9.2
~~~~~~~~~~~~

    * Download 64 bit `Ubuntu virtual machine with TANGO 9.2 RC11 <http://ftp.esrf.fr/pub/cs/tango/TangoBox-9.2_RC11.ova>`_.

    * Please read :doc:`TangoBox 9.2 documentation <vm/tangobox-9.2>`.

Elder versions
~~~~~~~~~~~~~~

    * Download 64 bit `Ubuntu virtual machine with TANGO 9.1.0 <https://sourceforge.net/projects/tango-cs/files/vm/>`_.

      .. note::

         * Use `this link <https://sourceforge.net/projects/tango-cs/files/Tango9_VM.pdf/download>`_ to download and read the documentation
           to install and run the virtual machine on your desktop.
         * Use 7z to unzip it on Linux or unzip on Windows.

    * `download <https://sourceforge.net/projects/tango-cs/files/tango_vbox_3_0rc5.7z/download>`_ the 32 bit version running TANGO 7 on Ubuntu 11
    * a preconfigured `TANGO 8.1.2 64b ubuntu vdi <http://dl.free.fr/dWfRMq6Xe>`_ (1.4 GB, for 64 virtual machine)

.. note::  Read `the manual <https://sourceforge.net/projects/tango-cs/files/Tango%20Box%20Virtual%20Machine%20User%20Manual.pdf/download>`_ to know more.


We recommend the following videos about TANGO which will help you learn more about TANGO Controls.

..  raw:: html

        <iframe src="https://player.vimeo.com/video/79554181" width="640" height="360" frameborder="0" webkitallowfullscreen mozallowfullscreen allowfullscreen></iframe>
        <p><a href="https://vimeo.com/79554181">TangoBoxVM Intro Movie</a> from <a href="https://vimeo.com/user9935158">Tango Controls</a> on <a href="https://vimeo.com">Vimeo</a>.</p>

.. toctree::
   :glob:
   :maxdepth: 1
   :hidden:

   vm/*

