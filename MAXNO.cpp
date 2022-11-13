#include<iostream>
#include<climits>
using namespace std;
void maxarray(int arr[],int n){
    
    int z=INT_MIN;
    for(int i=0;i<n;i++){
       
        z=max(z,arr[i]);
        cout<<z<<" "<<endl;
       
    }
    
    
    return;
}
int main(){
    int n;
    cout<<"Enter the Number of Elements of Array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    maxarray(arr,n);
    return 0;
}