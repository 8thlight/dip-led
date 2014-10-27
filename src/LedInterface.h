#ifndef LedInterface_H
#define LedInterface_H
#include "stdint.h"

#define STATUS_LED 3
typedef void(*led_off_func_t)(uint16_t);
typedef void(*led_on_func_t)(uint16_t);

#endif //LedInterface_H
