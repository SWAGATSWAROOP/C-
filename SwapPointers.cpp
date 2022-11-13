#include<iostream>
#include<string>
using namespace std;
void swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
    
}
int* increament(int* a){
    (*a)++;
    (*a)++;
    return a;
}
int main(){
    int n=10,z=19;
    int*a=&n;
    int*b=&z;
    swap(b,a);
    cout<<n<<" "<<z<<endl;
    return 0;
}