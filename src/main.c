#include "./base-pair.h"
#include "./covid-19.h"
#include <stdbool.h>
#include <stdio.h>

/**
 *  The human genome contains around 3 billion base pairs.
 *  Since we're collecting sequences from the user we'll limit
 *  this to something manageable.
 */
int main() {

  printf("covid-19-genome:\n%s\n", COVID_19_GENOME);

  return 0;
}
