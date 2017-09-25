.. How-To Java with Astor

Integrate Java Tango servers with Astor
=======================================

Problem overview
----------------

One wants to control Java Tango servers using Astor after deployment.

Detailed cases
--------------

Simplify deployment and integration of new Java Tango servers with existing Tango environment. Give users ability to use well known tools for controlling and monitoring Java Tango servers.

Solution overview
-----------------

The following describes solutions for linux. Windows users may use the same strategy except bash files must be replaced with corresponding batch files.

There are two possible ways we can prepare this receipt:

1. Generate fat jar, i.e. executable jar that contains everything.


.. code-block:: xml
    :linenos:

        <!—pom.xml –>
        …
        <build>
                <plugins>
                    <plugin>
                        <artifactId>maven-assembly-plugin</artifactId>
                        <!—assemble executable jar with all dependencies –>
                        <configuration>
                            <appendAssemblyId>false</appendAssemblyId>
                            <descriptorRefs>
                                <descriptorRef>jar-with-dependencies</descriptorRef>
                            </descriptorRefs>
                            <archive>
                                <manifest>
                                    <mainClass>hzg.wpn.tango.TestServer</mainClass>
                                </manifest>
                            </archive>
                        </configuration>
                    </plugin>
                </plugins>
            </build>
        …


Executing mvn assembly:single produces one big jar file in the target folder, i.e. TestServer-1.4.jar.

To use our server we just copy it to some location on the target machine and use the following bash script:

.. code-block:: console
    :linenos:

        #!/bin/bash

        /usr/bin/java -jar /absolute/path/to/our/jar $1 hzg.wpn.tango.TestServer $1


Super easy, isn't it? (Do not mind the last two parameters they are here to workaround this issue_)

This script is saved into /usr/lib/tango/server/TestServer. /usr/lib/tango/server can be replaced with any other location where Starter can find the script, i.e. defined in StartDsPath property.


We need to specify an absolute path to the jar file as Astor runs servers from /var/tmp/ds.log folder


PROS


    - it is much easier to deal with immutable artifacts


CONS

    - fat jar… imagine 1000 servers each requires 17MB


2. Use exploded assembly, i.e. first package everything into tar.gz


.. code-block:: xml
    :linenos:

        <!—pom.xml –>
        <build>
                <plugins>
                    <plugin>
                        <artifactId>maven-assembly-plugin</artifactId>
                        <configuration>
                            <appendAssemblyId>false</appendAssemblyId>
                            <descriptors>
                                <descriptor>src/main/assembly.xml</descriptor>
                            </descriptors>
                        </configuration>
                    </plugin>
                </plugins>
            </build>
        <!—src/main/assembly.xml –>
        <assembly schemaLocation="http://maven.apache.org/xsd/assembly-1.0.0.xsd">
            <id>distr</id>
            <formats>
                <format>tar.gz</format>
            </formats>
            <dependencySets>
                <dependencySet>
                    <outputDirectory>/lib</outputDirectory>
                    <fileMode>0777</fileMode>
                </dependencySet>
            </dependencySets>
            <fileSets>
                <fileSet>
                    <directory>conf</directory>
                    <outputDirectory>/conf</outputDirectory>
                </fileSet>
            </fileSets>
        </assembly>


When deployed it is extracted from the archive and copied to some placed aka SERVER_ROOT. Exploded archive has the following structure:

.. code-block:: console

        SERVER_ROOT\
                    |- lib\
                    |      |- *.jar
                    |
                    |- conf\
                            |- test.xml



Startup bash script may look like this:

.. code-block:: console
    :linenos:

        #!/bin/bash

        # import essential environmental variables like absolute path to our server root aka SERVER_ROOT
        . /etc/tangorc

        /usr/bin/java -cp $SERVER_ROOT/lib/* -Dconf=$SERVER_ROOT/conf/test.xml hzg.wpn.tango.TestServer


Again the script is in /usr/lib/tango/server/TestServer. /usr/lib/tango/server can be replaced with any other location where Starter can find the script, i.e. defined in StartDsPath property.

We need to specify an absolute path to the lib and conf folders as Astor runs servers from /var/tmp/ds.log folder

PROS

    - if there are several servers common dependencies can be placed into a single location, hence safe some hdd space - server may use external resources (like conf in the example above), just make sure to use absolute pathes


CONS

    - dealing with exploded assemblies quickly becomes messy


Both solutions assume that maven is used to handle project’s lifecycle.

.. definitions

.. _issue:  https://github.com/tango-controls/Astor/issues/6