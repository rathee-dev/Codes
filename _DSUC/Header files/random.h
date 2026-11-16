#ifndef RANDOM_H
#define RANDOM_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function definition (not just declaration)
void random(int num[], int n)
{
    for (int i = 0; i < n; i++)
        num[i] = rand() % 100; // Generate random number between 0 and 99

    printf("Random numbers are: ");
    for (int i = 0; i < n; i++)
        printf("%d ", num[i]);
    printf("\n");
}
#endif
