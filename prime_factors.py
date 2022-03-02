"""
Complexity

PrimeFacors -> O(sqrt(n))
"""


def primeFactors(number: int):
    """return prime numbers wich return number
    when are multipyed"""

    print(f"---{number}---")

    while number % 2 == 0:
        print(2)
        number = number / 2

    # skip one element
    i = 3

    while i * i <= number:

        while number % i == 0:
            print(i)
            number = number / i

        i = i + 2

    # when n is a prime number greather than 2
    if number > 2:
        print(number)


def main():
    for x in range(1, 31, 1):
        primeFactors(x)


if __name__ == '__main__':
    main()
