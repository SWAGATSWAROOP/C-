#include<iostream>
using namespace std;

int GCD(int n,int m){
    bool x = n>m? 1:0;
    if(x==true){
        if(n%m==0){
            return m;
        }
        else{
            for(int i=m;i>1;i--){
                if((m%i==0) && (n%i==0)){
                    return i;
                }
            }
            return 1;
        }
    }
    else{
        if(m%n==0){
            return m;
        }
        else{
            for(int i=n;i>1;i--){
                if((m%i==0) && (n%i==0)){
                    return i;
                }
            }
            return 1;
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    cout<<GCD(n,m)<<endl;
    return 0;
}