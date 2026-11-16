#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char ch[250];
    fp = fopen("Create file.txt", "w");
    if (fp == NULL)
        printf("File can not be found");
    else

    {
        printf("Write here to add data to the file.\n");
        // gets(ch);
        fgets(ch, sizeof(ch), stdin);
        ch[strcspn(ch, "\n")] = '\0';
    }
    int i, k = 0;
    while (ch[i] != '\0')
    {
        fputc(ch[i], fp);
        i++;
        k++;
    }
    printf("%d number of characters are copied to the file.", k);
    fclose(fp);
    return 0;
}