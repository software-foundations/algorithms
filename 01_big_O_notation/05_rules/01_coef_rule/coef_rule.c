/*
Coeficient rule
f(n) == O(g(n)) -> c * f(n) == O(g(n)); c > 0

It means that if n -> oo, then c is not important, 'cause it's not related
to the input (n) lengh

# TIP: think in infite when form bigO notations
*/

#include <stdio.h>
#include <stdlib.h>

int linear(int n) {
  int accum = 0;
  for (int i = 0; i < n; i++) {
    accum += 1;
  }
  return accum;
}

int c_linear(int n) {
  int accum = 0;
  int c = 10;
  for (int i = 0; i < c * n; i++) {
    accum += 1;
  }
  return accum;
}

int main(void) {
  int n = 4;

  printf("linear   -> %d\n", linear(n));
  printf("c_linear -> %d\n", c_linear(n));
  return 0;
}