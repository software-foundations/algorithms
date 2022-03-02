/**
 * Complexity
 *
 * PrimeFacors -> O(sqrt(n))
 **/

#include <stdio.h>
#include <stdlib.h>

// return prime numbers wich return number when are multipyed
void prime_factors(int number) {

  printf("\n\n---%d---\n", number);

  while (number % 2 == 0) {
    printf("2\n");
    number = number / 2;
  }

  // skip one element
  for (int i = 3; i * i <= number; i = i + 2) {

    while (number % i == 0) {
      printf("%d\n", i);
      number = number / i;
    }
  }

  // when n is a prime number greather than 2
  if (number > 2) {
    printf("%d", number);
  }

  return;
}

int main() {
  for (int x = 1; x <= 30; x++) {
    prime_factors(x);
  }
}
