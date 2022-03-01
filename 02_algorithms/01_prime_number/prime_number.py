def prime_number(number: int) -> None:
    if number <= 1:
        return

    for i in range(2, number, 1):
        if number % i == 0:
            return

    print(f'{number} is Prime')


if __name__ == '__main__':
    for x in range(0, 11, 1):
        prime_number(x)

