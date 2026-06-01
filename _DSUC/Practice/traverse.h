#ifndef TRAVERSE_H
#define TRAVERSE_H
#include<stdio.h>
void traverse(int[], int);
void traverse(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}
#endif