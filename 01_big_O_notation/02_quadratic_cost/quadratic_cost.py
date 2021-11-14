"""O(n²)"""


def quadratic_cost(n: int) -> None:
    for i in range(n):
        print(i)

        for j in range(n):
            print(j)


if __name__ == "__main__":
    quadratic_cost(n=3)
