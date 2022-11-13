#include<iostream>
using namespace std;
int main(){
    int p,t;
    float r,si;
    cout<<"Enter Principal:";
    cin>>p;
    cout<<"Enter Time:";
    cin>>t;
    cout<<"Enter Rate:";
    cin>>r;
    si=(p*r*t)/100;
    cout<<"The Simple Interest is:"<<si<<endl;
    cout<<"Amount after SI:"<<p+si<<endl;
}