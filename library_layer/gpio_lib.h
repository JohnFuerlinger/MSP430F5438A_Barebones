/*
 * gpio_lib.h
 *
 *  Created on: Aug 15, 2021
 *      Author: iuser
 */

#ifndef LIBRARY_LAYER_GPIO_LIB_H_
#define LIBRARY_LAYER_GPIO_LIB_H_

#include <hardware_layer/gpio.h>

#define GPIO_LIB_INIT()         gpio_config()
#define LED1_ON()               P1OUT |= (1U << 0)
#define LED1_OFF()              P1OUT &= ~(1U << 0)
#define LED2_ON()               P1OUT |= (1U << 1)
#define LED2_OFF()              P1OUT &= ~(1U << 1)



#endif /* LIBRARY_LAYER_GPIO_LIB_H_ */
