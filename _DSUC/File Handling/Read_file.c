#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int k;
    fp = fopen("file modes details.txt", "r");
    if (fp == NULL)
        printf("File can not be found");
    else
    {   
        while (ch = fgetc(fp) != EOF)
        {
            printf("%c", ch);
            k++;
        }
    }
    printf("%d number of characters are copied to the file.", k);
    fclose(fp);
    return 0;
}