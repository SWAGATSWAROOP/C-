#include<stdio.h>

typedef struct employee{
    char name[30];
    int age;
    char DOT[11];
}emp;

int main(){
    int n;
    emp e[5];
    for(int i=0;i<5;i++){
        printf("Enter The Employee Details with Corresponding number %d :",i+1);
        scanf("%s %d %s",e[i].name,&e[i].age,e[i].DOT);
    }
 
printf("Enter the Employee No to get details: ");
scanf("%d",&n);
switch(n){
    case 1:
    printf("%s %d %s\n",e[0].name,e[0].age,e[0].DOT);
    break;

    case 2:
    printf("%s %d %s\n",e[1].name,e[1].age,e[1].DOT);
    break;

    case 3:
    printf("%s %d %s\n",e[2].name,e[2].age,e[2].DOT);
    break;

    case 4:
    printf("%s %d %s\n",e[3].name,e[3].age,e[3].DOT);
    break;

    case 5:
    printf("%s %d %s\n",e[4].name,e[4].age,e[4].DOT);
    break;

    default:
    printf("No such employee exist.\n");
    break;
}
    return 0;
}