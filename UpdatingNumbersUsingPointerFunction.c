#include<stdio.h>
#include<stdlib.h>

void update(int *a,int *b){
    *a = *a + *b;
    *b = abs(*a - 2*(*b));
}

int main(){
    int a,b;
    int *pa =&a;
    int *pb =&b;

    scanf("%d %d",&a,&b);
    update(pa,pb);
    printf("%d \n%d \n",a,b);
    return 0;
}