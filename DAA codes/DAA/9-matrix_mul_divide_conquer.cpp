//this will only work for square matrices
#include <iostream>
using namespace std;

void add(int A[10][10], int B[10][10], int C[10][10],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
}
void multiply(int A[10][10], int B[10][10], int C[10][10],int n){
    if(n==1) {
        C[0][0]=A[0][0]*B[0][0];//base case 
        return;
    }
    int k=n/2;//size of submatrix

    //quadrants or submatrices
    int A11[10][10],A12[10][10],A21[10][10],A22[10][10];
    int B11[10][10],B12[10][10],B21[10][10],B22[10][10];
    int C11[10][10]={0},C12[10][10]={0},C21[10][10]={0},C22[10][10]={0};//initialize submatrices of c as 0

    //temporary arrays to save data 
    int M1[10][10]={0},M2[10][10]={0};

    //copy matrix data to submatrices 
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            
           A11[i][j]=A[i][j];
           A12[i][j]=A[i][j+k];
           A21[i][j]=A[i+k][j];
           A22[i][j]=A[i+k][j+k];

           B11[i][j]=B[i][j];
           B12[i][j]=B[i][j+k];
           B21[i][j]=B[i+k][j];
           B22[i][j]=B[i+k][j+k];

        }
    }
    multiply(A11,B11,M1,k);
    multiply(A12,B21,M2,k);
    add(M1,M2,C11,k);

    multiply(A11,B12,M1,k);
    multiply(A12,B22,M2,k);
    add(M1,M2,C12,k);

    multiply(A21,B11,M1,k);
    multiply(A22,B21,M2,k);
    add(M1,M2,C21,k);

    multiply(A21,B12,M1,k);
    multiply(A22,B22,M2,k);
    add(M1,M2,C22,k);

    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            //merge the submatrices of C 
            C[i][j]=C11[i][j];
            C[i][j+k]=C12[i][j];
            C[i+k][j]=C21[i][j];
            C[i+k][j+k]=C22[i][j];
        }
    }

}
void printMatrix(int M[10][10],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the size of matrix in power of 2 : ";
    cin>>n;

    int A[10][10], B[10][10],C[10][10]={0};

    cout<<"Enter the elements of matrix A:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }

    cout<<"Enter the elements of matrix B:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>B[i][j];
        }
    }
    multiply(A,B,C,n);
    cout<<"Final Resultant Matrix:"<<endl;
    printMatrix(C,n);
    return 0;
}
