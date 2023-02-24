#include<iostream>
#include<algorithm>
using namespace std;

int mcan(int arr[],int n){
    int count = 0,st = 1;
    sort(arr,arr+n);
    int mn = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i] > mn){
            st++;
            mn = arr[i];
        }
        count += st;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter the number of children :";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++) cin>>arr[i];
    cout<<"The Minimum candies required:- "<<mcan(arr,n)<<endl;
    return 0;
}