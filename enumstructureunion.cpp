#include<iostream>
using namespace std;

struct employee{
    int empid;
    float salary;
    char favchar;
};
union money{
    int salary;
    char car;
    float pounds;
};
int main(){
    enum meal{breakfast,lunch,dinner};
    meal m2;
    m2=breakfast;
    cout<<m2<<endl<<lunch<<endl<<dinner<<endl;
    /*employee harry;
    harry.empid=1;
    harry.salary=1200000;
    harry.favchar='c';
    cout<<harry.salary<<endl;
    cout<<harry.favchar<<endl;
    money m1;
    m1.car='l';
    m1.salary=10;
    cout<<m1.salary<<endl;*/

    return 0;
}