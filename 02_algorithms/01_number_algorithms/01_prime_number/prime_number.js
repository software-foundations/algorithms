/**
 * Complexity
 *
 * primeNumberWay01 -> O(n)
 * primeNumberWay02 -> O(sqrt(n))
 */

function printPrime(number) { console.log(`${number} is Prime`) }

function primeNumberWay01(number) {
  if (number <= 1) {
    return
  }

  for (let i = 2; i < number; i++) {
    if (number % i == 0) {
      return
    }
  }

  return printPrime(number)
}

/**
 * @name primeNumberWay02
 * @description 6k + 1, to k > 0, excluding {2, 3, 5}
 * @param {number} int
 *
 * @returns {undefined, but print in console}
 */
function primeNumberWay02(number) {

  if (number <= 1)
    return;
  if (number <= 3)
    return printPrime(number);

  // skip middle five number between [i, i+6]
  if (number % 2 == 0 || number % 3 == 0)
    return;

  /**
   * test until square root of number
   * 'cause n*n != prime -> n != prime
   */
  for (let i = 5; i * i <= number; i = i + 6) {
    if (number % i == 0 || number % (i + 2) == 0) {
      return
    }
  }

  return printPrime(number)
}

function main() {

  for (let x = 0; x <= 10e4; x++) {
    // primeNumberWay01(x)
    primeNumberWay02(x)
  }
}

main()