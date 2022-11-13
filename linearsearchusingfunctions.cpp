#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,key,d;
    cout<<"Enter no of elements in list:";
    cin>>n;
    cout<<"Enter the elements of array:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key:";
    cin>>key;
    d=linearSearch(arr,n,key);
    switch(d) {
        case -1:
        cout<<"The key is not present in array.\n";
        break;
        default:
        cout<<d<<" "<<"is the index.\n";
        break;

    }
    return 0;
}