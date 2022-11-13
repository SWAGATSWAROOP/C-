#include<iostream>
using namespace std;
int main(){
    int n,s;
    cin>>n>>s;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==s){
                cout<<"The starting position is: "<<i+1<<" the ending position is: "<<j+1<<endl;
                return 0;
            }
        }

    }
    cout<<"The Sum was not found."<<endl;
    return 0;
}