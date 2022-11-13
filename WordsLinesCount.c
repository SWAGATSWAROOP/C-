#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE* fp;
    char ch,sp=' ';
    int space=0,line=0,word = 0;
    fp = fopen("sample.txt","a+");
    rewind(fp);
    while((ch=fgetc(fp)) != EOF)
    {
        if((ch ==' ') && (sp ==' ')){
            space++;
        }
        else if((ch==' ') && (sp!=' ')){
            space++;
            word++;
        }
        if(ch == '\n' || ch == '\0'){
            line ++;
        }
        if(ch!='\n'){
            sp = ch;
        }
    }
    if(sp!=' '){
        word++;
    }
    printf("The number of lines %d ,the number of words %d and spaces are %d.\n",line+1,word,space);
    fclose(fp);
    return 0;
}