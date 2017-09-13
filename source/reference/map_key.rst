.. _map_key:

Map Key
=========

The color coded key for the clickable maps of the Tango ecosystem.

..  raw:: html

    <embed width="200%" height="600px" type="text/html" src="../_static/layer-map-source/tango_key.html">


Acknowledgements
-----------------

The maps were originally produced by Lajos Fülöp (ELI-ALPS) and have been updated and
formatted for this document by Stuart James (ESRF).

Making Modifications
--------------------

The layer map graph is maintained and modified using yEd Graph Editor. yEd exports the graph as a HTML/PNG file combo. This tool can be found at <https://www.yworks.com/products/yed>. 

A simplified workflow can be described as follows:

* Open the desired graph to be edited. This is a .graphml file. Files pertaining to this project are located with the static data.
* Edit the visual graph as required. For example, updating html links in the various object properties. 
* Save the changes, then select File->Export to export the changes. Export the graph as a "HTML ImageMap".
* You will be prompted with the "HTML Map Export" dialog. Ensure the image format is PNG on the Image tab. There should be no need to change any other settings.

The result of the above will be both a HTML file and a PNG file that can be embedded in the documentation. The HTML file is embedded directly using the raw keyword, and it will load the PNG file when rendered.


