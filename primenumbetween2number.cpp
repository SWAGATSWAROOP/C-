#include <iostream>
using namespace std;
int main(){
    int a,b,i;
    cout<<"Enter The lower limit of the range:";
    cin>>a;
    cout<<"Enter The upper limit of the range:";
    cin>>b;
    for(int num=a; num<=b;num++){
        for(i=2;i<num;i++){
            if(num%i==0){
                break;
            }
        }
        if (i==num){
            cout<<num<<endl;
        }
    }
    return 0;

}