#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    int m=(2*n-1)/2;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<2*n-1;j++){
            if((j>=m-i) && (j<=m+i)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n/2;i++){
        for(int j=0;j<2*n-1;j++){
            if((j>=m-6) && j<=(m+5)){
                cout<<"|";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}