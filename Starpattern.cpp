#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<"  ";
        }
        for(int z=1;z<=i;z++){
            cout<<"* ";
        }
        for(int m=2;m<=i;m++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int k=1;k<=n-i;k++){
            cout<<"  ";
        }
        for(int z=1;z<=i;z++){
            cout<<"* ";
        }
        for(int m=2;m<=i;m++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}