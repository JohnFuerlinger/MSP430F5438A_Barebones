/*
 * gpio.c
 *
 *  Created on: Aug 14, 2021
 *      Author: iuser
 */

#include "gpio.h"

/* Whatever is populated here will be setup by the driver */
const gpio_system_setup_t sys_gpios[]  = {

    {.port = 1,    .pin = 0,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},          /* LED1 */
    {.port = 1,    .pin = 1,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},          /* LED2 */
    {.port = 1,    .pin = 2,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 1,    .pin = 3,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 1,    .pin = 4,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 1,    .pin = 5,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 1,    .pin = 6,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 1,    .pin = 7,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},

    {.port = 2,    .pin = 0,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 2,    .pin = 1,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 2,    .pin = 2,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 2,    .pin = 3,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 2,    .pin = 4,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 2,    .pin = 5,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 2,    .pin = 6,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 2,    .pin = 7,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},

    {.port = 3,    .pin = 0,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 3,    .pin = 1,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 3,    .pin = 2,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 3,    .pin = 3,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 3,    .pin = 4,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 3,    .pin = 5,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 3,    .pin = 6,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 3,    .pin = 7,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},

    {.port = 4,    .pin = 0,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 4,    .pin = 1,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 4,    .pin = 2,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 4,    .pin = 3,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 4,    .pin = 4,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 4,    .pin = 5,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 4,    .pin = 6,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 4,    .pin = 7,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},

    {.port = 5,    .pin = 0,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 5,    .pin = 1,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 5,    .pin = 2,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 5,    .pin = 3,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 5,    .pin = 4,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 5,    .pin = 5,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 5,    .pin = 6,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 1},          /* USB_TXD */
    {.port = 5,    .pin = 7,    .dir = INPUT,     .ren = 0,    .out = 0,    .sel = 1},          /* USB_RXD */

    {.port = 6,    .pin = 0,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 6,    .pin = 1,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 6,    .pin = 2,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 6,    .pin = 3,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 6,    .pin = 4,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 6,    .pin = 5,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 6,    .pin = 6,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 6,    .pin = 7,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},

    {.port = 7,    .pin = 0,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 7,    .pin = 1,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 7,    .pin = 2,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 7,    .pin = 3,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 7,    .pin = 4,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 7,    .pin = 5,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 7,    .pin = 6,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 7,    .pin = 7,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},

    {.port = 8,    .pin = 0,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 8,    .pin = 1,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 8,    .pin = 2,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 8,    .pin = 3,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 8,    .pin = 4,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 8,    .pin = 5,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 8,    .pin = 6,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0},
    {.port = 8,    .pin = 7,    .dir = OUTPUT,    .ren = 0,    .out = 0,    .sel = 0}
};

#define LEN_GPIO_ARRY   (sizeof(sys_gpios) / sizeof(sys_gpios[0]))



void gpio_config() {

    volatile uint8_t * addr_dir;
    volatile uint8_t * addr_ren;
    volatile uint8_t * addr_out;
    volatile uint8_t * addr_sel;

    uint8_t port;

    for (uint16_t i = 0; i < LEN_GPIO_ARRY; i++) {
        port = sys_gpios[i].port;

        switch (port) {
            case 1:
                addr_dir = &P1DIR;
                addr_ren = &P1REN;
                addr_out = &P1OUT;
                addr_sel = &P1SEL;
                break;

            case 2:
                addr_dir = &P2DIR;
                addr_ren = &P2REN;
                addr_out = &P2OUT;
                addr_sel = &P2SEL;
                break;

            case 3:
                addr_dir = &P3DIR;
                addr_ren = &P3REN;
                addr_out = &P3OUT;
                addr_sel = &P3SEL;
                break;

            case 4:
                addr_dir = &P4DIR;
                addr_ren = &P4REN;
                addr_out = &P4OUT;
                addr_sel = &P4SEL;
                break;

            case 5:
                addr_dir = &P4DIR;
                addr_ren = &P4REN;
                addr_out = &P4OUT;
                addr_sel = &P4SEL;
                break;

            case 6:
                addr_dir = &P6DIR;
                addr_ren = &P6REN;
                addr_out = &P6OUT;
                addr_sel = &P6SEL;
                break;

            case 7:
                addr_dir = &P7DIR;
                addr_ren = &P7REN;
                addr_out = &P7OUT;
                addr_sel = &P7SEL;
                break;

            case 8:
                addr_dir = &P8DIR;
                addr_ren = &P8REN;
                addr_out = &P8OUT;
                addr_sel = &P8SEL;
                break;
        }

        if (sys_gpios[i].dir == OUTPUT) {
            *addr_dir |= (1U << sys_gpios[i].pin);
        } else {
            *addr_dir &= ~(1U << sys_gpios[i].pin);
        }

        if (sys_gpios[i].ren) {
            *addr_ren |= (1U << sys_gpios[i].pin);
        } else {
            *addr_ren &= ~(1U << sys_gpios[i].pin);
        }

        if (sys_gpios[i].out) {
            *addr_out |= (1U << sys_gpios[i].pin);
        } else {
            *addr_out &= ~(1U << sys_gpios[i].pin);
        }

        if (sys_gpios[i].sel) {
            *addr_sel |= (1U << sys_gpios[i].pin);
        } else {
            *addr_sel &= ~(1U << sys_gpios[i].pin);
        }
    }
}






