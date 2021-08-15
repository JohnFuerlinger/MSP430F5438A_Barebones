/*
 * File header
 */



#include "common.h"

/* Home-brew libraries */
#include <library_layer/gpio_lib.h>
#include <library_layer/uart_lib.h>


void system_init();
void port_init();

/*
 * Todo: Set up a handful of peripherals so we can actually do something. Use my idea of
 * layering the software together in hardware, library, and application layers.
 *
 * Thought... I think interrupts should belong in the application level even though they
 * are low level and might make sense to put in the hw layer.
 *
 * Here are the hardware layer peripherals I want drivers for:
 * - GPIO
 * - UART
 * - Timers
 * - watchdog timer
 * - Real time clock?
 * - LCD controller??????
 * - SPI and I2C
 * - Interrupt control
 * - ADC/DAC
 *
 * Here are some library functions and features I want to build up to:
 * - Talk to RF transceivers & receivers
 * - Talk to the ESP8226
 * - juprintf/muprintf
 * - Draw on a LCD?
 * - Read temp from a thermocouple
 * - Get the temp from a temp IC (onewire?)
 * - Frequency modulation for buzzer
 * - Drive a bunch of LEDs (Neopixel project)
 * - Communicate with the accelerometer
 *
 * Here are some ideas for "application layer" things I could create with this platform:
 * - IoT temperature sensors. Want this for heat control in winter
 * - Toaster oven PCB fabricator
 * - Smart home touch screen panel
 * - ?? diffuser.. ?? **finally**
 * - Sensors to track when doors open / survelliance cameras
 * - Transparency control for a glass pane?
 * - Super loud alarm clock.
 * - My version of the "alexa" but it's a spy device. Logs every word you say.
 * - RF/Bluetooth sniffer. Hacking tool - unlock cars with remote key fobs
 * - RFID sniffer
 */

int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	GPIO_LIB_INIT();
	UART_LIB_INIT(115200);

	//port_init();

	/* Start with LED's off */
	P1OUT &= ~(1U << 0);
	P1OUT &= ~(1U << 1);

	/* Start superloop */
	while(1) {

	    UCA1TXBUF = 0x41; /* Think this is a 'A' */

	    /* LED config 1 */
	    LED1_ON();
	    LED2_OFF();

	    /* Then delay */
	    for (uint16_t i = 0; i < 30000; i++) { ; }

	    /* LED config 2 */
	    LED1_OFF();
	    LED2_ON();

	    /* Then delay */
        for (uint16_t i = 0; i < 30000; i++) { ; }
	}
}


/* LED's 1 and 2 on port 1, pins 0 and 1 respectively */
void port_init() {

    P1DIR = ( (1 << 0) |   /* LED1 */
              (1 << 1) |   /* LED2 */
              (1 << 2) |
              (1 << 3) |
              (1 << 4) |
              (1 << 5) |
              (1 << 6) |
              (1 << 7));

    P1REN = ( (0 << 0) |   /* LED1 */
              (0 << 1) |   /* LED2 */
              (0 << 2) |
              (0 << 3) |
              (0 << 4) |
              (0 << 5) |
              (0 << 6) |
              (0 << 7));

    P1OUT = ( (0 << 0) |   /* LED1 */
              (0 << 1) |   /* LED2 */
              (0 << 2) |
              (0 << 3) |
              (0 << 4) |
              (0 << 5) |
              (0 << 6) |
              (0 << 7));

    P1SEL = ( (0 << 0) |   /* LED1 */
              (0 << 1) |   /* LED2 */
              (0 << 2) |
              (0 << 3) |
              (0 << 4) |
              (0 << 5) |
              (0 << 6) |
              (0 << 7));
}
