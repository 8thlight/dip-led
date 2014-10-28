#include "unity.h"
#include "Learn.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_adding(void)
{
  int a = 2;
  int b = 4;
  int c = 81;
  TEST_ASSERT_EQUAL(6, Learn_add(a, b));
  TEST_ASSERT_EQUAL(82, Learn_add(c, a));
}
