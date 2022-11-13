#include <iostream>
using namespace std;
float add(float x,float y){
    float sum= x+y;
    return sum;
}
int main(){
    float a,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    return 0;
}