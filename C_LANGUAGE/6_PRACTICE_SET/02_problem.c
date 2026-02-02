#include <stdio.h>

returning_5(int *);
returning_5(int *j)
{
    printf("the address of j is %u\n", j);
    printf("the value at j is %d\n", *j);
}
int main()
{
    int i = 2;
    int *j = &i;
    printf("the address of i is %u\n", &i);
    returning_5(j);

    return 0;
}