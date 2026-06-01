#include <stdio.h>
#include "random.h"
#define max 100
int linear_rec(int[], int, int);
int linear_rec(int a[], int n, int item)
{
    if (item == a[n - 1])
        return n - 1;
    else if (n-1 == 0)
        return -1;
    else
        return linear_rec(a, n - 1, item);
}
int main()
{
    int result, n;
    printf("Enter number of array elements to be generated: ");
    scanf("%d", &n);
    int a[max], item;
    srand(time(0));
    random(a, n);
    printf("Enter the item value to search: ");
    scanf("%d", &item);
    result = linear_rec(a, n, item);
    if (result == -1)
    {
        printf("Element not found at any index!");
    }
    else
        printf("Element is found at index: %d", result);
    return 0;
}