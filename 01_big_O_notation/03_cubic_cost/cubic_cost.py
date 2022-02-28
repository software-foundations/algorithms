"""
O(n³)
"""


def cubic_cost(n: int) -> None:
    for i in range(n):
        print(i)

        for j in range(n):
            print(j)

            for k in range(n):
                print(k)


def cubic_cost_way_02(n: int) -> None:
    for i in range(n ** 3):
        print(i)


if __name__ == "__main__":
    cubic_cost(n=3)
    cubic_cost_way_02(n=3)
