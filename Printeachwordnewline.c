#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char* m =(char*)malloc(100*sizeof(char));
    printf("Enter the sentence: ");
    gets(m);
    for(int i=0;i<strlen(m);i++){
        if(m[i]==' '){
            printf("\n");
            continue;
        }
        printf("%c",m[i]);
    }
    printf("\n");
    free(m);
    m = NULL;
    return 0;
}