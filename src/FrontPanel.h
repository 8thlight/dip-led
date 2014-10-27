#ifndef FrontPanel_H
#define FrontPanel_H

#include "stdint.h"
#include "ButtonInterface.h"

void FrontPanel_Create(button_func_t buttonIsPressed);
void FrontPanel_Update();

#endif // FrontPanel_H
