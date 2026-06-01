#include <stdio.h>
#include "random.h"
void traverse(int[], int);
int main()
{
    int n;
    printf("Enter number of array elements to generate: ");
    scanf("%d",&n);
    int a[n];
    srand(time(0));
    random(a,n);
    // int n=sizeof(a)/sizeof(int);
    printf("Traversing number of elements of array: ");
    traverse(a,n);
    return 0;
}
void traverse(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
//can also be used.
//     int a[]={1,2,445,534,4344,444,4,45,24,44,235,6,543,3,34,14,4214,234434,4234,434,1,3,555,75};
//     int n=sizeof(a)/sizeof(int);
//     printf("Traversing number of elements of array: ");
//     traverse(a,n);
//     printf("\n Number of elements in the array: %d",n);
// return 0;
// int n;