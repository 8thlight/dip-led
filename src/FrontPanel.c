#include "FrontPanel.h"
#include "Led.h"

static button_func_t ButtonIsPressed;

void FrontPanel_Create(button_func_t isPressed) {
  ButtonIsPressed = isPressed;
}

void FrontPanel_Update() {
  if(ButtonIsPressed(3)) {
    Led_TurnOn(STATUS_LED);
  }
  else {
    Led_TurnOff(STATUS_LED);
  }
}
