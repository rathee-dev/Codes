#include <stdio.h>
int main()
{    
        if (remove("File 1.txt") == 0)
            printf("File deleted successfully.");
    
    return 0;
}
// {
//     FILE *fp;
//     fp = fopen("File 1.txt", "r");
//     if (fp == NULL)
//         printf("File can not be found");
//     else
//     {
//         fclose(fp);
//         if (remove("File 1.txt") == 0)
//             printf("File deleted successfully.");
//         else
//         perror("Error deleting the file.");
//     }
//     return 0;
// }
