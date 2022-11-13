#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string n,m;
    getline(cin,n);
    n.append(" Swagat");
    cout<<n[2]<<endl;
    n.clear();
    getline(cin,m);
    n.compare(m);
    cout<<n.empty()<<" "<<m.empty()<<endl;
    m.erase(3,4);
    m.find("Swa");
    n.insert(0,"SWAGAT");
    cout<<m.length()<<" "<<n.length()<<endl;
}