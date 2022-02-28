"""O(n²)"""


def quadratic_cost(n: int) -> None:
    for i in range(n):
        print(i)

        for j in range(n):
            print(j)


def quadratic_cost_way_02(n: int) -> None:
    for i in range(n ** 2):
        print(i)


if __name__ == "__main__":
    quadratic_cost(n=3)
    quadratic_cost_way_02(n=3)
