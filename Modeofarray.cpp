#include<iostream>
using namespace std;

void modeofarray(int arr[],int n){
    int mode=0,temp;
    for(int i=0;i<n;i++){
        int count=-1;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        mode=max(count,mode);
        if(mode==count){
            temp=arr[i];
        }
    }
    cout<<"The mode value is: "<<temp<<" and number of times it repeated: "<<mode<<endl;
}

int main(){
    int n;
    cout<<"Enter the number of elements in an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    modeofarray(arr,n);
    return 0;
}