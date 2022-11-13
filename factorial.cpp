#include <iostream>
using namespace std;

int main(){
    int n,fact;
    cout<<"Enter the number the calculate the factorial:";
    cin>>n;
    fact=1;
    for (int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<"The factorial of "<<n<<" is:"<<fact<<endl;
    return 0;
}