#include <stdio.h>

typedef struct employee
{
    int salary;
    float score;
} emp;

int main()
{
    emp e1;
    emp *ptr = &e1;
    // (*ptr).salary = 35000;
    // (*ptr).score = 3.5;
    ptr->salary = 35000;
    ptr->score = 3.5;

    printf("the salary is %d and the score is %.2f", ptr->salary, ptr->score);
    return 0;
}