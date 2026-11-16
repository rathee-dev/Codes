#include<stdio.h>
void create_triplet(int m[][],int ,int);
int main(){
    int r,c;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&r,&c);
    int m[r][c];
    printf("Enter the elements of the Matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&m[i][j]);
        }
    }
    create_triplet(m,r,c);
    return 0;
}
void create_triplet(int m[][],int r ,int c){
    int k=1;
    int (*s)[3];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(m[i][j]!=0){
                s[k][0]=i;
                s[k][1]=j;
                s[k][2]=m[i][j];
                k++;
            }
        }
    }
    s[0][0]=r;
    s[0][1]=c;
    s[0][2]=k-1;
}