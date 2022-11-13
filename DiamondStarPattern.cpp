#include<iostream>
using namespace std;

int main(){
    int n,k=1;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i<=n/2){
            for(int j=0;j<n;j++){
                if(j>=n/2-i && j<=n/2+i){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        else{
            for(int j=0;j<n;j++){
                if(j<k || j>n-1-k){
                    cout<<" ";
                }
                else{
                    cout<<"*";
                }
            }
        }
        if(i>n/2){
            k++;
        }
        cout<<endl;
    }
    return 0;
}