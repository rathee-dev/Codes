#include <iostream>
using namespace std;

int main(){
    int A[2][2], B[2][2], C[2][2];
    cout<<"Enter Elememts of Matrix A:"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>A[i][j];
        }
    }

    cout<<"Enter Elememts of Matrix B:"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>B[i][j];
        }
    }

    //adding diagnonals and multiplying 
    int P=(A[0][0]+A[1][1])*(B[0][0]+B[1][1]);
    int Q=B[0][0]*(A[1][0]+A[1][1]);
    int R=A[0][0]*(B[0][1]-B[1][1]);
    int S=A[1][1]*(B[1][0]-B[0][0]);
    int T=B[1][1]*(A[0][0]+A[0][1]);
    int U=(A[1][0]-A[0][0])*(B[0][0]+B[0][1]);
    int V=(A[0][1]-A[1][1])*(B[1][0]+B[1][1]);

    C[0][0]=P+S+T+V;
    C[0][1]=R+T;
    C[1][0]=Q+S;
    C[1][1]=P+R+Q+U;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
}