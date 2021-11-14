"""O(n²)"""


def quadraticCost(n: int) -> None:
    for i in range(n):
        print(i)

        for j in range(n):
            print(j)


if __name__ == "__main__":
    quadraticCost(n=3)
