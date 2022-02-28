// O(n²)

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void quadratic_cost(int n) {
  for (int i = 0; i < n; i++) {
    printf("\n%d\n", i);

    for (int j = 0; j < n; j++) {
      printf("%d\n", j);
    }
  }
}

void quadratic_cost_way_02(int n) {
  for (int i = 0; i < pow(n, 2); i++) {
    printf("%d\n", i);
  }
}

int main(void) {
  // quadratic_cost(3);
  quadratic_cost_way_02(3);

  return 0;
}