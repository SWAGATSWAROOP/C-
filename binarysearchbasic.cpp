#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key,int z=1){
    z=n/2;
    if(key<arr[z]){
        for(int i=0;i<z;i++){
            if(arr[i]==key){
                return i;
            }
        }
    }
    else if(key>arr[z]){
        for(int i=z;i<n;i++){
            if(arr[i]==key){
                return i;
            }
        }
    }
    else if(arr[z]==key){
        return z;
    }
    return -1;
}
int main(){
    int n,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;
    cout<<binarysearch(arr,n,key)<<endl;
    return 0;
}