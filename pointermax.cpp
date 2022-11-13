#include<iostream>
using namespace std;
void swap(int c,int d){
      int temp= c;
      c=d;
      d=temp;
}
void swappointer(int*a ,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void swaprefvar(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int & swaprefvar2(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    return a;
}
int main(){
    int a=6,b=9;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    swappointer(&a,&b);
    cout<<a<<" "<<b<<endl;
    swaprefvar(a,b);
    cout<<a<<" "<<b<<endl;
    swaprefvar(a,b);
    cout<<a<<" "<<b<<endl;
    swaprefvar2(a,b)=766;
    cout<<a<<" "<<b<<endl;
    return 0;
}