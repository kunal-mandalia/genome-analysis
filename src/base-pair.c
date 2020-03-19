#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool matchingBasePair(char l, char r) {
  if (l == 'A') {
    return r == 'T';
  }
  if (l == 'T') {
    return r == 'A';
  }
  if (l == 'C') {
    return r == 'G';
  }
  if (l == 'G') {
    return r == 'C';
  }
  return false;
}

/**
 * A string consisting of base characters 'A', 'T', 'C', 'G'
 * can represent the genome since its base pair may be inferred
 * e.g. the genome substring "AATC" has the corresponding base pair "TTAG"
 * in this sense "AATC" and "TTAG" are equivalent
 **/
bool matchingSequences(char *l, char *r) {
  size_t sL = strlen(l);
  size_t sR = strlen(r);

  if (sL != sR) {
    return false;
  }

  for (int i = 0; i < sL - 1; i++) {
    if (!matchingBasePair(l[i], r[i])) {
      return false;
    }
  }
  return true;
}
