

#ifndef BUZZER_H_
#define BUZZER_H_

#include <stdint.h>
#include <stdbool.h>
#include <inc/hw_memmap.h>
#include <inc/hw_gpio.h>
#include <driverlib/pin_map.h>
#include <driverlib/sysctl.h>
#include <driverlib/gpio.h>

// Initialize the buzzer
void BzInit();

// Turn on the buzzer
void BuzzerOn();

// Turn off the buzzer
void BuzzerOff();

#endif /* BUZZER_H_ */
