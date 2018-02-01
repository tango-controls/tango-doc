QTango
======

:audience:`developers`, :lang:`c++`

QTango - based on C++ and Qt. Favourite amongst C++ developers.

QTango is a framework built on top of QTangoCore and QtControls.
It consists of classes and widgets that interact with the Tango control system,
while providing an easy API to the programmer and full integration with the Qt4 designer.

*QTangoCore* is a framework built on top of Trolltech's QT , version 4 and the Tango control system.
It implements a multi threaded architecture, device centric and easy to use for the Qt programmer.

*QtControls* is a set of Qt-based widgets used to develop graphical user interfaces to set/display values.
If you are going to use Tango don't use this library, take a look at QTango instead.

*QTangoDBus* is a QTango module introduced with the version 4.2 of the library.
It provides an interface to the DBus message bus that can be used by the QTango applications that want to interoperate with each other.
It is possible to be notified when a new application registers to the message bus,
to connect to a running application and even impart commands to it by means of the TApplicationInterface.
An example of the usage of the framework can be found under the dbus/utils/QTangoDBusIntrospector/ application.

The following presentations by Giacomo Strangolino are available:

     * :download:`Presentation QTangoCore <qtangopresentation.pdf>` - a multi threaded framework to develop Tango application
     * :download:`QTWatcher and QTWriter classes <qtwatcherqtwriter.pdf>` presentation
     * The conference paper :download:`"QTango: a library fir easy TANGO based GUIs development" <thp096.pdf>`


   * download `qtango core <https://sourceforge.net/projects/tango-cs/files/gui/qtango-5.3.9.tar.gz/download>`_
   * download `QGraphicsPlot <https://sourceforge.net/projects/tango-cs/files/gui/qgraphicsplot-2.2.4.tar.gz/download>`_ a graphical library that uses QGraphicsView/QGraphicsScene to draw graphs on a plot.
   * download `TGraphicsPlot <https://sourceforge.net/projects/tango-cs/files/gui/tgraphicsplot-2.1.0.tar.gz/download>`_ a library that uses QGraphicsPlot and QTango to provide scalar and spectrum curves on plots.
   * download `Mango <https://sourceforge.net/projects/tango-cs/files/gui/mango-2.0.0.tar.gz/download>`_ a library that uses QGraphicsPlot and QTango to provide scalar and spectrum curves on plots.
