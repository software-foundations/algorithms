// O(n²)

#include <stdio.h>
#include <stdlib.h>

void quadratic_cost(int n) {
  for (int i = 0; i <= n; i++) {
    printf("\n%d\n", i);

    for (int j = 0; j <= n; j++) {
      printf("%d\n", j);
    }
  }
}

int main(void) {
  quadratic_cost(3);

  return 0;
}