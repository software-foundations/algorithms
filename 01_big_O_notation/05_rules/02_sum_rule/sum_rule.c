/*
 f(n) = O(p(n))
                ->  O(p(n) + q(n))
 g(n) = O(q(n))
*/

#include <stdio.h>
#include <stdlib.h>

int f(int n) {
  int accum = 0;
  for (int i = 0; i < n; i++) {
    accum += 1;
  }
  return accum;
}

int g(int n) {
  int accum = 0;
  int c = 10;
  for (int i = 0; i < c * n; i++) {
    accum += 1;
  }
  return accum;
}

int sum_fg(int n) {
  f(n);
  g(n);
  return 0;
}

int sum_fg_v2(int n) {
  int accum = 0;
  int c = 10;

  for (int i = 0; i < n; i++) {
    accum += 1;
  }

  for (int i = 0; i < c * n; i++) {
    accum += 1;
  }

  return accum;
}

int main(void) {
  int n = 5;
  printf("%d\n", sum_fg(n));
  printf("%d\n", sum_fg_v2(n));
}