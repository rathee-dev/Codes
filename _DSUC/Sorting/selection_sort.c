// code with harry.
#include <stdio.h>
#include "random.h"
#include "traverse.h"
void selection_sort(int[], int);
void main()
{
    int n;
    printf("Enter the number of terms of the array: ");
    scanf("%d", &n);
    int a[n];
    srand(time(0));
    random(a, n);
    printf("Array elements after sorting are: ");
    selection_sort(a, n);
    traverse(a, n);
}
void selection_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++) // n-1.. number of passes.
    {
        int loc = i; // index_min=loc
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[loc])
                loc = j;
        }
            int temp;
            temp = a[i];
            a[i] = a[loc];
            a[loc] = temp;
        
    }
}