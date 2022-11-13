#include<iostream>
using namespace std;

void arrdecay(int *p){
    cout<<"The size pf modified array: ";
    cout<<sizeof(p)<<endl;
}
void arr2dec(int (*p)[7]){
    cout<<"The Size of second modified operator is: ";
    cout<<sizeof(p)<<endl;
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    cout<<sizeof(arr)<<endl;
    arrdecay(arr);
    arr2dec(&arr);
    return 0;
}