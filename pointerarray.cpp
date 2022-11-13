#include<iostream>
using namespace std;

int main(){
    int marks[]={2,4,7,9};
    int* b=marks;
    for(int i=0;i<4;i++){
        cout<<"Elements of array: "<<*b<<endl;
        b++;
    }
    return 0;
}