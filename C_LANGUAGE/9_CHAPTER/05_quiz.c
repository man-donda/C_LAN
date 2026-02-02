#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[30];
};

void show(struct employee e){
    printf(" code is %d\n salary is %f\n name is %s\n", e.code, e.salary, e.name);
}

int main(){
    
    struct employee e1;
    e1.code = 101;
    strcpy(e1.name,"mann");
    e1.salary = 23.500;
    show(e1);

    return 0;
}