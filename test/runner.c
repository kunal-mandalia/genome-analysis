#include <check.h>
#include "./test.h"

int main(void) {
  int no_failed = 0;
  Suite *s;
  SRunner *runner;
  s = base_pair_suite();
  runner = srunner_create(s);

  srunner_run_all(runner, CK_NORMAL);
  no_failed = srunner_ntests_failed(runner);
  srunner_free(runner);
  return (no_failed == 0) ? 0 : 1;
}
