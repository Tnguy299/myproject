/******************************************************************************

 *****************************************************************************/

#include "buzzer.h"

/******************************************************************************
 * Initialize the buzzer
 * Pin usage: Grove base port J17, Tiva C PC5 (Port C, Pin 5)
 *****************************************************************************/
void BzInit()
{
    // Enable Port C peripheral
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOC);

    // Configure PC5 as output pin
    GPIOPinTypeGPIOOutput(GPIO_PORTC_BASE, GPIO_PIN_5);
}

void BuzzerOn()
{
    GPIOPinWrite(GPIO_PORTC_BASE, GPIO_PIN_5, GPIO_PIN_5);
}

void BuzzerOff()
{
    GPIOPinWrite(GPIO_PORTC_BASE, GPIO_PIN_5, 0);
}
