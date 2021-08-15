/*
 * uart.c
 *
 *  Created on: Aug 15, 2021
 *      Author: iuser
 */

#include "uart.h"

void uca1_uart_init(uint32_t baud) {

    /* Hold USCI in reset */
    UCA1CTL1 |= UCSWRST;

    /* Initialize all USCI regs */
    UCA1CTL1 |= (3U << 6);              /* Use SMCLK */
    UCA1CTL0 = 0;                       /* All default settings */

    UCA1BR0 = (((1000000 / baud) * 256) & 0xff);    /* Baud LSB */
    UCA1BR1 = (((1000000 / baud) * 256) >> 8);      /* Baud MSB */


    /* Clear USCI reset */
    UCA1CTL1 &= ~UCSWRST; /* Enable the UART */


    /* Enable interrupts (if desired) */

}
