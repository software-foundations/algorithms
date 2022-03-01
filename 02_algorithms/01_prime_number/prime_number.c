#include <stdio.h>
#include <stdlib.h>

void prime_number(int number) {
  if (number <= 1) {
    return;
  }

  for (int i = 2; i < number; i++) {

    if (number % i == 0) {
      return;
    }
  }

  printf("\n%d is Prime", number);

  return;
}

int main() {    
  for (int x = 0; x <= 11; x++) {
    prime_number(x);
  }
}