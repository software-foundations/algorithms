/**
 * Complexity
 *
 * prime_number_way_01 -> O(n)
 * prime_number_way_02 -> O(sqrt(n))
 */

#include <stdio.h>
#include <stdlib.h>

void print_prime(int number) {

  printf("\n%d is Prime", number);

  return;
}

void prime_number_way_01(int number) {

  if (number <= 1) {
    return;
  }

  for (int i = 2; i < number; i++) {

    if (number % i == 0) {
      return;
    }
  }

  print_prime(number);

  return;
}

void prime_number_way_02(int number) {

  if (number <= 1) {
    return;
  }

  if (number <= 3) {
    print_prime(number);
    return;
  }

  // skip middle five number between [i, i+6]
  if (number % 2 == 0 || number % 3 == 0) {
    return;
  }

  /**
   * test until square root of number
   * 'cause if
   * n*n != prime -> n != prime
   */

  for (int i = 5; i * i <= number; i = i + 6) {
    if (number % i == 0 || number % (i + 2) == 0) {
      return;
    }
  }

  print_prime(number);

  return;
}

int main() {
  for (int x = 0; x <= 10e4; x++) {
    // prime_number_way_01(x);
    prime_number_way_02(x);
  }
}