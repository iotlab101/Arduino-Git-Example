#include <Arduino.h>

// ESP12 has the GPIO2 attched to the LED besides the antenna
const int   LED = 2;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, !digitalRead(LED));
  delay(1000);
}
