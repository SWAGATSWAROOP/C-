#include<iostream>
using namespace std;
int main(){
    int a,d,sum,r,n;
    cout<<"Enter first term of AP:";
    cin>>a;
    cout<<"Enter common difference of AP:";
    cin>>d;
    cout<<"Enter The number of Terms:";
    cin>>n;
    r= a+(n-1)*d;
    sum= n*(2*a+(n-1)*d)/2;
    cout<<"The Last term is:"<<r<<endl<<"The Sum of all terms:"<<sum<<endl;

}