#include "unity.h"
#include "FrontPanel.h"

void TestLedOff(uint16_t pin)
{
}

void TestLedOn(uint16_t pin)
{
}

int TestButtonIsPresed(uint16_t pin)
{
  return 0;
}


void setUp(void)
{
  FrontPanel_Create(&TestButtonIsPresed, &TestLedOn, &TestLedOff);
}

void tearDown(void)
{
}

void test_module_generator_needs_to_be_implemented(void)
{
  FrontPanel_Update();
}
