#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key){
    if(size==0){
        return -1;
    }
    else if(arr[size-1]==key){
        return size-1;
    }
    return linearSearch(arr, size-1, key);
}
int main(){
    int arr[10];
    int key;
    cout<<"Enter 10 elements of the array: "<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key you want to search: ";
    cin>>key;
    int index = linearSearch(arr, 10, key);
    if(index==-1) cout<<"Key not Found";
    else cout<<"Key Found at index: "<<index<<endl;
    return 0;
}