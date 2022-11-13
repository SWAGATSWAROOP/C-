#include<iostream>
using namespace std;
int fact(int n,int k=1){
    for (int i=1;i<=n;i++){
        k*=i;
    }
    return k;
}
void pascal(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
                cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return;
}
int main(){
    int num;
    cout<<"Enter The Number:";
    cin>>num;
    pascal(num);
    return 0;
}