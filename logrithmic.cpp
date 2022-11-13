#include<iostream>
#include<cmath>
using namespace std;

float nlog(int a){
    float z =(a-1)/a;
    float f = (a-1)/a;
    for(int i=2;i<8;i++){
        f += pow(z,i)*0.5;
    }
    return f;
}
int main(){
    int x;
    cout<<"The input the number to calculate log :";
    cin>>x;
    //float d=nlog(x);
    //cout<<d<<endl;
    double z =(x-1)/x;
    cout<<z<<endl;
    double f = z;
    for(int i=2;i<8;i++){
        f += pow(z,i)*0.5;
    }
    cout<<f<<endl;
    return 0;
}