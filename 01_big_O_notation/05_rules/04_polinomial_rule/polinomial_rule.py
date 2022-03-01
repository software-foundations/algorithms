"""
f(n) is polynominal of dregree k -> f(n) = O(n^k)
"""


def f(n: int):
    accum: int = 0

    for i in range(n * n):
        accum += 1

    return accum


if __name__ == "__main__":
    n = 5
    print(f(n))
