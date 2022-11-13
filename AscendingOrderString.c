#include<stdio.h>
#include<string.h>

void swap(char* a,char* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Sort(char *m){
    for(int i=0;i<strlen(m);i++){
        for(int j=0;j<strlen(m)-i-1;j++){
            if(m[j]>m[j+1]){
                swap(&m[j],&m[j+1]);
            }
        }
    }
}

void Display(char *m){
    for(int i=0;i<strlen(m);i++){
        printf("%c",m[i]);
    }
    printf("\n");
}

int main(){
    printf("Enter The Name(in uppercase or lowercase): ");
    char m[100];
    scanf("%s",m);
    Sort(m);
    Display(m);
    return 0;
}