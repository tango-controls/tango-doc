level: advanced; target: Tango client developer; DevOps

Tango REST API
==============

Tango provides REST API specification. This can be used to implement integrations of Tango with 3rd party products using http protocol instead of tango protocol.

Simple example of this can be mobile client application for monitoring Tango.

Basically one can use Tango via an http gateway (standalone Tango server)[link].

* What is REST and why it is useful
* Getting started with simple example
* Safety example of ESRF and DESY
* Further steps


Tango REST API specification
----------------------------

Shortly speaking REST API in general exports resources. These resources are accessible using URL addressing. Client performs actions on the resources defined by http methods. Typically these are:

GET - request a resource
PUT - update a resource
POST - create a new resource
DELETE - remove a resource

Tango REST API exports Tango hosts; Tango devices; Tango device attributes, commands and pipes. So it follows Tango model [reference].

For example, one can request tango host using Tango REST API:

[code]
    GET tango/rest/rc4/hosts/tango_host/10000

Here one uses Tango REST API implementation related to version RC4 [link to the branch] this relates to tango/rest/rc4 part of the exmaple URL. `hosts` exports all the tango hosts [term] accessible through this Tango REST API implementation. tango_host/10000 relates to TANGO_HOST=tango_host:10000.

In the following example client requests for a device attribute:

[code]
    GET tango/rest/rc4/hosts/tango_host/10000/devices/sys/tg_test/1/attributes/double_scalar/value

Again here `tango/rest/rc4` relates to Tango REST API version RC4 implementation; `hosts/tango_host/10000` relates to TANGO_HOST=tango_host:10000;  `devices/sys/tg_test/1` relates to the device `tango://tango_host:10000/sys/tg_test/1` exported through this Tango REST API; finally `attributes/double_scalar/value` relates to the value of the attribute.

The third example is how client executes a command of a device:

[code]
    PUT tango/rest/rc4/hosts/tango_host/10000/devices/sys/tg_test/1/commands/DevDouble?v=3.14

Here client executes tango://tango_host:10000/sys/tg_test/1/DevDouble with the input arg=3.14

The full reference can be found following this link [link]

Tango REST API implementations
------------------------------

Since Tango REST API itself is only a specification one needs an actual implementation running some where.

Known implementations are:

mtangorest.server [link]

Please refer to the corresponding implementation documentation on how to install and use it.

Basically one can test the installation trying to read an attribute value from a device. Typically there is a TangoTest server running on the tango host through browser:

[img]

Below we provide a short overview of using one of the implementations of the Tango REST API - mtangorest.server [link]

mtangoserver.rest is distributed as a single executable jar file. After downloading one can start it using command :command:`java -DTANGO_HOST=localhost:10000 -jar mtangorest.server.jar sys`

Safety
------

As Tango REST is supposed to export Tango via http to the Internet the usual question is how to protect Tango from the unwanted activity.

In this section two examples are given of a real world installations of Tango REST API.

@ESRF

https://mstatus.esrf.fr/tango/rest




