#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        for(int l=2;l<=i;l++){
            cout<<l<<" ";
        }
        cout<<endl;
    }
    return 0;
}