#include <iostream>
using namespace std;
int main(){
    cout<<"Calculator of 2 num"<<endl;
    int a,b,k;
        cout<<"Enter the First Number:";
        cin>>a;
        cout<<"Enter the Second Number:";
        cin>>b;
        cout<<"What Do You Want To Calculate give the serial no:\n 1.Sum\n 2.Sub\n 3.product\n 4.division\n 5.remainder\n 6.factorial\n 7.prime or not\n 8.prime number between first & second number\n Enter Your Choice:";
    cin>>k;
    switch (k){
        case 1:
        cout<<"Sum is "<<a+b<<endl;
        break;
        case 2:
        cout<<"Sub First-Second:"<<a-b<<" Sub Second-first:"<<b-a<<endl;
        break;
        default:
        cout<<"Invalid Option Choosen"<<endl;
        break;
        case 3:
        cout<<"Product is "<<a*b<<endl;
        break;
        case 4:
        if(b==0){
            cout<<"The Number Is not Divisible by 0"<<" second/first is 0"<<endl;
        }
        else{
        cout<<"Division is First/Second:"<<a/b<<" Second/first:"<<b/a<<endl;
        }
        break;
        case 5:
        cout<<"Remainder is First%Second:"<<a%b<<" Second%First:"<<b%a<<endl;
        break;
      

        case 7:
        int g;
        for ( g=2;g<a;g++){
            if(a%g==0){
                cout<<"The First Number Is Not Prime"<<endl;
                break;
            }
        }
            if (a==g){
                cout<<"The First Number Is Prime"<<endl;
            }
        int o;
        for ( o=2;o<b;o++){
            if(b%o==0){
                cout<<"The Second Number Is Not Prime"<<endl;
                break;
            }
        }
            if (b==o){
                cout<<"The  Second Number Is Prime"<<endl;
            }
        break;
        case 8:
        for (int num=a;num<=b;num++){
            int y;
            for (y=2;y<num;y++){
                if(num%y==0){
                    break;
                }
            }
                if (y==num){
                    cout<<"The Number Is Prime"<<y<<endl;
                }
            
        }
        break;
        case 6:
        int fact=1;
        for(int i=1;i<=a;i++){
            fact=fact*i;
        }
        cout<<"Factorial of first number:"<<fact<<endl;
        int z=1;
        for(int x=1;x<=b;x++){
            z=z*x;
        }
        cout<<"Factorial of Second Number:"<<z<<endl;
        break;



        
        

        


    }
    return 0;
}