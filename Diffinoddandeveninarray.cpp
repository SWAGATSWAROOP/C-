#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter The Elements of Array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j = 0;
    while(j<n){
        for(int i=j+1;i<n;i++){
            int temp= arr[j];
            if(arr[i]%2==0){
                arr[j]=arr[i];
                arr[i]=temp;
                break;
            }
        }
        j++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}