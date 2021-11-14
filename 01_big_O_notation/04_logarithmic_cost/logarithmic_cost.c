// O(log n)

#include <stdio.h>
#include <stdlib.h>

void logarithmic_cost(int n) {
  for (int i = 2; i <= n; i = i * 2) {
    printf("%d\n", i);
  }
}

int main(void) {

  logarithmic_cost(65);

  return 0;
}