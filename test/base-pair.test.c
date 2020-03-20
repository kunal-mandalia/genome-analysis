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

START_TEST(non_matching_base_pair_A)
{
  // arrange
  char l = 'A';
  char r = 'A';

  // act
  bool matching = matchingBasePair(l, r);

  // assert
  fail_unless(matching == false);
}
END_TEST

START_TEST(non_matching_base_pair_B)
{
  // arrange
  char l = 'C';
  char r = 'T';

  // act
  bool matching = matchingBasePair(l, r);

  // assert
  fail_unless(matching == false);
}
END_TEST

Suite *base_pair_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("BasePair");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, matching_base_pair);
  tcase_add_test(tc_core, non_matching_base_pair_A);
  tcase_add_test(tc_core, non_matching_base_pair_B);
  suite_add_tcase(s, tc_core);

  return s;
}
