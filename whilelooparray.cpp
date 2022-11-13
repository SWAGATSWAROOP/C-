#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int z=n;
    int arr[n];
    while(--n>=0){
        cin>>arr[n];
    }
    int i=0;
    while(i<z){
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<endl;
    return 0;
}