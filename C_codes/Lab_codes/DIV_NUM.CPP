//WAP to divide a number by another number and find its remainder.
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
 int a,b;
 clrscr();
 printf("Enter the value ofa and b is ");
 scanf("%d%d",&a,&b);
 if(b==0)
 {
 printf("\nError : Divisible by 0 is not defined",b);
 }
 else
 printf("The value of remainder %d/%d is %d",a,b,a%b);
 getch();
 return 0;
 }
