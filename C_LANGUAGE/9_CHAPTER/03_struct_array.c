#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[30];
};

int main()
{
    struct employee facebook[100];
    facebook[0].code = 99;
    facebook[1].code = 77;
    struct employee mann = {101, 78.22, "mann"};
    printf("%d %f %s ", mann.code, mann.salary, mann.name);

    return 0;
}