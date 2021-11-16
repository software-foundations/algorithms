"""
 f(n) = O(p(n))
                ->  O(p(n) + q(n))
 g(n) = O(q(n))
"""


def f(n):
    accum = 0
    for i in range(n):
        accum += 1
    return accum


def g(n):
    accum = 0
    c = 10
    for i in range(c * n):
        accum += 1

    return accum


def sum_fg(n):
    f(n)
    g(n)
    return 0


def sum_fg_v2(n):
    accum = 0
    c = 10

    for i in range(n):
        accum += 1

    for i in range(c * n):
        accum += 1

    return accum


if __name__ == '__main__':
    n = 5
    print(sum_fg(n))
    print(sum_fg_v2(n))
