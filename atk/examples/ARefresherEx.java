// This is an example from DeviceFactory.
// We create a new Refresher with the name "device"
// We add ourself to it, and start the thread

Refresher refresher  = new Refresher("device");
refresher.addRefreshee(this).start();

