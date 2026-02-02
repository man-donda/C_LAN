#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Mann";
    printf("%d", strlen(str));
    char s1[] = "hello";
    char s2[] = " bhai";

    char target[30];
    strcpy(target, str);
    // printf("%s %s", str, target);

    strcat(s1, s2);
    // printf("%s", s1);

    int a = strcmp("far", "ajoke");
    // printf("%d", a);

    return 0;
}