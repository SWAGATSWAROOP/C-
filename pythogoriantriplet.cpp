#include<iostream>
#include<math.h>
using namespace std;
void triplet(float n,float z,float k){
    if(n>z && n>k){
        if(pow(n,2)==pow(z,2)+pow(k,2)){
            cout<<"The Number is pythogorian triplet"<<endl;
        }
        else{
            cout<<"The Number is not pythogorian triplet"<<endl;
        }
    }
    else if(k>n && k>z){
        if(pow(k,2)==pow(z,2)+pow(n,2)){
            cout<<"The Number is pythogorian triplet"<<endl;
        }
        else{
            cout<<"The Number is not pythogorian triplet"<<endl;
        }
    }
    else{
        if(pow(z,2)==pow(n,2)+pow(k,2)){
            cout<<"The Number is pythogorian triplet"<<endl;
        }
        else{
            cout<<"The Number is not pythogorian triplet"<<endl;
        }
    }
    return;
}
int main(){
    float a,b,c;
    cin>>a>>b>>c;
    triplet(a,b,c);
    return 0;

}