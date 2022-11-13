#include<stdio.h>
#include<string.h>

/*this program shows that unions have shared memory.
I have taken input in one variable of union and output have come from
another this is also a form of accessing union & showing its shared memory utility.*/

typedef union value{
    char letter;
    int number; 
}as;

int main(){
    printf("\n");
    as f;
    printf("Enter the serial number to see the alphabet: ");
    scanf("%d",&f.number);
    printf("%c\n",f.letter);
    return 0;
}