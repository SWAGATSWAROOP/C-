#include<iostream>
using namespace std;

int sum(int a,int b){
    static int c=0;
    c=c+1;

    return a+b+c;
}
int main(){
    int a=9,b=8;
    cout<<sum(a,b)<<endl;
    cout<<sum(a,b)<<endl;
     cout<<sum(a,b)<<endl;
      cout<<sum(a,b)<<endl;
    return 0;
}