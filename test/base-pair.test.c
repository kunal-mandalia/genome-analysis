#include "./test.h"
#include <check.h>
#include <stdbool.h>
#include "../src/base-pair.h"

START_TEST(matching_base_pair)
{
  // arrange
  char l = 'A';
  char r = 'T';

  // act
  bool matching = matchingBasePair(l, r);

  // assert
  fail_unless(matching == true);
}
END_TEST

Suite *base_pair_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("BasePair");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, matching_base_pair);
  suite_add_tcase(s, tc_core);

  return s;
}
