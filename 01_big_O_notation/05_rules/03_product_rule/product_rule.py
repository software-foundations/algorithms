"""
 f(n) = O(p(n))
                -> O(p(n)q(n))
 g(n) = O(q(n))
"""


def product_fg(n):
    accum = 0

    # f
    for i in range(n):
        accum += 1

        # g
        for j in range(n):
            accum += 1

    return accum


if __name__ == '__main__':
    n = 5
    print(product_fg(n))
