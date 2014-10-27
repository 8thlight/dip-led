#ifndef Led_H
#define Led_H
#include "stdint.h"

void Led_TurnOn(uint16_t led);
void Led_TurnOff(uint16_t led);

#define STATUS_LED 3

#endif // Led_H
