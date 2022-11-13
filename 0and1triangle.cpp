#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            int c;
            c= (i+j)%2==0?1:0;
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}