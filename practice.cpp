#include<iostream>
#include<climits>

using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxno=INT_MIN;
    for(int i=0;i<n;i++){
        
        maxno=max(arr[i],maxno);
        cout<<maxno<<" ";
    }
    cout<<endl;
    return 0;
}