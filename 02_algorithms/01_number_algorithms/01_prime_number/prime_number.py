"""
Complexity

prime_number_way_01 -> O(n)
prime_number_way_02 -> O(sqrt(n))
"""


def print_prime(number: int):
    print(f'{number} is Prime')


def prime_number_way_01(number: int) -> None:
    if number <= 1:
        return

    for i in range(2, number, 1):
        if number % i == 0:
            return

    print_prime(number)


def prime_number_way_02(number: int) -> None:

    if number <= 1:
        return

    if number <= 3:
        print_prime(number)

    # skip middle five number between [i, i+6]
    if number % 2 == 0 or number % 3 == 0:
        return

    """
    test until square root of number
    'cause n*n != prime -> n != prime
    """
    i = 5
    for i in range(5, i * i <= number, 6):
        if number % i == 0 or number % (i + 2) == 0:
            return

    print_prime(number)


if __name__ == '__main__':
    for x in range(0, int(10e4), 1):
        # prime_number_way_01(x)
        prime_number_way_02(x)
