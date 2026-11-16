#include <iostream>
#include <iterator> //to use size()
using namespace std;

//array must be sorted 
int BinSearch(int arr[], int key, int l, int r){
    int start=l;
    int end=r;
    while(start<=end){
        int mid=start+(end-start)/2;//prevent overflow
        if(key==arr[mid]) return mid;
        else if(key<arr[mid]) end=mid-1;
        else start=mid+1;
    }
    return -1;
}
int main(){
    int arr[10];
    int key;
    cout<<"Enter 10 elements of the array in sorted order: "<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key you want to search: ";
    cin>>key;
    int index=BinSearch(arr,key,0,sizeof(arr) / sizeof(arr[0])-1);
    if(index==-1) cout<<"Key not Found";
    else cout<<"Key Found at index: "<<index<<endl;
    return 0;
}

