#include "FrontPanel.h"

static button_func_t ButtonIsPressed;
static led_on_func_t LedTurnOn;
static led_off_func_t LedTurnOff;

void FrontPanel_Create(button_func_t isPressed, led_on_func_t ledOn, led_off_func_t ledOff) {
  ButtonIsPressed = isPressed;
  LedTurnOff = ledOff;
  LedTurnOn = ledOn;
}

void FrontPanel_Update() {
  if(ButtonIsPressed(3)) {
    LedTurnOn(STATUS_LED);
  }
  else {
    LedTurnOff(STATUS_LED);
  }
}
