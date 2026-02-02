#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[30];
};

int main(){
    struct employee e1;
    strcpy(e1.name,"Mann");
        e1.code = 4511;
        e1.salary = 45.22;
        
    
    printf("%d %.2f %s", e1.code, e1.salary, e1.name);
    return 0;
}