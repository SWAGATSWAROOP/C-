#include<stdio.h>

int len(char s[]){
    int i,count=i=0;
    while(s[i]!='\0'){
        count++;
        i++;
    }
    return count;
}

void Pd(char s[]){
    int count = len(s);
    for(int i=count-1;i>=0;i--){
        if(s[i]!=s[count-i-1]){
            printf("Not Palindrome \n");
            return;
        }
    }
    printf("Palindrome \n");
}

int main(){
    printf("Enter The String: ");
    char s[50];
    scanf("%s",s);
    Pd(s);
    return 0;
}