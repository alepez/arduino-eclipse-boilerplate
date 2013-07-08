#include <Arduino.h>

int main() {
	init();
	setup();
	for (;;) {
		loop();
	}
	return 0;
}

