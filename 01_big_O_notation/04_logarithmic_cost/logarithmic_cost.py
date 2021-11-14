"""O(log n)"""


def logarithmic_cost(n: int) -> None:
    i: int = 2
    while i <= n:
        print(i)
        i *= 2


if __name__ == "__main__":
    logarithmic_cost(65)
