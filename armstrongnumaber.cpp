#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    
    cin>>n;
    int orign=n;
    int reverse=0;
    int sum=0;
    while(n>0){
        int lastdigit=n%10;
        reverse=pow(lastdigit,3);
        sum=sum+reverse;
        n=n/10;

    }
    int d = sum==orign?1:0;
    switch (d){
        case 1:
        cout<<"Armstrong Number"<<endl;
        break;
        case 0:
        cout<<"Not Armstrong Number"<<endl;
        break;
    }
    return 0;
}