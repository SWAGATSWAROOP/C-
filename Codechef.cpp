#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n>0){
	    int a,b,c;
	    cin>>a>>b;
	    float s;
	    s = (float)b/a;
	    c = b/a;
	    if(a>=b){
	        cout<<0<<endl;
	    }
	    else if(s==c && a!=b){
	        cout<<(c-1)<<endl;
	    }
	    else{
	        cout<<c<<endl;
	    }
	    n--;
	}
	return 0;
}