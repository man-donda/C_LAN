#include <stdio.h>

int main()
{
    char str[5];
    // scanf("%s", str);
    for (int i = 0; i < 4; i++)
    {
        scanf("%c", &str[i]);
        fflush(stdin);
    }
    str[4] = '\0';
    printf("%s", str);
    return 0;
}