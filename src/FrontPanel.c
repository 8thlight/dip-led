#include "FrontPanel.h"

void FrontPanel_Update() {
  if(Button_IsPressed(3)) {
    Led_TurnOn(STATUS_LED);
  }
  else {
    Led_TurnOff(STATUS_LED);
  }
}
