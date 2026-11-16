#include <stdio.h>
#include <conio.h>  // Required for getch()

int main() {
    int n;
    printf("\nSize of the array: ");
    scanf("%d", &n);
    
    int a[n], i = 0;
    char ch;

    printf("\nEnter numbers (Press 'q' to stop):\n");

    while (i < n) {
        ch = getche();  // Read input without pressing Enter

        if (ch== 'q')  // Stop input when 'q' is pressed
            break;

        if (ch >= '0' && ch <= '9') {  // Ensure input is a digit
            a[i] = ch - '0';  // Convert char to int
            printf("%d ", a[i]);  // Display input
            i++;
        }
    }

    printf("\nStored elements:\n");
    for (int j = 0; j < i; j++) {
        printf("%d ", a[j]);
    }

    return 0;
}
