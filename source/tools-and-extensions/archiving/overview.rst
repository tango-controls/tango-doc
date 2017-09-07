.. _archiving_overview:

Overview
=========

Tango has two main archiving solutions - the original one (HDB) and a new one (HDB++). 
The difference between the two is in the features.
HDB supports Oracle and MySQL databases.
HDB++ supports higher time resolution, multiple database backends (MySQL and Cassandra), 
and is based on events.
HDB++ is designed to have a higher throughput and a number of improvements like
better error management, lower footprint etc.

This map shows you how the archiving systems and the related tools are layered. 

..  raw:: html

    <embed width="100%" height="600px" type="text/html" src="../../_static/layer-map-source/tango_archiving_map.html">
