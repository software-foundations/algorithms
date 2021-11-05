#include <stdio.h>
#include <stdlib.h>

// not working with qsort
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

// working with qsort
int compare_version_2(const void *x_void, const void *y_void)
{
    // cast the void pointer to a int pointer
    int x = *(int *)x_void;
    int y = *(int *)y_void;
    return x - y;
}

int main()
{
    
    test_intcompare();

    // Sorting    
    int a[] ={8, 7, 2, 4, 6, 3, 5, 1, 9, 0};
    int b[] ={8, 7, 2, 4, 6, 3, 5, 1, 9, 0};
    int lenght = 10;

    qsort(a, lenght, sizeof(int), compare_version_2);

    for (int i = 0; i < lenght; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    qsort(b, lenght, sizeof(int), compare_version_2);

    for (int j = 0; j < lenght; j++)
    {
        printf("b[%d] = %d\n", j, b[j]);
    }

    return 0;

}