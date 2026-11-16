#include<stdio.h>
int main()
{
   FILE *fp;
   fp=fopen("Create file.txt","w");
   if (fp==NULL)
   printf("File can not be found");
   else
   printf("File has be been found and created successfully.");
    
    return 0;
}