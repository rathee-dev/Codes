//codw with harry.
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
    for (int i = 1; i < n; i++)
    {
        int temp = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > temp) // for ascending order.
        // while(j>=0&&a[j]<temp)// for descending order.
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}
