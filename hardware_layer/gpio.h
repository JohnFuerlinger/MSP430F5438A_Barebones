/*
 * gpio.h
 *
 *  Created on: Aug 14, 2021
 *      Author: iuser
 */

#ifndef HARDWARE_LAYER_GPIO_H_
#define HARDWARE_LAYER_GPIO_H_

#include "common.h"

typedef enum pindir_t {OUTPUT, INPUT} pindir_t;

typedef struct gpio_system_setup_t {
    uint8_t port;
    uint8_t pin;
    pindir_t dir;
    uint8_t ren;
    uint8_t out;
    uint8_t sel;
} gpio_system_setup_t;


void gpio_config();

#endif /* HARDWARE_LAYER_GPIO_H_ */
