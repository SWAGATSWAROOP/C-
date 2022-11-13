#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(5,1);
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    cout<<v.at(1)<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    v.pop_back();
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.clear();
    cout<<v.size()<<endl;
    return 0;
}