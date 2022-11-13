#include <iostream>
using namespace std;
int main(){
    int col,row;
    cin>>row>>col;
    for (int i=1;i<=row;i++){
        for (int z=1;z<=col;z++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}