"""
Coeficient rule
f(n) == O(g(n)) -> c * f(n) == O(g(n)); c > 0

It means that if n -> oo, then c is not important, 'cause it's not related
to the input (n) lengh

# TIP: think in infite when form bigO notations
"""


def linear(n: int) -> int:
    accum: int = 0
    for i in range(n):
        accum += 1
    return accum


def c_linear(n: int) -> int:
    accum: int = 0
    c: int = 10
    for i in range(c * n):
        accum += 1
    return accum


if __name__ == "__main__":
    n = 4
    print(f"linear   -> {linear(n)}")
    print(f"c_linear -> {c_linear(n)}")
