.. _install_tango_webapp:

TangoWebapp installation tutorial (Windows)
===========================================

:audience:`developers, administrators`, :lang:`java`

1. Download Apache Tomcat 8 and install it to *C:/apache-tomcat-8*. To verify that it got installed successfully, try to go to :code:`http://127.0.0.1:8080`

2. Download the latest `mtangorest.server.jar <https://bitbucket.org/hzgwpn/mtangorest.server/downloads/>`_ and put it in *C:/apache-tomcat-8/webapps*

3. Follow the .jar installation on `mtangorest.server Wiki <https://bitbucket.org/hzgwpn/mtangorest.server/wiki/Home>`_ (it is assumed below tango host is on localhost i.e. 127.0.0.1)

.. code-block:: console
        
    TANGO_ACCESS –> tango://127.0.0.1:20000/sys/access_control/1
    TANGO_DB –> tango://127.0.0.1:20000/sys/database/2
    TOMCAT_PORT –>8844

4. Export DatabaseDS, and load it to create a TangoAccessControl server (For this step, you will need to update "database" by "tangoAccessControl").

.. code-block:: console
        
    TangoAccessControl
    1
    TangoAccessControl
    sys/access_control/1
   

5. On jive, click on edit, then create free property named "CtrlSystem". Then go to property (last tab), click on CtrlSystem, add a new property named "Services" with the value **AccessControl/tango:sys/access_control/1**

6. Download the latest `TangoWebapp.war <https://github.com/tango-controls/tango-webapp/releases>`_ on  then put it to *C://apache-tomcat-8/webapp* (When TomCat starts it creates a TangoWebapp folder).

7. define a tomcat user in *C://apache-tomcat-8/conf*:

.. code-block:: console
    
    <role rolename="mtango-user"/>
    <role rolename="mtango-rest"/>
    <user password="tango" roles="mtango-rest, root, manager-script,admin" username="tango-cs"/>

8. Go to $Tango_home/bin and launch with a command line :code:`TangoAccessControl.exe 1`

9. Go to *C:/apache-tomcat-8/webapp* and launch mtangorest.server with a command line :code:`java -jar -DTANGO_HOST=127.0.0.1:20000 mtango.server-rc4-0.4.jar test`

10. Open Jive, then open an atk panel on TangoControlAccess DS, then test device, and execute the AddDeviceForUser command with **["tango-cs","sys/database/2", "write"]** as parameter. Also, add a new environment variable name SUPER_TANGO with the value true. Then go on Astor, tool and open AccessControl HMI. Add *.*.*.* as allowed address for the user tango-cs.

11. Try your mtango server instance by the URL : :code:`http://127.0.0.1:8844/tango/rest` (enter username: tango-cs, password : tango if necessary).

12. Time to try the tango webapp. try to go to the URL : :code:`http://127.0.0.1:8080/TangoWebapp`. Get logged, then at the top enter as rest host : :code:`http://127.0.0.1:8844` (:code:`http://` is important), and as host : $Tango_host. Then refresh the page via `CTRL+F5`. You should have an access to the device tree.

Contributed by `Florian Pourchayre <http://www.tango-controls.org/community/members/fpourchayre>`_
