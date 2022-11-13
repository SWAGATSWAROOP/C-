#include<iostream>
using namespace std;
void print(int num){
    cout<<num<<endl;
    return;

}
int fact(int n){
    int z=1;
   for(int i=1;i<=n;i++){
        z*=i;
        }
    return z;
}
int main(){
    cout<<"Give the number to calculate factotial:";
    int a,b;
    cin>>a>>b;
    int d= fact(a);
    int c=fact(b);
    
    print(d);
    print(c);
    return 0;
}