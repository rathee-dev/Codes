#include <stdio.h>
#include "random.h"
#include "traverse.h"
void insertion_sort(int[], int);
void main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    srand(time(0));
    random(a, n);
    printf("Array after sorting: ");
    insertion_sort(a, n);
    traverse(a, n);
}
void insertion_sort(int a[], int n)
{
    int temp, i, j;
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            temp = a[j];
            if (temp < a[j - 1])
            {
                a[j] = a[j - 1];
                a[j - 1] = temp;
                // a[j + 1] = a[j];}
            }
            else
                break;
        }
    }
}
