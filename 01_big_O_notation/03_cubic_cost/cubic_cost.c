// O(n3)

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void cubic_cost(int n) {
  for (int i = 0; i < n; i++) {
    printf("\n%d\n", i);

    for (int j = 0; j < n; j++) {
      printf("%d\n", j);

      for (int k = 0; k < n; k++) {
        printf("%d\n", k);
      }
    }
  }
}

void cubic_cost_way_02(int n) {
  for (int i = 0; i < pow(n, 3); i++) {
    printf("%d\n", i);
  }
}

int main(void) {
  cubic_cost(3);
  cubic_cost_way_02(3);

  return 0;
}