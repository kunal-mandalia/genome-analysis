#include <stdio.h>
#include <stdbool.h>
#include "./base-pair.h"

/**
 *  The human genome contains around 3 billion base pairs.
 *  Since we're collecting sequences from the user we'll limit
 *  this to something manageable.
 */
const int MAX_SEQ_LEN = 100;

int main() {
  char l[MAX_SEQ_LEN];
  char r[MAX_SEQ_LEN];

  printf("Type the first base pair sequence to compare:\n");
  fgets(l,MAX_SEQ_LEN,stdin);

  printf("Type the second base pair sequence to compare:\n");
  fgets(r,MAX_SEQ_LEN,stdin);

  bool matching = matchingSequences(l, r);
  printf(matching == false ? "The genome sequences do not form a pair\n" : "The genome sequence does form a pair\n");

  return 0;
}
