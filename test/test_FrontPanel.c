#include "unity.h"
#include "FrontPanel.h"

static uint16_t lastOffLed = 0xFFFF;
void TestLedOff(uint16_t pin)
{
  lastOffLed = pin;
}

static uint16_t lastOnLed = 0xFFFF;
void TestLedOn(uint16_t pin)
{
  lastOnLed = pin;
}

static uint16_t lastCheckedButton = 0xFFFF;
static int theButtonIsPressed = 0;
int TestButtonIsPresed(uint16_t pin)
{
  lastCheckedButton = pin;
  return theButtonIsPressed;
}


void setUp(void)
{
  FrontPanel_Create(&TestButtonIsPresed, &TestLedOn, &TestLedOff);
  lastCheckedButton = 0xFFFF;
  lastOnLed = 0xFFFF;
  lastOffLed = 0xFFFF;
}

void tearDown(void)
{
}

void test_led_is_turned_on(void)
{
  theButtonIsPressed = 1;
  FrontPanel_Update();
  TEST_ASSERT_EQUAL(lastCheckedButton, 3);
  TEST_ASSERT_EQUAL(lastOnLed, STATUS_LED);
  TEST_ASSERT_EQUAL(lastOffLed, 0xFFFF);
}

void test_led_is_turned_off(void)
{
  theButtonIsPressed = 0;
  FrontPanel_Update();
  TEST_ASSERT_EQUAL(lastCheckedButton, 3);
  TEST_ASSERT_EQUAL(lastOnLed, 0xFFFF);
  TEST_ASSERT_EQUAL(lastOffLed, STATUS_LED);
}
