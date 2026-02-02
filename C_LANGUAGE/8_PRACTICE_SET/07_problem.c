#include <stdio.h>
#include <string.h>

int main(){
    char c='h';
    int count=0;
    char str[]="Hey there how are you hhhhhh";
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i]==c){
            count++;
        }
    }
    printf("%d", count);
        return 0;
}