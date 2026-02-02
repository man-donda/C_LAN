#include <stdio.h>

int main(){
    char ch='M';
    printf("the character is %c\n", ch);
    printf("the value of character id %d\n", ch);

    if(ch>=97 && ch<=122){
        printf("the character is in lowercase");
    }
    else{
        printf("the character is not in lowercase");
    }

    return 0;
}