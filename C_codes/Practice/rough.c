#include<stdio.h>
int main(){
    int n,a=0,b=0,c=0;
    do{
        printf("Enter number:");
        scanf("%d",&n);
        if(n<0)
         a++;
        if(n==0)
         b++;
        if(n>0)
         c++;
        printf("The count of positive is %d\n",c);
        printf("The count of negative is %d\n",a);
        printf("The count of zero is %d\n",b);
    }
    while(1);
    return 0;
}