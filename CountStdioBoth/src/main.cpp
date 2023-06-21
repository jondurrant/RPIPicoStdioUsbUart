/**
 * Jon Durrant.
 *
 * Test to count on stdout
 */

#include "pico/stdlib.h"
extern "C" {
#include "pico/stdio/driver.h"
#include "pico/stdio.h"
#include "pico/stdio_usb.h"
#include "pico/stdio_uart.h"
}
#include <cstring>


#include <stdio.h>
#define DELAY 1000



int main() {
	int i = 0;
	char buf[80];

	stdio_init_all();

	sleep_ms(2000);
	printf("GO\n");

	stdio_filter_driver(&stdio_uart);


	for(;;) {

		printf("UART %d\n\r", i);

		sprintf(buf,"USB %d\n\r", i);
		stdio_usb.out_chars(buf, strlen(buf));

		i++;
		sleep_ms(DELAY);


	}

}
