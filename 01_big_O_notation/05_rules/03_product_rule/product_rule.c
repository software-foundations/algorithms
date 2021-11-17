/*
 f(n) = O(p(n))
                -> O(p(n)q(n))
 g(n) = O(q(n))
*/

#include <stdio.h>
#include <stdlib.h>

int product_fg(int n) {
  int accum = 0;

  // f
  for (int i = 0; i < n; i++) {
    accum += 1;

    // g
    for (int j = 0; j < n; j++) {
      accum += 1;
    }
  }

  return accum;
}

int main(void) {
  int n = 5;
  printf("%d\n", product_fg(n));
}
