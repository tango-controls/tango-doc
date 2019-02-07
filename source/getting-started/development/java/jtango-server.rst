.. _getting_started_with_jtango_server:

Developing your first Java TANGO device class
=============================================

:audience:`beginner developers`, :lang:`java`

In this section we describe how one can start developing Tango device server using Java.

Three methods will be described:

  1. Using jtango-maven-archetype
  2. Using POGO
  3. Starting from scratch

**Prerequisites**

  - Java >1.7
  - Maven >3
  - Tango-Controls environment (Tango Database aka Tango host is deployed)

Using jtango-maven-archetype
~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Perhaps the simplest way to start to develop your first Tango device server in Java is to use jtango-maven-archetype.

Maven is an Apache project and it is widely used in Java development nowdays. More information can be found in the Internet. Here we just name main features of Maven:

First of all Maven is a build system, i.e. it automatizes the build process of the project. As Maven is a plugin platform various plugins are used to achieve the desired result e.g. define compilation target (aka :command:`javac -target 1.8`) or package the project into a single executable jar.

Secondly Maven automatically manages dependencies (required versions are being automatically downloaded from so called Maven central repository from the Internet).

Finally Maven provides a way to generate skeleton projects. This section is based on this feature.

So to start execute the following command:

.. code-block:: console

   $> mvn archetype:generate \
         -DarchetypeGroupId=org.tango-controls \
         -DarchetypeArtifactId=jtango-maven-archetype \
         -DarchetypeVersion=1.4

This command generates skeleton project using special Maven artifact that defines the template of the project. While generating new project you have to define several properties:

- **groupId** -- target project's groupId. Typically it is reversed domain name of the company e.g. com.company
- **artifactId** -- target project's artifactId. This is can be considered as the name of the target executable. This value must follow java class naming conventions e.g. *MyDevice*
- **version** -- target project version. Simply the first version of the project e.g. *1.0-SNAPSHOT*
- **package** -- Java package for newly generated class. Typically can be left as default i.e. **groupId**
- **license** -- name of the license under which the project is distributed e.g. *LGPL-3*, *GPL*, *MIT* etc
- **organization** -- name of the organization that maintains the project e.g. *Company*
- **organization-url** -- organization's URL e.g. *http://www.company.com*
- **author-name** -- name of the author/maintainer e.g. *JoeDoe*
- **author-email** -- author/maintainer's email e.g. *joe.doe@company.com*
- **facility** -- facility at which project is being developed e.g. *DESY*, *ESRF*, etc
- **platform** -- Windows, MacOS, Unix/Linux etc. Typically Java projects will have *All* in this property
- **family** -- as in POGO. Typically Java high level projects will have *SoftwareSystem* in this property
- **bus** -- bus to the device (underlying hardware) e.g. *Serial*. For Java this might be *NA* if there is no real hardware associated with this Tango server.
- **jtango-version** -- a version of JTango dependency or *LATEST* if you are know what are you doing. 

Latest version of JTango is 

.. image:: https://api.bintray.com/packages/tango-controls/jtango/JTango/images/download.svg
   :target: https://bintray.com/tango-controls/jtango/JTango/_latestVersion
   :alt: JTango latest version

The following output indicates that project has been successfully generated:

.. code-block:: console

  [INFO] ------------------------------------------------------------------------
  [INFO] BUILD SUCCESS
  [INFO] ------------------------------------------------------------------------

Now you can goto to the project folder and build it:

.. code-block:: console

  $>cd MyDevice
  $>mvn package
  $>java -jar target/MyDevice-1.0-SNAPSHOT.jar development

Assuming that Tango-Controls environment is set up properly (TODO ref) and MyDevice/development (TODO ref) server is defined in the Tango Database the later command will start the device server.

Now using your favorite IDE open the newly generated project and develop your JTango server. Please read more in `JTango documentation`_.

Using POGO
~~~~~~~~~~

See :doc:`POGO documentation <../../../tools-and-extensions/pogo/index>`.

Starting from scratch
~~~~~~~~~~~~~~~~~~~~~

Example Java device and detailed documentation can be found in the
`JTango documentation`_.


.. _JTango documentation: https://jtango.readthedocs.io/en/latest/
