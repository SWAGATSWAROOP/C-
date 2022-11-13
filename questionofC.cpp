#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b,c,d,k,l,m,n;
    cin>>a>>b>>c>>d;
    if(a*a>=4*(b-c)){
        l= sqrt(a*a - 4*(b-c));
        if((a+l)%(2*a)==0){
            m = (a+l)/(2*a);
            n = b - a*m;
            cout<<"The value of a is: "<<a<<" the value of r is: "<<m<<" the value of d is: "<<n<<endl;
            return 0;
        }
        else if((a-l)%(2*a)==0){
            m = (a-l)/(2*a);
            n = b - a*m;
            cout<<"The value of a is: "<<a<<" the value of r is: "<<m<<" the value of d is: "<<n<<endl;
            return 0;
        }
        else{
            cout<<"There is no integer value of r so no solution."<<endl;
            return 0;
        }

    }
    else{
        cout<<"There is no integer value of r so no solution."<<endl;
        return 0;
    }
    
}