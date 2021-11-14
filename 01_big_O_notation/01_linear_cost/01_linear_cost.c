/*
 * O(n)
 */

#include <stdio.h>
#include <stdlib.h>

void linear_cost(int n) {
  for (int i = 0; i < n; i++) {
    printf("%d\n", i);
  }

  return;
}

int main(void) {

  linear_cost(3);

  return 0;
}