#include<iostream>
using namespace std;

int main(){
    int n,c,k;
    cin>>n>>c;
    int arr[n][c];
    for(int i=0;i<n;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the value you want search:";
    cin>>k;
    bool a=1;
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==k){
                a=0;
                cout<<"Element Found"<<endl;
                cout<<"The index is :"<<i<<" "<<j<<endl;
                break;
            }
        }
        if(a==false){
                break;
            }
    }
    if(a==true){
        cout<<"Element Not Found"<<endl;
    }
    return 0;
}