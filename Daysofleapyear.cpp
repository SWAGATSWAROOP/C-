#include<iostream>
#include<string>
using namespace std;

int noofdays(int n){
    int z = (n-1)/4;
    int k =365*(n-1) + z + 1;
    int l = k%7;
    return l; 
}
int main(){
    int n,z;
    cout<<"Enter the year: ";
    cin>>n;
    z = noofdays(n);
    string arr[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    cout<<"Day on January is: "<<arr[z]<<endl;
    return 0;
}