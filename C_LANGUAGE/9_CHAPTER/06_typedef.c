#include <stdio.h>
#include <string.h>

typedef struct employee{
    int code;
    float salary;
    char name[30];
}emp;

int main(){
    
    // struct employee e1;
    emp e1;
    emp* ptr1 = &e1;
    e1.code=111;
    strcpy(e1.name,"mann");
    e1.salary=45.500;

    printf("%d %f %s\n", e1.code, e1.salary, e1.name);
    printf(" code is %d\n salary is %f\n name is %s\n ", e1.code, e1.salary,e1.name);
    printf("code is %d\n salary is %f\n name is %s\n ", ptr1->code, ptr1->salary,ptr1->name);
    return 0;
}