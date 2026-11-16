#include <stdio.h>

int main() {
    int count = 0;

    while (count < 70000000) {
        printf("Happy Birthday, %d times\n", count);
        count++;
    }

    return 0;
}

