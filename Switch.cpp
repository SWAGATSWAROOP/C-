#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Enter The Character:";
    cin>>button;
    switch (button)
    {
        case 'a':
        cout<<"hello"<<endl;
        break;
        case 'b':
        cout<<"Hi"<<endl;
        break;
        case 'c':
        cout<<"hola"<<endl;
        break;
        default:
        cout<<"niteamo"<<endl;
        break;

    }
    return 0;
}