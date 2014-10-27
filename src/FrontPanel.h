#ifndef FrontPanel_H
#define FrontPanel_H

#include "stdint.h"
#include "LedInterface.h"
#include "ButtonInterface.h"

void FrontPanel_Create(button_func_t buttonIsPressed, led_on_func_t ledOn, led_off_func_t ledOff);
void FrontPanel_Update();

#endif // FrontPanel_H
