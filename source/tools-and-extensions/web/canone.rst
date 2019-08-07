Canone
======

:audience:`developers, administrators, users`

Introduction
------------

Canone is the PHP web interface of Tango.
The external appearance is a set of "panels" from which a user can interact with Tango via web.
Each panel is composed of a certain number of "widgets" and some HTML tags; a widget is a graphic element which represent a single attribute or command (or property, yet not implemented).

Requirements
------------

The installation requires a web server with PHP; the PHP should be configured with Sockets, SQLite and GD2.
It's also required a machine (possibly different from the web server) with PyTango.
The client side requires only a web browser (Firefox is the best choice) with JavaScript and pop-ups enabled.

Download
--------

You can download Canone `here <https://sourceforge.net/projects/tango-cs/files/gui/Canone_3.0.2.zip/download>`_.

Panels
------

With Canone it's easy to build and customize control panels. A user endowed of enough privilege can save many different panels and chose one of them to be displayed from a selection box. A common panel is composed by a title and a simple table of widgets, but the page deployment may be as complex as allowed by HTML; sub-tables, external links are only a few examples of what can be added.

Panel Configuration
-------------------

The configuration of a panel concerns two different aspects: the configuration of the page deployment and the configuration of each single widget.
The page deployment is configured pressing the XML button which makes an easy pop-up window to appear; in this dialog there is the XML code corresponding to the configuration of the panel. Some XML tags are specific of Canone, but others are identical to HTML and can be used to modify the deployment of the panel. This XML code can be modified freely but a certain caution is recommended! Don't use double apices ("), it's better to use single apices (')
The "modify" button allows the modification or the removal of any widget. Pressing this button each widget is surrounded by a frame in which are included also two buttons: a "modify" button (see head) and a "delete" button.
Warning: in order to eliminate a widget it's better to use the XML dialog.

Widgets
-------

A widget is a graphical element which displays one (or more) control system parameter. Now only read attributes and write commands are supported.
Each widget is contained in its own class which extends the generic "widget" class. A fundamental attribute of this class is called "config" and contains all the parameters that can be customized from outside and for each parameter: an identifier, a sort of type definition, the default value, a short description and a long description (intended for the online help).
The setParam() method allows to set all the parameters with a single string.
Some widgets are implemented as PNG images others as tables, in both cases the HTML code necessary to visualize the widget is returned by the plot() method.

Widget Configuration
--------------------

Each widget is associated with an attribute or a command and a panel. There is a table intended to customize each parameter of the widget. The colors are configurable also through color selection pop-up.

Users
-----

Canone supports user access and user administration.
The user autentication process in a web environment can't be too simple and can't assume at any time the loyalty of users.
The access is validated using data stored in a database (SQLite).

User Login
----------

Users must be registered in the system with Username and Password. Each user must be inserted in a user group, permissions are granted to user groups.
Associated to a user group may be several IP numbers (and netmask) which entitle the rights of the user group without username and password.
A user inserted through IP in a given group can at any time login with username and password and get the permission of a different user group.

Permissions
-----------
There are four levels of permissions:

    * **read**: only reading operations are granted, any write operation is denied
    * **operator**: both reading and writing operations are granted
    * **expert**: both reading and writing operations are granted, panels may be modified
    * **none**: all operations are denied

There is also a special group called admin which is the only with administration permissions. They can create or delete users, grant or revoke permissions to everybody.

Administration
--------------

The administration utility is coposed by three tools.

    * **access control**: all groups (for users, devices and panels) are listed and privileges can be granted or revoked on the fly. Each user group must have a default permission which is overridden by specific permission given to the combination of user group and device group or user group and panel group (e.g. the host group has no default privilege but may have privilege to se panels in a specific group)
    * **user**: you can search, create, modify or delete a user account
    * **database**: a generic database graphical client allows to change any configuration. Should be used only by expert administrators

Communications
--------------

The communication to Tango is implemented through a raw text socket.
There is a Python script which include the Python to Tango binding (PyTango) and act both as a Tango client and socket server. In an infinite loop it recognize the requests coming from the PHP through the socket, retrieves the data from the Tango host defined by the $TANGO_HOST environment variable and return the results as a single string. The first part of the string is the number of bytes of the rest of the string.
The TANGO_HOST may be changed from the client socket on a per call basis.
The socket is multi-channel i.e. many instances of the script may be launched each with a progressive integer parameter, each script will work on a port given by the port base plus the given parameter.
In the first few lines of the script you must customize the base port and the IP address of the authorized clients, all other clients will be immediately disconnected.

A side-effect: SOAP
-------------------

The PHP to Python socket interface which deals with the buffer database and un-serialize the data coming from the socket was an excellent starting point to create a web server powered by SOAP. It was so easy to create such a server that it can be considered as a side-effect of Canone. Along with the server (tango-serveer.php) there is also a 50 lines client for test purpose (tango-client.php). Of course also this server still doesn't implement command and property queries.

The TODO list
-------------

This are only a few possible extension/improvements, many more may be implemented in future releases:

    * add quality factorof attributes
    * extend the utilization of AJAX technology
    * properties interfaces
    * add LDAP support (only for password validation)
    * export to PDF, XLS, e-mail
    * add other generic and some specific widgets
    * save and load from file
    * improve customization of widgets
    * use SOAP to replace raw sockets
    * add graphical editor as a valid alternative to HTML text editor
    * improve security checks
    * add panels selection with tabs
    * split this manual into user and administrator manual
    * improve the messages and dialog of the online help


FAQ
----

 * What's Canone?
    Canone is a web interface to Tango. With Canone you can build your own panels and interact with any installation of Tango.
 * Is Canone a graphical interface?
    Canone is a fully graphical and automated interface.
    You can select and configure some graphical elements (widgets) and combine them in one or more panels.
 * What's a widget?
    A widget is a pre-defined graphical objet which is associated with a single attribute and can take several configurations (e.g. background color, size, shape, etc).
 * What's a panel?
    A panel is a collection of widget + some editable HTML tags.
 * Why HTML autorefresh isn't supported?
    Autorefresh isn't supported becouse it would make uncomfortable any command sent to Tango from Canone. If an autorefresh event appens exactly when you are pressing a button, your click may be lost (a test gave aproximately 25% loss) and even worst you will not be notified if it has been lost or not.
    From version 2.0 some widgets support autorefresh using AJAX.
 * Why I can't see any panel?
    You may be in a group of users which has no privilege to see any panel or the tango-host may be wrong. To check - modify the tango-host you should ask to the administrator who can modify it from the panel construction tool or he can modify a configuration file.
