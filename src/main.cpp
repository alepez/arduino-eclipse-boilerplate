#include <Arduino.h>

void setup() {
	pinMode(13, OUTPUT);
}

void loop() {
	digitalWrite(13, HIGH); // set the LED on
	delay(100);
	digitalWrite(13, LOW); // set the LED off
	delay(900);
}
