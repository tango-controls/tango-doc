.. How-To unit tests

Using Tango servers without DB for unit testing
===============================================

Problem overview
----------------

One wants to test own server using full tango stack. This test must not be related to any environment and be performed together with other tests.

Detailed cases
--------------

Useful for benchmarking. Testing without setting up the whole Tango infrastructure.

Solution overview
-----------------

It is possible to start Tango server without db: see 9.10 in the Tango book

Java:
-----

Below is how one can integrate it into JUnit framework


.. code-block:: java
    :linenos:

        public class ServerTest {

            public static final String NO_DB_GIOP_PORT = "12345";//any random non-occupied port
            public static final String NO_DB_INSTANCE = "test_server";
            public static final String NO_DB_DEVICE_NAME = "test/junit/" +NO_DB_INSTANCE;
            //our server will run in a dedicated thread
            private final ExecutorService server = Executors.newSingleThreadExecutor(new ThreadFactory() {
                @Override
                public Thread newThread(Runnable r) {
                    Thread thread = new Thread(r);
                    thread.setName("My fancy Tango server");
                    thread.setDaemon(true);
                    return thread;
                }
            });

            @Before
            public void before() throws InterruptedException {
                System.setProperty("OAPort", NO_DB_GIOP_PORT);

                final CountDownLatch latch = new CountDownLatch(1);
                server.submit(new Runnable() {
                    @Override
                    public void run() {
                        ServerManager.getInstance().start(new String[]{NO_DB_INSTANCE, "-nodb", "-dlist", NO_DB_DEVICE_NAME}, TestServer.class);//TestServer - is our Tango server we want to test against
                        latch.countDown();
                    }
                });
                //make sure server has been started before leaving method
                latch.await();
            }

            @After
            public void after() {
                server.shutdownNow();
            }


            @Test
            public void testGetClientId() throws Exception {
                TangoProxy proxy = TangoProxies.newDeviceProxyWrapper("tango://localhost:" + NO_DB_GIOP_PORT + "/" + NO_DB_DEVICE_NAME + "#dbase=no");

                assertSame(DeviceState.ON,proxy.readAttribute("State"));
            }
        }


It is also possible to use 3rd party Tango server to test against. Suppose our Tango server uses other Tango server to perform its tasks (Data aggregation, state monitoring etc). In this case 3rd party binary can be added to the project. This binary can be then launched from within JUnit test:

.. code-block:: java
    :linenos:

        //this test cases uses precompiled TangoTest stored in {PRJ_ROOT}/exec/tango/<win64|debian> folder
        public class TangoTestProxyWrapperTest {
            public static final String TANGO_DEV_NAME = "test/local/0";
            public static final int TANGO_PORT = 16547;
            public static final String TEST_TANGO = "tango://localhost:" + TANGO_PORT + "/" + TANGO_DEV_NAME + "#dbase=no";
            public static final String X64 = "x64";
            public static final String LINUX = "linux";
            public static final String WINDOWS_7 = "windows 7";
            public static final String AMD64 = "amd64";

            private static Process PRC;

            @BeforeClass
            public static void beforeClass() throws Exception {
                String crtDir = System.getProperty("user.dir");
                //TODO define executable according to current OS
                String os = System.getProperty("os.name");
                String arch = System.getProperty("os.arch");
                StringBuilder bld = new StringBuilder(crtDir);
                //TODO other platforms or rely on the environmet
                if (LINUX.equalsIgnoreCase(os) && AMD64.equals(arch))
                    bld.append("/exec/tango/debian/").append("TangoTest");
                else if (WINDOWS_7.equalsIgnoreCase(os) && AMD64.equals(arch))
                    bld.append("\\exec\\tango\\win64\\").append("TangoTest");
                else
                    throw new RuntimeException(String.format("Unsupported platform: name=%s arch=%s", os, arch));

                PRC = new ProcessBuilder(bld.toString(), "test", "-ORBendPoint", "giop:tcp::" + TANGO_PORT, "-nodb", "-dlist", TANGO_DEV_NAME)
                        .start();

                //drain slave's out stream
                new Thread(new Runnable() {
                    @Override
                    public void run() {
                        char bite;
                        try {
                            while ((bite = (char) PRC.getInputStream().read()) > -1) {
                                System.out.print(bite);
                            }
                        } catch (IOException ignore) {
                        }
                    }
                }).start();

                //drains slave's err stream
                new Thread(new Runnable() {
                    @Override
                    public void run() {
                        char bite;
                        try {
                            while ((bite = (char) PRC.getErrorStream().read()) > -1) {
                                System.err.print(bite);
                            }
                        } catch (IOException ignore) {
                        }
                    }
                }).start();
            }

            @AfterClass
            public static void afterClass() throws Exception {
                PRC.destroy();
            }

            //this test directly writes/reads  to/from TangoTest double_scalar_w
            @Test
            public void testWriteReadAttribute_Double() throws Exception {
                TangoProxy instance = TangoProxies.newDeviceProxyWrapper(TEST_TANGO);

                instance.writeAttribute("double_scalar_w", 0.1984D);

                double result = instance.<Double>readAttribute("double_scalar_w");

                assertEquals(0.1984D, result);
            }

            //in other test case one can create instance of his own server (see previous code snippet)

        }


CPP:
----

//TODO

Python:
-------

//TODO 
