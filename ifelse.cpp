#include<iostream>
using namespace std;

int main()
{
    
        freopen("Input.txt","r",stdin);
        freopen("Output.txt","w",stdout);
    

    int savings;
    cin>>savings;

    if(savings>5000){
        if(savings>10000){
            cout<<"Roadtrip with Neha\n";
        }else {
            cout<<"shopping with Neha\n";
        }
        
    }else if(savings>2000) {
        cout<<"Rashmi\n";
    }else {
        cout<<"Friends\n";
    }    

    return 0;  
}