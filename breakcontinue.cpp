#include <iostream>
using namespace std;
int main(){
    int pm=3000;
    for(int date=1;date<=31;date++){
        if(date%2==0){
            continue;
        }
        if(pm==0){
            break;
        }
        cout<<"Go Out today:"<<date<<endl;
        pm=pm-600;
    }
    return 0;
}