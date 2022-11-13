 #include<iostream>
using namespace std;

int factorial(int n){
    if(n<2){
        return 1;
    }
    return n*factorial(n-1);
}
int fibbo(int n){
    if(n<2){
        return 1;
    }
    return fibbo(n-2)+fibbo(n-1);

}

int main(){
    int c;
    cin>>c;
    cout<<factorial(c)<<endl;
    cout<<fibbo(c)<<endl;
    return 0;
}