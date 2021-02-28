# repico

Repico is a project that adds a remote (wifi or cellular) console, hardware watchdog, and remote reset capability to Raspberry Pi devices.

Repico works by connecting a [Particle.io](https://particle.io) device to several GPIO pins on the RPi.

## Features

1. **Remote console.** Remotely log in or monitor a Raspberry Pi over the secondary cellular or wifi link provided by the Particle device.
2. **Remote control.** Hard reset a Raspberry pi through the secondary link.
3. **External watchdog.** Monitors the Raspberry Pi for liveness and will hard reset an unresponsive Pi.

## Use cases

* **Emergency control/restart.** If you are using a Pi in an embedded setting, it may be difficult to reach it to physically reset the device. Repico gives you a way to do that remotely.
* **Backup serial console.** Accessing the serial console on a Pi requires special hardware. Repico allows you to access the serial power over a reliable wifi or cellular connection.
* **Remote monitoring.** With Repico, you have an additional assurance that your Pi is online and working as expected.

## Quickstart

```
$ particle flash <device name>
```

## Pins

Repico uses the following pins:

| Raspberry Pi   | Particle      | Purpose                                      |
| -------------- | ------------- | -------------------------------------------- |
| GPIO 14 (TXD)  | UART1_RX (RX) | Serial console (pi->particle tx)             |
| GPIO 15 (RXD)  | UART1_TX (TX) | Serial console (particle->pi tx)             |
| RUN            | D5            | Pi hardware reset                            |

In addition, the Particle device device should be connected to the Pi via USB for power.
