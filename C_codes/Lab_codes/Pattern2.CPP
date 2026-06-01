//Write the output of the code given below printing pattern.
#include <stdio.h>

int main()
{
    int i, j, r, c;
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    printf("\nEnter the number of rows:  ");
    scanf("%d", &r);
    printf("\nEnter the number of columns:  ");
    scanf("%d", &c);
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
            printf("%c ",ch);
            printf("\n");
    }
    return 0;
}