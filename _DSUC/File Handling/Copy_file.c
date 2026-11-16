#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("Create file.txt", "r");
    fp2 = fopen("Copied file.txt", "w");
    int k=0;
    if (fp1 == NULL || fp2 == NULL)
    {
        printf("file can not open operation failed.");
        // exit(0);
        return 0;
    }
    else
    while(ch=fgetc(fp1)!=EOF)
    {
        fputc(ch,fp2);
        k++;
    }
    printf("%d number of characters are copied.",k);
    // fcloseall(); // It only works in some compiler and not a part of c header file.
        return 0;
}