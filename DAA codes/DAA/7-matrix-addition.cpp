#include <iostream>
using namespace std;

int main(){
    int r,c;//dimensions in a matrix
    cout<<"Enter row and column number: "<<endl;
    cin>>r>>c;
    int m1[r][c], m2[r][c];
    cout<<"Enter Elememts of Matrix 1:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>m1[i][j];
        }
    }

    cout<<"Enter Elememts of Matrix 2:"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>m2[i][j];
        }
    }
    cout<<"After Addition: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<(m1[i][j]+m2[i][j])<<" ";
        }
        cout<<endl;
    }
}