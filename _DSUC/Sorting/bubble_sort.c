#include <stdio.h>
#include "traverse.h"
#include "random.h"

void bubble_sort(int a[], int n)
{
    int temp;
    for (int i = 0; i < n-1; i++)//number of comparison 
    {
        for (int j = 0; j < n - i - 1; j++)//comparison on each pass.
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j]= a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int n;
    printf("Enter the number of elements of the array:");
    scanf("%d", &n);
    int a[n];
    srand(time(0));
    random(a, n);
    printf("The sorted array is: ");
    bubble_sort(a, n);
    traverse(a, n);
    return 0;
}