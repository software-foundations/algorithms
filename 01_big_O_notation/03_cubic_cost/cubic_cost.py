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


if __name__ == "__main__":
    cubic_cost(n=3)
