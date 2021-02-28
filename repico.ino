/**
 * repico: Remote Pi Controller.
 */

#include "config.h"

#define FIRMWARE_VERSION "v0.1.0"

retained String deviceName = "heatpump-unknown";

STARTUP(System.enableFeature(FEATURE_RETAINED_MEMORY));

void logEvent(String msg) {
  Log.info(msg);
  Particle.publish("repico/log", (char *) msg.c_str(), PRIVATE);
}

void logEvent(char * msg) {
  logEvent(String(msg));
}

void setup() {
  logEvent("Starting up...");
  RGB.control(true);
  logEvent("Initialization complete!");
}

void loop() {
}