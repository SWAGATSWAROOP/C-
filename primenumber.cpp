#include <iostream>
using namespace std;
int main(){
    int num,i;
    cout<<"Enter The Number:";
    cin>>num;
    for (i=2 ;i<num;i++){
        if(num%i==0){
            cout<<num<<" is not prime."<<endl;
            break;
        }
    }
    if (num==i){
        cout<<num<<" is a prime."<<endl;
    }
  
   
    return 0;
}