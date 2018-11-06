/*
 * GPIO_wrapper.hpp
 *
 *  Created on: Jul 28, 2018
 *      Author: tamas
 */

#ifndef GPIO_WRAPPER_HPP_
#define GPIO_WRAPPER_HPP_
#include "HAL_Driver/Inc/stm32l0xx_hal.h"
//#include "stm32l0xx_hal_gpio.h"

// Why I made this source? Idk, I thought it's a good idea to write a c++ wrapper for all the GPIO
// stuff that's going to happen. If you have no idea what you're doing, write the tools first.

//So this class handles the Output pins, such as LEDs, power toggles, etc..
class OutputPin {
	uint16_t Pin;
	GPIO_TypeDef * Port;
public:
	OutputPin();
	OutputPin(uint16_t pin, GPIO_TypeDef * port);
	void set();
	void reset();
	void set(const GPIO_PinState & StateValue);
};

#endif /* GPIO_WRAPPER_HPP_ */