#include <stdio.h>
#include "random.h"  // Include the Random.h header file

int main() {
    int n;
    printf("Enter number of random numbers to generate: ");
    scanf("%d", &n);

    int a[n]; // Declare array in main()

    srand(time(0)); // Seed random number generator only once in main()

    random(a, n); // Call the function from header

    return 0;
}
