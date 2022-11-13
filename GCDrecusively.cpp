#include<iostream>
using namespace std;

int gcd(int m,int n){
    if(n>m){
        return gcd(n,m);
    }
    else if(m%n==0){
        return n;
    }
    else{
        return gcd(n,m%n);
    }
}

int main(){
    cout<<gcd(90,30)<<endl;
    


    return 0;
}