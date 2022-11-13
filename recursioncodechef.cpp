#include<iostream>
using namespace std;

int sum(int a,int b){
    int z=((b*(b+1))/2);
    a--;
    if(a!=0){
        return sum(a,z);
    }
        return z;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,d;
        cin>>d>>a;
        cout<<sum(d,a)<<endl;
    }
    return 0;
}