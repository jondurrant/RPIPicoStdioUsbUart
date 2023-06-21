/**
 * Jon Durrant.
 *
 * Test to count on stdout
 */

#include "pico/stdlib.h"
#include "pico/stdio.h"
#include <stdio.h>
#define DELAY 1000

int main() {
	int i = 0;

	stdio_init_all();

	sleep_ms(2000);
	printf("GO\n");

	for(;;) {
		printf("Count %d\n", i);
		i++;
		sleep_ms(DELAY);
	}

}
