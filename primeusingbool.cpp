#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool f=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"Non Prime"<<endl;
            f=1;
            break;
        }
    }
    if(f==0){
        cout<<"Prime"<<endl;
    }
    return 0;
}