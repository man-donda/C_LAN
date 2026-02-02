#include <stdio.h>
#include <string.h>

int main(){
    char str[]="Hey there how are you";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1;
    }
    printf("%s", str);

    //    char str[]="Ifz!uifsf!ipx!bsf!zpv";
    // for (int i = 0; i < strlen(str); i++)
    // {
    //     str[i] = str[i] - 1;
    // }
    // printf("%s", str);

    return 0;
}