#include <stdio.h>

int main(){
    char ch;
    FILE *ptr;
    ptr = fopen("mann.txt","r");
    while(1)
    {
        ch = fgetc(ptr);
        printf("%c",ch);
        //when all the contains of the file read break
        if(ch == EOF){
            break;
        }
    }
    return 0;
}