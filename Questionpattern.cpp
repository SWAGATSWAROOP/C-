#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Give the number of rows: ";
    cin>>n;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
    return 0;
}