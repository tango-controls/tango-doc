level: advanced; target: Tango client developer; DevOps

Tango web api
=============

There is no web api in Tango provided out of the box. But there is an effort to define a standard REST API for Tango [link]

Basically one can use Tango via an http gateway (standalone Tango server)[link].

Tango REST API specification
----------------------------


Tango REST API implementations
------------------------------


Below we provide a short overview of using one of the implementations of the Tango REST API - mtangorest.server [link]

mtangoserver.rest is distributed as a single executable jar file. After downloading one can start it using command :command:`java -DTANGO_HOST=localhost:10000 -jar mtangorest.server.jar sys`

Deploy mtangorest.server in a real environment
----------------------------------------------



