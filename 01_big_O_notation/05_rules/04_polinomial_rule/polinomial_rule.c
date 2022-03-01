/*
f(n) is polynominal of dregree k -> f(n) = O(n^k)
*/

#include <stdio.h>
#include <stdlib.h>

int f(int n) {
  int accum = 0;

  for (int i = 0; i < n * n; i++) {
    accum += 1;
  }

  return accum;
}

int main() {
  printf("%d", f(5));
  return 0;
}
