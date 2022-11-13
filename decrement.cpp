#include <iostream>
using namespace std;
int main(){
    int i;
    cin>>i;
    i=i++ + i-- + --i - i;
    cout<<i<<endl;
    return 0;
}