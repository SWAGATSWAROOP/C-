#include<iostream>
using namespace std;

void bubblesort(int arr[],int n,int i =0){
    if(n==1){
            return;
        }
    else if(i==n-1){
        i=0;
        n--;
        bubblesort(arr,n,i);
    }
    else{
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            i++;
            bubblesort(arr,n,i);
        }
        else{
            i++;
            bubblesort(arr,n,i);
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubblesort(arr,n);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}