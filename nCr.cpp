#include<iostream>
using namespace std;
int fact(int n,int f=1){
    for(int i=1;i<=n;i++){
        f=f*i;

    }
    return f;
}
int main(){
    int n,r;
    cout<<"Give n:";
    cin>>n;
    cout<<"Give r:";
    cin>>r;
    int z,y,x,k;
    z = fact(n);
    y= fact(r);
    x= fact(n-r);
    k = z/(y*x);
    cout<<"nCr:"<<" "<<k<<endl;
    return 0;

}