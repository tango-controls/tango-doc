.. How-To develop server side

How to distinguish clients on the server side
=============================================

Problem overview
----------------

Some times Tango device is not just about talking with the hardware. Now-days a Tango device could be a sophisticated thing that performs complex work and serves numbers of clients simultaneously. And it might be required that the context of these clients may vary (context - a set of parameters of the task or result configuration etc). This is especially true due to multithreading reality we have.

Detailed cases
--------------

Client wants to specify in which format it receives an output from the server. Lets say it can be plain text or JSON or XML etc.

Server runs several tasks in parallel. One task per client. And each client wants to know its task ID, let's say to control or monitor the task's execution.

Solution overview
-----------------

CORBA provides clnt_idnt, i.e. client identity. This can be used to create a concurrent map: ClientIdentity -> Context. And then each requests from the client can be served within the specified context.

Java:
-----

.. code-block:: java
    :linenos:

        //Server.java
        //ConcurrentMap to hold each client's context
        private final ConcurrentMap<String, RequestContext> ctxs =  Maps.newConcurrentMap();

        //see Tango Java API for deviceManagment
        @DeviceManagement
        private DeviceManager deviceManager;

        //this will be an attribute, each client will see its own value
        @Attribute
        //this method returns client identity from CORBA as String
        public String getClientId() throws Exception {
            //deviceManager exports CORBA's client identity feature
            return ClientIDUtil.toString(deviceManager.getClientIdentity());
        }

        //command that returns its result in the format defined in the client's context
        @Command
        public String doJob() throws Exception {
            String clientId = getClientId();
            RequestContext ctx = ctxs.get(clientId);
            switch(ctx.outputType){
                case OutputType.PLAIN:
                    return plainResult();
                case OutputType.JSON:
                    return jsonResult();
            }
        }


.. code-block:: java
    :linenos:

        //RequestContext.java
        //NOTE this class must be thread safe
        @Immutale
        public class RequestContext {
            //OutputType is an enum
            public final OutputType outputType;

            public RequestContext(OutputType outputType) {
                this.outputType = outputType;
            }

            /**
             * Creates default context
             */
            public RequestContext() {
                this(OutputType.PLAIN);
            }
        }


CPP:
----

TODO

Python:
-------

TODO
