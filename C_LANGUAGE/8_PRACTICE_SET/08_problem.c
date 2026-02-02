#include <stdio.h>
#include <string.h>

int main(){
    char c='z';
    int contains=0;
    char str[]="Hey there how are you hhhhhh";
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i]==c){
            contains=1;
            break;
        }
    }
    if(contains)
    printf("yes it contains\n");
    else 
    printf("does not contain\n");

    return 0;
}