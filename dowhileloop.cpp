#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    do{
        cout<<n+1<<endl;
        cin>>n;
    }while(n>0);
    return 0;
}