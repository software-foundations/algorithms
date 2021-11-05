#include <stdio.h>
#include <stdlib.h>

int intcompare(int *i, int *j)
{
    if (*i > *j) return (1);
    if (*i < *j) return (-1);
    return (0);
}

int test_intcompare()
{
    int a = 0;
    int n = 1;

    // pointers declaration
    int *pointer_a;   
    int *pointer_n;

    // store address of a and v in pointer variable    
    pointer_a = &a;
    pointer_n = &n;

    int result = intcompare(pointer_a, pointer_n);

    printf("Max value is : %d\n", result);

    return (0);
}

int main()
{
    
    test_intcompare();

    // Sorting
    // Not working yet
    int a[11] = {0, 1, 3, 5, 7, 2 , 4, 9, 8, 10, 6};
    int n = 1;    
    qsort(a, n, sizeof(int), intcompare);
}