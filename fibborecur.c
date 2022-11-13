#include<stdio.h>

void fibbo(int n){
    if(n==0){
        return;
    }
    static int s = 0;
    static int t1 = 0;
    static int t2 = 1;
    if(s == 0){
        printf("%d %d ",t1,t2);
    }
    s = t1 + t2;
    printf("%d ",s);
    t1 = t2;
    t2 = s;
    fibbo(n-1);
}

int main(){
    int n;
    printf("Enter the number of terms in fibonaaci series: ");
    scanf("%d",&n);
    fibbo(n-2);
    printf("\n");
    return 0;
}