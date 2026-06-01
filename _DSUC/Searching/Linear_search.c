// Data can be any order sorted ort not sorted.
#include <stdio.h>
#include "random.h"
int linear_srch(int[], int, int);
int main()
{
    int result, n;
    printf("Enter number of array elements to be generated: ");
    scanf("%d", &n);
    int a[n], item;
    srand(time(0));
    random(a, n);
    printf("Enter the item value to search: ");
    scanf("%d", &item);
    result = linear_srch(a, n, item);
    if (result == -1)
    {
        printf("Element not found at any index!");
    }
    else
        printf("Element is found at index: %d", result);
    return 0;
}
int linear_srch(int a[], int n, int item)
{
    for (int i = 0; i < n; i++)
    {
        if (item == a[i])
            return i;
    }
    return -1;
}