#include<iostream>
using namespace std;

int main(){
    int a=3;
    int* b=&a;
    int** c=&b;
    cout<<b<<endl<<&a<<endl<<*b<<endl<<c<<endl<<*c<<endl<<**c<<endl;
    return 0;
}