#include<stdio.h>
#include"traverse.h"
#include"random.h"

int main(){
    int n,m;
    srand(time(0));
    printf("Enter elements of array to generate:");
    scanf("%d", &m);
    int a[m];
    random(a,m);
    traverse(a,m);
    return 0;
}